
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36117b90(void *this,int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = FUN_36026a70(0x362fcb00);
  iVar10 = *(int *)(param_1 + 0x104);
  iVar7 = *(int *)(param_1 + 0x108) + iVar10;
  do {
    if (iVar7 <= iVar10) {
      iVar10 = FUN_36026a70(0x362fcae0);
      if (0 < iVar10) {
        FUN_36115700(this,param_1);
      }
      iVar10 = FUN_36026a70(0x362fcb00);
      *(int *)(param_1 + 0x104) = iVar6;
      *(int *)(param_1 + 0x108) = iVar10 - iVar6;
      return;
    }
    iVar9 = *(int *)(DAT_362fcaf4 + iVar10 * 4);
    iVar13 = *(int *)(DAT_362fcaf4 + 4 + iVar10 * 4);
    iVar11 = iVar9 * 0x1c;
    iVar12 = iVar13 * 0x1c;
    fVar4 = *(float *)(*(int *)((int)this + 0xe0c) + 0xc + iVar11);
    fVar5 = *(float *)(iVar12 + 0xc + *(int *)((int)this + 0xe0c));
    if (fVar4 < _DAT_3622376c == (fVar4 == _DAT_3622376c)) {
      if ((int)fVar5 < 1) {
        puVar1 = (undefined4 *)((int)this + 0xe08);
        uVar8 = FUN_3611f460((int)puVar1);
        *(int *)((int)this + 0xe10) = *(int *)((int)this + 0xe10) + 1;
        iVar13 = FUN_3611f940(puVar1);
        if (iVar13 < *(int *)((int)this + 0xe10)) {
          iVar13 = FUN_3611f940(puVar1);
          FUN_36120a90(puVar1,iVar13 + *(int *)((int)this + 0xe14));
        }
        pfVar2 = (float *)(*(int *)((int)this + 0xe10) * 0x1c + -0x1c + *(int *)((int)this + 0xe0c))
        ;
        iVar13 = *(int *)((int)this + 0xe0c);
        pfVar3 = (float *)(iVar13 + 8 + iVar12);
        fVar5 = (_DAT_36223384 / (fVar4 - fVar5)) * fVar5;
        *pfVar2 = *(float *)(iVar13 + iVar12) -
                  (*(float *)(iVar13 + iVar11) - *(float *)(iVar13 + iVar12)) * fVar5;
        pfVar2[1] = *(float *)(iVar13 + 4 + iVar12) -
                    (*(float *)(iVar13 + 4 + iVar11) - *(float *)(iVar13 + 4 + iVar12)) * fVar5;
        pfVar2[2] = *pfVar3 - (*(float *)(iVar13 + 8 + iVar11) - *pfVar3) * fVar5;
        iVar11 = DAT_362fcb08 + 1;
        DAT_362fcb08 = iVar11;
        iVar13 = FUN_3600bef0(&DAT_362fcb00);
        if (iVar13 < iVar11) {
          iVar13 = FUN_3600bef0(&DAT_362fcb00);
          FUN_36026aa0(&DAT_362fcb00,iVar13 + _DAT_362fcb0c);
        }
        *(int *)(DAT_362fcb04 + -4 + DAT_362fcb08 * 4) = iVar9;
        iVar13 = DAT_362fcb08 + 1;
        DAT_362fcb08 = iVar13;
        iVar9 = FUN_3600bef0(&DAT_362fcb00);
        if (iVar9 < iVar13) {
          iVar9 = FUN_3600bef0(&DAT_362fcb00);
          FUN_36026aa0(&DAT_362fcb00,iVar9 + _DAT_362fcb0c);
        }
        *(undefined4 *)(DAT_362fcb04 + -4 + DAT_362fcb08 * 4) = uVar8;
        goto LAB_36117d44;
      }
      iVar12 = DAT_362fcb08 + 1;
      DAT_362fcb08 = iVar12;
      iVar11 = FUN_3600bef0(&DAT_362fcb00);
      if (iVar11 < iVar12) {
        iVar11 = FUN_3600bef0(&DAT_362fcb00);
        FUN_36026aa0(&DAT_362fcb00,iVar11 + _DAT_362fcb0c);
      }
      *(int *)(DAT_362fcb04 + -4 + DAT_362fcb08 * 4) = iVar9;
      iVar11 = DAT_362fcb08 + 1;
      DAT_362fcb08 = iVar11;
      iVar9 = FUN_3600bef0(&DAT_362fcb00);
      if (iVar9 < iVar11) {
        iVar9 = FUN_3600bef0(&DAT_362fcb00);
        FUN_36026aa0(&DAT_362fcb00,iVar9 + _DAT_362fcb0c);
      }
      *(int *)(DAT_362fcb04 + -4 + DAT_362fcb08 * 4) = iVar13;
    }
    else if (fVar5 < _DAT_3622376c == (fVar5 == _DAT_3622376c)) {
      puVar1 = (undefined4 *)((int)this + 0xe08);
      uVar8 = FUN_3611f460((int)puVar1);
      *(int *)((int)this + 0xe10) = *(int *)((int)this + 0xe10) + 1;
      iVar9 = FUN_3611f940(puVar1);
      if (iVar9 < *(int *)((int)this + 0xe10)) {
        iVar9 = FUN_3611f940(puVar1);
        FUN_36120a90(puVar1,iVar9 + *(int *)((int)this + 0xe14));
      }
      pfVar2 = (float *)(*(int *)((int)this + 0xe10) * 0x1c + -0x1c + *(int *)((int)this + 0xe0c));
      iVar9 = *(int *)((int)this + 0xe0c);
      pfVar3 = (float *)(iVar9 + 8 + iVar11);
      fVar4 = (_DAT_36223384 / (fVar4 - fVar5)) * fVar4;
      *pfVar2 = *(float *)(iVar9 + iVar11) -
                (*(float *)(iVar9 + iVar11) - *(float *)(iVar9 + iVar12)) * fVar4;
      pfVar2[1] = *(float *)(iVar9 + 4 + iVar11) -
                  (*(float *)(iVar9 + 4 + iVar11) - *(float *)(iVar9 + 4 + iVar12)) * fVar4;
      pfVar2[2] = *pfVar3 - (*pfVar3 - *(float *)(iVar9 + 8 + iVar12)) * fVar4;
      iVar11 = DAT_362fcb08 + 1;
      DAT_362fcb08 = iVar11;
      iVar9 = FUN_3600bef0(&DAT_362fcb00);
      if (iVar9 < iVar11) {
        iVar9 = FUN_3600bef0(&DAT_362fcb00);
        FUN_36026aa0(&DAT_362fcb00,iVar9 + _DAT_362fcb0c);
      }
      *(undefined4 *)(DAT_362fcb04 + -4 + DAT_362fcb08 * 4) = uVar8;
      iVar11 = DAT_362fcb08 + 1;
      DAT_362fcb08 = iVar11;
      iVar9 = FUN_3600bef0(&DAT_362fcb00);
      if (iVar9 < iVar11) {
        iVar9 = FUN_3600bef0(&DAT_362fcb00);
        FUN_36026aa0(&DAT_362fcb00,iVar9 + _DAT_362fcb0c);
      }
      *(int *)(DAT_362fcb04 + -4 + DAT_362fcb08 * 4) = iVar13;
LAB_36117d44:
      iVar13 = DAT_362fcae8 + 1;
      DAT_362fcae8 = iVar13;
      iVar9 = FUN_3600bef0(&DAT_362fcae0);
      if (iVar9 < iVar13) {
        iVar9 = FUN_3600bef0(&DAT_362fcae0);
        FUN_36026aa0(&DAT_362fcae0,iVar9 + _DAT_362fcaec);
      }
      *(undefined4 *)(DAT_362fcae4 + -4 + DAT_362fcae8 * 4) = uVar8;
    }
    iVar10 = iVar10 + 2;
  } while( true );
}

