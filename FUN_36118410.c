
void __thiscall FUN_36118410(void *this,float *param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  pfVar1 = (float *)((int)this + 0xd7c);
  *pfVar1 = *param_1;
  *(float *)((int)this + 0xd80) = param_1[1];
  *(float *)((int)this + 0xd84) = param_1[2];
  *(float *)((int)this + 0xd88) = param_1[3];
  uVar12 = 0;
  iVar9 = FUN_3611f460((int)this + 0xe08);
  iVar14 = *(int *)((int)this + 0xd78);
  if (3 < iVar9 - iVar14) {
    iVar13 = iVar14 * 0x1c;
    param_1 = (float *)(((iVar9 - iVar14) - 4U >> 2) + 1);
    iVar14 = iVar14 + (int)param_1 * 4;
    do {
      iVar2 = *(int *)((int)this + 0xe0c);
      uVar3 = *(uint *)(iVar2 + 0x10 + iVar13);
      pfVar11 = (float *)(iVar2 + iVar13);
      pfVar11[3] = (*pfVar1 * *pfVar11 +
                   pfVar11[2] * *(float *)((int)this + 0xd84) +
                   *(float *)(iVar2 + 4 + iVar13) * *(float *)((int)this + 0xd80)) -
                   *(float *)((int)this + 0xd88);
      fVar4 = pfVar11[3];
      pfVar11[4] = (float)(uVar3 >> 1 | (uint)fVar4 & 0x80000000);
      iVar2 = *(int *)((int)this + 0xe0c);
      uVar3 = *(uint *)(iVar2 + 0x2c + iVar13);
      pfVar11 = (float *)(iVar2 + 0x1c + iVar13);
      pfVar11[3] = (*pfVar1 * *pfVar11 +
                   pfVar11[2] * *(float *)((int)this + 0xd84) +
                   *(float *)(iVar2 + 0x20 + iVar13) * *(float *)((int)this + 0xd80)) -
                   *(float *)((int)this + 0xd88);
      fVar5 = pfVar11[3];
      pfVar11[4] = (float)(uVar3 >> 1 | (uint)fVar5 & 0x80000000);
      pfVar11 = (float *)(*(int *)((int)this + 0xe0c) + 0x38 + iVar13);
      pfVar11[3] = (*pfVar1 * *pfVar11 +
                   pfVar11[2] * *(float *)((int)this + 0xd84) +
                   *(float *)(*(int *)((int)this + 0xe0c) + 0x3c + iVar13) *
                   *(float *)((int)this + 0xd80)) - *(float *)((int)this + 0xd88);
      fVar6 = pfVar11[3];
      pfVar11[4] = (float)((uint)pfVar11[4] >> 1 | (uint)fVar6 & 0x80000000);
      pfVar11 = (float *)(*(int *)((int)this + 0xe0c) + iVar13 + 0x54);
      pfVar11[3] = (*pfVar1 * *pfVar11 +
                   pfVar11[2] * *(float *)((int)this + 0xd84) +
                   *(float *)(*(int *)((int)this + 0xe0c) + 4 + iVar13 + 0x54) *
                   *(float *)((int)this + 0xd80)) - *(float *)((int)this + 0xd88);
      pfVar11[4] = (float)((uint)pfVar11[4] >> 1 | (uint)pfVar11[3] & 0x80000000);
      uVar12 = uVar12 | (uint)fVar4 & 0x80000000 | (uint)fVar5 & 0x80000000 |
               (uint)fVar6 & 0x80000000 | (uint)pfVar11[3] & 0x80000000;
      iVar13 = iVar13 + 0x70;
      param_1 = (float *)((int)param_1 + -1);
    } while (param_1 != (float *)0x0);
  }
  if (iVar14 < iVar9) {
    iVar13 = iVar14 * 0x1c;
    param_1 = (float *)(iVar9 - iVar14);
    do {
      pfVar11 = (float *)(*(int *)((int)this + 0xe0c) + 4 + iVar13);
      pfVar10 = (float *)(*(int *)((int)this + 0xe0c) + iVar13);
      iVar13 = iVar13 + 0x1c;
      pfVar10[3] = (*pfVar1 * *pfVar10 +
                   pfVar10[2] * *(float *)((int)this + 0xd84) +
                   *pfVar11 * *(float *)((int)this + 0xd80)) - *(float *)((int)this + 0xd88);
      pfVar10[4] = (float)((uint)pfVar10[4] >> 1 | (uint)pfVar10[3] & 0x80000000);
      uVar12 = uVar12 | (uint)pfVar10[3] & 0x80000000;
      param_1 = (float *)((int)param_1 + -1);
    } while (param_1 != (float *)0x0);
  }
  if (uVar12 != 0) {
    iVar14 = *(int *)(*(int *)((int)this + 0xd90) + 0xb4);
    iVar9 = *(int *)(*(int *)((int)this + 0xd90) + 0xb8) + iVar14;
    if (iVar14 < iVar9) {
      do {
        iVar13 = FUN_3611fd70((void *)((int)this + 0xd94),iVar14);
        FUN_36117b90(this,iVar13);
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar9);
    }
    uVar8 = DAT_362fcb04;
    uVar7 = DAT_362fcb00;
    DAT_362fcb00 = DAT_362fcaf0;
    DAT_362fcb04 = DAT_362fcaf4;
    DAT_362fcaf0 = uVar7;
    DAT_362fcaf4 = uVar8;
    DAT_362fcaf8 = DAT_362fcb08;
    DAT_362fcb08 = 0;
  }
  return;
}

