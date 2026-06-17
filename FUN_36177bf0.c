
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36177bf0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar7 = (*(int *)(param_1 + 0x18) + -1) / iVar1;
  iVar8 = (*(int *)(param_1 + 0x1c) + -1) / iVar1;
  *(int *)(param_1 + 0x4c) = iVar7;
  *(int *)(param_1 + 0x50) = iVar8;
  FUN_361791e0((void *)(param_1 + 0x100),iVar8 * iVar7);
  local_68 = 0;
  if (0 < iVar8) {
    local_50 = iVar1 + 1;
    local_64 = 0;
    local_48 = 0;
    local_4c = 1;
    do {
      local_60 = 0;
      if (0 < iVar7) {
        local_5c = local_48;
        local_58 = iVar1 + 1;
        fVar3 = (float)local_68 / (float)iVar8;
        local_6c = 0;
        iVar10 = local_4c;
        do {
          iVar11 = *(int *)(param_1 + 0x104) + local_5c;
          if (0 < local_60) {
            *(int *)(iVar11 + 0x18) = iVar10 + -2;
          }
          if (local_60 < iVar7 + -1) {
            *(int *)(iVar11 + 0x1c) = iVar10;
          }
          if (0 < local_68) {
            *(int *)(iVar11 + 0x20) = (-1 - iVar7) + iVar10;
          }
          if (local_68 < iVar8 + -1) {
            *(int *)(iVar11 + 0x24) = iVar10 + iVar7 + -1;
          }
          *(int *)(iVar11 + 0x38) = local_6c;
          *(int *)(iVar11 + 0x3c) = local_64;
          *(int *)(iVar11 + 0x40) = local_58;
          *(int *)(iVar11 + 0x44) = local_50;
          puVar12 = (undefined4 *)(iVar11 + 0x48);
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          *(undefined4 *)(iVar11 + 0x48) = 0x3f800000;
          *(undefined4 *)(iVar11 + 0x5c) = 0x3f800000;
          *(undefined4 *)(iVar11 + 0x70) = 0x3f800000;
          *(float *)(iVar11 + 0x54) = (float)local_6c;
          *(float *)(iVar11 + 0x74) = (float)local_64;
          puVar12 = local_30;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          iVar9 = *(int *)(param_1 + 0x18);
          iVar2 = *(int *)(param_1 + 0x1c);
          *(undefined4 *)(iVar11 + 0x7c) = local_30[1];
          fVar5 = _DAT_36223384 / (float)(iVar9 + -1);
          *(undefined4 *)(iVar11 + 0x80) = local_30[2];
          *(undefined4 *)(iVar11 + 0x88) = local_20;
          *(undefined4 *)(iVar11 + 0x90) = local_18;
          *(undefined4 *)(iVar11 + 0x98) = local_10;
          *(undefined4 *)(iVar11 + 0x9c) = local_c;
          *(undefined4 *)(iVar11 + 0xa4) = local_4;
          *(undefined4 *)(iVar11 + 0xa0) = 0x3f800000;
          fVar6 = _DAT_36223384 / (float)(iVar2 + -1);
          fVar4 = (float)local_60 / (float)iVar7;
          *(float *)(iVar11 + 0x78) = fVar5;
          *(float *)(iVar11 + 0x84) = fVar4;
          *(float *)(iVar11 + 0x8c) = fVar6;
          *(float *)(iVar11 + 0x94) = fVar3;
          *(undefined4 *)(iVar11 + 0xac) = local_30[1];
          *(float *)(iVar11 + 0xa8) = fVar5;
          *(undefined4 *)(iVar11 + 0xb0) = local_30[2];
          *(float *)(iVar11 + 0xb4) = fVar4;
          *(undefined4 *)(iVar11 + 0xb8) = local_20;
          *(float *)(iVar11 + 0xbc) = fVar6;
          *(undefined4 *)(iVar11 + 0xc0) = local_18;
          *(float *)(iVar11 + 0xc4) = fVar3;
          *(undefined4 *)(iVar11 + 200) = local_10;
          *(undefined4 *)(iVar11 + 0xcc) = local_c;
          *(undefined4 *)(iVar11 + 0xd4) = local_4;
          *(undefined4 *)(iVar11 + 0xd0) = 0x3f800000;
          *(float *)(iVar11 + 0xd8) = fVar5;
          *(undefined4 *)(iVar11 + 0xdc) = local_30[1];
          *(float *)(iVar11 + 0xe4) = fVar4;
          *(undefined4 *)(iVar11 + 0xe0) = local_30[2];
          *(float *)(iVar11 + 0xec) = fVar6;
          local_5c = local_5c + 0x160;
          *(undefined4 *)(iVar11 + 0xe8) = local_20;
          *(undefined4 *)(iVar11 + 0xf0) = local_18;
          *(float *)(iVar11 + 0xf4) = fVar3;
          *(undefined4 *)(iVar11 + 0xf8) = local_10;
          local_58 = local_58 + iVar1;
          *(undefined4 *)(iVar11 + 0xfc) = local_c;
          *(undefined4 *)(iVar11 + 0x100) = 0x3f800000;
          *(undefined4 *)(iVar11 + 0x104) = local_4;
          local_60 = local_60 + 1;
          iVar10 = iVar10 + 1;
          local_6c = local_6c + iVar1;
        } while (local_60 < iVar7);
      }
      local_64 = local_64 + iVar1;
      local_50 = local_50 + iVar1;
      local_4c = local_4c + iVar7;
      local_68 = local_68 + 1;
      local_48 = local_48 + iVar7 * 0x160;
    } while (local_68 < iVar8);
  }
  return;
}

