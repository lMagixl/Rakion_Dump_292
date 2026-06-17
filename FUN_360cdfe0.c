
void __fastcall FUN_360cdfe0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int local_50;
  undefined1 local_18 [24];
  
  piVar9 = *(int **)(param_1 + 0xec);
  iVar12 = 0;
  local_50 = 0;
  if (0 < *piVar9) {
    do {
      pfVar10 = (float *)(piVar9[1] + iVar12);
      fVar1 = *(float *)(param_1 + 0x130);
      fVar2 = *(float *)(param_1 + 0x138);
      fVar3 = *(float *)(param_1 + 0x134);
      fVar4 = *(float *)(param_1 + 0x140);
      fVar5 = *(float *)(param_1 + 0x144);
      fVar6 = *(float *)(param_1 + 0x13c);
      fVar7 = *(float *)(param_1 + 0x11c);
      fVar8 = *(float *)(param_1 + 0x120);
      pfVar10[4] = *(float *)(param_1 + 0x124) * *pfVar10 +
                   pfVar10[2] * *(float *)(param_1 + 300) +
                   *(float *)(param_1 + 0x128) * *(float *)(piVar9[1] + 4 + iVar12) +
                   *(float *)(param_1 + 0x118);
      pfVar10[5] = pfVar10[1] * fVar3 + pfVar10[2] * fVar2 + fVar1 * *pfVar10 + fVar7;
      pfVar10[6] = *pfVar10 * fVar6 + fVar5 * pfVar10[2] + fVar4 * pfVar10[1] + fVar8;
      pfVar10 = (float *)(piVar9[1] + iVar12);
      fVar1 = *(float *)(param_1 + 0x164);
      fVar2 = *(float *)(param_1 + 0x160);
      fVar3 = *(float *)(param_1 + 0x168);
      fVar4 = *(float *)(param_1 + 0x174);
      fVar5 = *(float *)(param_1 + 0x16c);
      fVar6 = *(float *)(param_1 + 0x170);
      fVar7 = *(float *)(param_1 + 0x14c);
      fVar8 = *(float *)(param_1 + 0x150);
      pfVar10[7] = *(float *)(param_1 + 0x15c) * pfVar10[2] +
                   *(float *)(param_1 + 0x158) * pfVar10[1] +
                   *(float *)(piVar9[1] + iVar12) * *(float *)(param_1 + 0x154) +
                   *(float *)(param_1 + 0x148);
      pfVar10[8] = fVar3 * pfVar10[2] + *pfVar10 * fVar2 + fVar1 * pfVar10[1] + fVar7;
      pfVar10[9] = fVar6 * pfVar10[1] + fVar5 * *pfVar10 + fVar4 * pfVar10[2] + fVar8;
      iVar11 = iVar12 + piVar9[1];
      pfVar10 = FUN_360bef70(local_18,(float *)(iVar11 + 0x10),(float *)(iVar11 + 0x1c));
      *(float *)(iVar11 + 0x28) = *pfVar10;
      *(float *)(iVar11 + 0x2c) = pfVar10[1];
      *(float *)(iVar11 + 0x30) = pfVar10[2];
      *(float *)(iVar11 + 0x34) = pfVar10[3];
      *(float *)(iVar11 + 0x38) = pfVar10[4];
      *(float *)(iVar11 + 0x3c) = pfVar10[5];
      fVar1 = *(float *)(piVar9[1] + 0xc + iVar12);
      iVar11 = piVar9[1] + iVar12;
      iVar12 = iVar12 + 0x40;
      *(float *)(iVar11 + 0x34) = fVar1 + *(float *)(iVar11 + 0x34);
      *(float *)(iVar11 + 0x28) = *(float *)(iVar11 + 0x28) - fVar1;
      *(float *)(iVar11 + 0x38) = fVar1 + *(float *)(iVar11 + 0x38);
      *(float *)(iVar11 + 0x2c) = *(float *)(iVar11 + 0x2c) - fVar1;
      *(float *)(iVar11 + 0x3c) = fVar1 + *(float *)(iVar11 + 0x3c);
      *(float *)(iVar11 + 0x30) = *(float *)(iVar11 + 0x30) - fVar1;
      local_50 = local_50 + 1;
    } while (local_50 < *piVar9);
  }
  return;
}

