
uint __fastcall FUN_36121490(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_c;
  
  uVar12 = 0;
  iVar7 = FUN_3611f460(param_1 + 0xe08);
  iVar10 = *(int *)(param_1 + 0xd78);
  if (3 < iVar7 - iVar10) {
    iVar11 = iVar10 * 0x1c;
    local_c = ((iVar7 - iVar10) - 4U >> 2) + 1;
    iVar10 = iVar10 + local_c * 4;
    do {
      iVar2 = *(int *)(param_1 + 0xe0c);
      uVar3 = *(uint *)(iVar2 + 0x10 + iVar11);
      pfVar9 = (float *)(iVar2 + iVar11);
      iVar1 = iVar11 + 0x54;
      pfVar9[3] = (*(float *)(param_1 + 0xd7c) * *pfVar9 +
                  pfVar9[2] * *(float *)(param_1 + 0xd84) +
                  *(float *)(iVar2 + 4 + iVar11) * *(float *)(param_1 + 0xd80)) -
                  *(float *)(param_1 + 0xd88);
      fVar4 = pfVar9[3];
      pfVar9[4] = (float)(uVar3 >> 1 | (uint)fVar4 & 0x80000000);
      iVar2 = *(int *)(param_1 + 0xe0c);
      uVar3 = *(uint *)(iVar11 + 0x2c + iVar2);
      pfVar9 = (float *)(iVar11 + 0x1c + iVar2);
      pfVar9[3] = (*(float *)(param_1 + 0xd7c) * *pfVar9 +
                  pfVar9[2] * *(float *)(param_1 + 0xd84) +
                  *(float *)(iVar11 + 0x20 + iVar2) * *(float *)(param_1 + 0xd80)) -
                  *(float *)(param_1 + 0xd88);
      fVar5 = pfVar9[3];
      pfVar9[4] = (float)(uVar3 >> 1 | (uint)fVar5 & 0x80000000);
      pfVar9 = (float *)(*(int *)(param_1 + 0xe0c) + -0x1c + iVar1);
      pfVar9[3] = (*(float *)(param_1 + 0xd7c) * *pfVar9 +
                  pfVar9[2] * *(float *)(param_1 + 0xd84) +
                  *(float *)(*(int *)(param_1 + 0xe0c) + -0x18 + iVar1) *
                  *(float *)(param_1 + 0xd80)) - *(float *)(param_1 + 0xd88);
      fVar6 = pfVar9[3];
      pfVar9[4] = (float)((uint)pfVar9[4] >> 1 | (uint)fVar6 & 0x80000000);
      pfVar9 = (float *)(*(int *)(param_1 + 0xe0c) + iVar1);
      pfVar9[3] = (*(float *)(param_1 + 0xd7c) * *pfVar9 +
                  pfVar9[2] * *(float *)(param_1 + 0xd84) +
                  *(float *)(*(int *)(param_1 + 0xe0c) + 4 + iVar1) * *(float *)(param_1 + 0xd80)) -
                  *(float *)(param_1 + 0xd88);
      pfVar9[4] = (float)((uint)pfVar9[4] >> 1 | (uint)pfVar9[3] & 0x80000000);
      uVar12 = uVar12 | (uint)fVar4 & 0x80000000 | (uint)fVar5 & 0x80000000 |
               (uint)fVar6 & 0x80000000 | (uint)pfVar9[3] & 0x80000000;
      iVar11 = iVar11 + 0x70;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  if (iVar10 < iVar7) {
    iVar11 = iVar10 * 0x1c;
    iVar7 = iVar7 - iVar10;
    do {
      pfVar9 = (float *)(*(int *)(param_1 + 0xe0c) + 4 + iVar11);
      pfVar8 = (float *)(*(int *)(param_1 + 0xe0c) + iVar11);
      iVar11 = iVar11 + 0x1c;
      pfVar8[3] = (*(float *)(param_1 + 0xd7c) * *pfVar8 +
                  pfVar8[2] * *(float *)(param_1 + 0xd84) + *pfVar9 * *(float *)(param_1 + 0xd80)) -
                  *(float *)(param_1 + 0xd88);
      uVar12 = uVar12 | (uint)pfVar8[3] & 0x80000000;
      iVar7 = iVar7 + -1;
      pfVar8[4] = (float)((uint)pfVar8[4] >> 1 | (uint)pfVar8[3] & 0x80000000);
    } while (iVar7 != 0);
  }
  return uVar12;
}

