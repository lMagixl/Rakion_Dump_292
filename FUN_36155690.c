
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36155690(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  float local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  undefined1 local_24;
  undefined4 *local_18;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219c55;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_3615a190(param_1);
  iVar6 = FUN_3615a2c0(param_1 + 8);
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  local_4 = 1;
  if (iVar6 < 1) {
    param_1[0x12] = param_1[0x12] | 4;
    ExceptionList = local_c;
    return;
  }
  if (iVar5 != 0) {
    local_18 = (undefined4 *)thunk_FUN_361bf99c(iVar5 * 4 + 4);
    local_10 = (undefined4 *)thunk_FUN_361bf99c((iVar5 + 1) * 0x20);
    local_14 = iVar5;
  }
  puVar16 = local_10;
  for (uVar10 = (uint)(iVar5 << 5) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  for (iVar11 = 0; iVar7 = iVar5, puVar14 = local_18, iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined1 *)puVar16 = 0;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  local_54 = 0.0;
  if (0 < iVar6) {
    local_50 = (int *)0x0;
    do {
      iVar15 = param_1[9] + (int)local_50;
      iVar7 = FUN_3600c3d0((undefined4 *)(iVar15 + 4));
      iVar11 = 0;
      if (3 < iVar7) {
        do {
          iVar1 = iVar11 * 8;
          iVar4 = *(int *)(*(int *)(iVar15 + 8) + iVar1);
          fVar2 = *(float *)(*(int *)(iVar15 + 8) + 4 + iVar1);
          pfVar12 = (float *)(local_10 + iVar4 * 8);
          if ((float)local_10[iVar4 * 8 + 3] < fVar2) {
            if (pfVar12[3] <= _DAT_3622376c) {
              local_18[iVar4] = local_18[iVar4] + 1;
            }
            pfVar12[3] = fVar2;
            pfVar12[7] = local_54;
          }
          if (pfVar12[2] < fVar2) {
            fVar3 = pfVar12[3];
            pfVar12[3] = pfVar12[2];
            pfVar12[2] = fVar3;
            fVar3 = pfVar12[7];
            pfVar12[7] = pfVar12[6];
            pfVar12[6] = fVar3;
          }
          if (pfVar12[1] < fVar2) {
            fVar3 = pfVar12[2];
            pfVar12[2] = pfVar12[1];
            pfVar12[1] = fVar3;
            fVar3 = pfVar12[6];
            pfVar12[6] = pfVar12[5];
            pfVar12[5] = fVar3;
          }
          if (*pfVar12 < fVar2) {
            fVar2 = pfVar12[1];
            pfVar12[1] = *pfVar12;
            *pfVar12 = fVar2;
            fVar2 = pfVar12[5];
            pfVar12[5] = pfVar12[4];
            pfVar12[4] = fVar2;
          }
          iVar4 = *(int *)(iVar1 + 8 + *(int *)(iVar15 + 8));
          fVar2 = *(float *)(iVar1 + 0xc + *(int *)(iVar15 + 8));
          pfVar12 = (float *)(local_10 + iVar4 * 8);
          if ((float)local_10[iVar4 * 8 + 3] < fVar2) {
            if (pfVar12[3] <= _DAT_3622376c) {
              local_18[iVar4] = local_18[iVar4] + 1;
            }
            pfVar12[3] = fVar2;
            pfVar12[7] = local_54;
          }
          if (pfVar12[2] < fVar2) {
            fVar3 = pfVar12[3];
            pfVar12[3] = pfVar12[2];
            pfVar12[2] = fVar3;
            fVar3 = pfVar12[7];
            pfVar12[7] = pfVar12[6];
            pfVar12[6] = fVar3;
          }
          if (pfVar12[1] < fVar2) {
            fVar3 = pfVar12[2];
            pfVar12[2] = pfVar12[1];
            pfVar12[1] = fVar3;
            fVar3 = pfVar12[6];
            pfVar12[6] = pfVar12[5];
            pfVar12[5] = fVar3;
          }
          if (*pfVar12 < fVar2) {
            fVar2 = pfVar12[1];
            pfVar12[1] = *pfVar12;
            *pfVar12 = fVar2;
            fVar2 = pfVar12[5];
            pfVar12[5] = pfVar12[4];
            pfVar12[4] = fVar2;
          }
          iVar4 = *(int *)(iVar1 + 0x10 + *(int *)(iVar15 + 8));
          fVar2 = *(float *)(iVar1 + 0x14 + *(int *)(iVar15 + 8));
          pfVar12 = (float *)(local_10 + iVar4 * 8);
          if ((float)local_10[iVar4 * 8 + 3] < fVar2) {
            if (pfVar12[3] <= _DAT_3622376c) {
              local_18[iVar4] = local_18[iVar4] + 1;
            }
            pfVar12[3] = fVar2;
            pfVar12[7] = local_54;
          }
          if (pfVar12[2] < fVar2) {
            fVar3 = pfVar12[3];
            pfVar12[3] = pfVar12[2];
            pfVar12[2] = fVar3;
            fVar3 = pfVar12[7];
            pfVar12[7] = pfVar12[6];
            pfVar12[6] = fVar3;
          }
          if (pfVar12[1] < fVar2) {
            fVar3 = pfVar12[2];
            pfVar12[2] = pfVar12[1];
            pfVar12[1] = fVar3;
            fVar3 = pfVar12[6];
            pfVar12[6] = pfVar12[5];
            pfVar12[5] = fVar3;
          }
          if (*pfVar12 < fVar2) {
            fVar2 = pfVar12[1];
            pfVar12[1] = *pfVar12;
            *pfVar12 = fVar2;
            fVar2 = pfVar12[5];
            pfVar12[5] = pfVar12[4];
            pfVar12[4] = fVar2;
          }
          iVar4 = *(int *)(*(int *)(iVar15 + 8) + iVar1 + 0x18);
          fVar2 = *(float *)(*(int *)(iVar15 + 8) + 4 + iVar1 + 0x18);
          pfVar12 = (float *)(local_10 + iVar4 * 8);
          if ((float)local_10[iVar4 * 8 + 3] < fVar2) {
            if (pfVar12[3] <= _DAT_3622376c) {
              local_18[iVar4] = local_18[iVar4] + 1;
            }
            pfVar12[3] = fVar2;
            pfVar12[7] = local_54;
          }
          if (pfVar12[2] < fVar2) {
            fVar3 = pfVar12[3];
            pfVar12[3] = pfVar12[2];
            pfVar12[2] = fVar3;
            fVar3 = pfVar12[7];
            pfVar12[7] = pfVar12[6];
            pfVar12[6] = fVar3;
          }
          if (pfVar12[1] < fVar2) {
            fVar3 = pfVar12[2];
            pfVar12[2] = pfVar12[1];
            pfVar12[1] = fVar3;
            fVar3 = pfVar12[6];
            pfVar12[6] = pfVar12[5];
            pfVar12[5] = fVar3;
          }
          if (*pfVar12 < fVar2) {
            fVar2 = pfVar12[1];
            pfVar12[1] = *pfVar12;
            *pfVar12 = fVar2;
            fVar2 = pfVar12[5];
            pfVar12[5] = pfVar12[4];
            pfVar12[4] = fVar2;
          }
          iVar11 = iVar11 + 4;
        } while (iVar11 < iVar7 + -3);
      }
      for (; iVar11 < iVar7; iVar11 = iVar11 + 1) {
        iVar1 = *(int *)(*(int *)(iVar15 + 8) + iVar11 * 8);
        fVar2 = *(float *)(*(int *)(iVar15 + 8) + 4 + iVar11 * 8);
        pfVar12 = (float *)(local_10 + iVar1 * 8);
        if ((float)local_10[iVar1 * 8 + 3] < fVar2) {
          if (pfVar12[3] <= _DAT_3622376c) {
            local_18[iVar1] = local_18[iVar1] + 1;
          }
          pfVar12[3] = fVar2;
          pfVar12[7] = local_54;
        }
        if (pfVar12[2] < fVar2) {
          fVar3 = pfVar12[3];
          pfVar12[3] = pfVar12[2];
          pfVar12[2] = fVar3;
          fVar3 = pfVar12[7];
          pfVar12[7] = pfVar12[6];
          pfVar12[6] = fVar3;
        }
        if (pfVar12[1] < fVar2) {
          fVar3 = pfVar12[2];
          pfVar12[2] = pfVar12[1];
          pfVar12[1] = fVar3;
          fVar3 = pfVar12[6];
          pfVar12[6] = pfVar12[5];
          pfVar12[5] = fVar3;
        }
        if (*pfVar12 < fVar2) {
          fVar2 = pfVar12[1];
          pfVar12[1] = *pfVar12;
          *pfVar12 = fVar2;
          fVar2 = pfVar12[5];
          pfVar12[5] = pfVar12[4];
          pfVar12[4] = fVar2;
        }
      }
      local_54 = (float)((int)local_54 + 1);
      local_50 = (int *)((int)local_50 + 0xc);
    } while ((int)local_54 < iVar6);
  }
  if (param_1[0xc] != 0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if (iVar5 != 0) {
    param_1[0xc] = iVar5;
    uVar8 = thunk_FUN_361bf99c(iVar5 * 8 + 8);
    param_1[0xd] = uVar8;
  }
  puVar16 = (undefined4 *)param_1[0xd];
  for (iVar5 = iVar5 * 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  local_48 = 0;
  iVar5 = FUN_3615a280(param_1 + 6);
  if (0 < iVar5) {
    local_54 = 0.0;
    local_3c = iVar5;
    do {
      piVar13 = (int *)(param_1[7] + (int)local_54);
      if (piVar13[0xe] != 0) {
        operator_delete__((void *)piVar13[0xf]);
        piVar13[0xe] = 0;
        piVar13[0xf] = 0;
      }
      iVar6 = *piVar13;
      local_40 = piVar13[1];
      if (0 < local_40) {
        local_4c = iVar6 * 8;
        local_50 = local_18 + iVar6;
        pfVar12 = (float *)(local_10 + iVar6 * 8);
        do {
          iVar11 = *local_50;
          iVar6 = 0;
          fVar2 = _DAT_3622376c;
          if (3 < iVar11) {
            iVar7 = (iVar11 - 4U >> 2) + 1;
            iVar6 = iVar7 * 4;
            pfVar9 = pfVar12 + 2;
            do {
              iVar7 = iVar7 + -1;
              fVar2 = fVar2 + pfVar9[-2] + pfVar9[-1] + *pfVar9 + pfVar9[1];
              pfVar9 = pfVar9 + 4;
            } while (iVar7 != 0);
          }
          for (; iVar6 < iVar11; iVar6 = iVar6 + 1) {
            pfVar9 = pfVar12 + iVar6;
            fVar2 = fVar2 + *pfVar9;
          }
          if (0 < iVar11) {
            fVar2 = _DAT_36223384 / fVar2;
            puVar17 = (undefined1 *)(param_1[0xd] + local_4c + 4);
            pfVar9 = pfVar12;
            do {
              iVar6 = FUN_36154910((int)piVar13);
              local_24 = (undefined1)(int)ROUND(fVar2 * *pfVar9 * 255.0);
              pfVar9 = pfVar9 + 1;
              puVar17[-4] = (char)iVar6;
              *puVar17 = local_24;
              puVar17 = puVar17 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          local_4c = local_4c + 8;
          pfVar12 = pfVar12 + 8;
          local_50 = local_50 + 1;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
      }
      iVar6 = FUN_360918e0(piVar13 + 0xe);
      if (iVar6 < 0x1a) {
        local_48 = local_48 + 1;
      }
      local_54 = (float)((int)local_54 + 0x48);
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  FUN_36155000((int)param_1);
  uVar10 = param_1[0x12];
  param_1[0x12] = uVar10 | 0x10;
  if (local_48 == iVar5) {
    param_1[0x12] = uVar10 | 0x14;
  }
  if (local_14 != 0) {
    operator_delete__(local_10);
    operator_delete__(local_18);
  }
  ExceptionList = local_c;
  return;
}

