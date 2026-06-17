
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360c1a50(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_14;
  int local_10;
  int local_8;
  int local_4;
  
  DAT_362cba8c = DAT_362cba8c + 1;
  iVar7 = 0;
  local_14 = 0;
  iVar3 = FUN_3600bef0((undefined4 *)(param_2 + 0x54));
  if (0 < iVar3) {
    iVar10 = *(int *)(param_1 + 0x14);
    piVar5 = *(int **)(param_2 + 0x58);
    do {
      iVar4 = FUN_3600c1d0((undefined4 *)(*piVar5 * 0x1c + iVar10));
      iVar7 = iVar7 + -2 + iVar4;
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
      local_14 = iVar7;
    } while (iVar3 != 0);
  }
  iVar7 = 0;
  DAT_362cba90 = DAT_362cba90 + local_14;
  if (DAT_362cbbb0 != 0) {
    operator_delete__(DAT_362cbbb4);
    DAT_362cbbb0 = 0;
    DAT_362cbbb4 = (undefined4 *)0x0;
  }
  FUN_360c5c00(&DAT_362cbbb0,local_14);
  if (DAT_362cbbb8 != 0) {
    operator_delete__(DAT_362cbbbc);
    DAT_362cbbb8 = 0;
    DAT_362cbbbc = (undefined4 *)0x0;
  }
  FUN_360c5c00(&DAT_362cbbb8,local_14);
  local_10 = 0;
  iVar3 = FUN_3600bef0((undefined4 *)(param_2 + 0x54));
  if (0 < iVar3) {
    do {
      puVar9 = (undefined4 *)
               (*(int *)(*(int *)(param_2 + 0x58) + local_10 * 4) * 0x1c + *(int *)(param_1 + 0x14))
      ;
      iVar10 = 2;
      iVar3 = FUN_3600c1d0(puVar9);
      if (2 < iVar3) {
        iVar3 = iVar7 << 4;
        do {
          puVar1 = (undefined4 *)(iVar3 + (int)DAT_362cbbb4);
          *puVar1 = *(undefined4 *)(*(int *)(puVar9[1] + 4) + 0x14);
          puVar1[1] = *(undefined4 *)(*(int *)(puVar9[1] + -4 + iVar10 * 8) + 0x14);
          puVar1[2] = *(undefined4 *)(*(int *)(puVar9[1] + 4 + iVar10 * 8) + 0x14);
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 0x10;
          iVar10 = iVar10 + 1;
          iVar4 = FUN_3600c1d0(puVar9);
        } while (iVar10 < iVar4);
      }
      local_10 = local_10 + 1;
      iVar3 = FUN_3600bef0((undefined4 *)(param_2 + 0x54));
    } while (local_10 < iVar3);
  }
  puVar9 = DAT_362cbbb4;
  FUN_360c09a0();
  puVar1 = DAT_362cbbbc;
  DAT_362cba94 = DAT_362cba94 + 1;
  *DAT_362cbbbc = *puVar9;
  puVar1[1] = puVar9[1];
  puVar1[2] = puVar9[2];
  puVar1[3] = puVar9[3];
  puVar9[3] = 1;
  uVar8 = 1;
  if (1 < local_14) {
    local_4 = local_14 + -1;
    local_8 = 0x10;
    do {
      if ((DAT_362a4118 == 0) || (piVar5 = FUN_360c0af0(uVar8), piVar5 == (int *)0x0)) {
        piVar5 = (int *)FUN_360c0c00();
        FUN_360c09a0();
        if ((int)DAT_362cba98 < (int)uVar8) {
          DAT_362cba98 = uVar8;
        }
        if ((int)DAT_362a5f08 < (int)uVar8) {
          DAT_362a5f08 = uVar8;
        }
        DAT_362cba94 = DAT_362cba94 + 1;
        uVar8 = 0;
      }
      piVar2 = (int *)(local_8 + (int)DAT_362cbbbc);
      *piVar2 = *piVar5;
      piVar2[1] = piVar5[1];
      local_8 = local_8 + 0x10;
      piVar2[2] = piVar5[2];
      uVar8 = uVar8 + 1;
      local_4 = local_4 + -1;
      piVar2[3] = piVar5[3];
      piVar5[3] = 1;
    } while (local_4 != 0);
  }
  if ((int)DAT_362cba98 < (int)uVar8) {
    DAT_362cba98 = uVar8;
  }
  if ((int)uVar8 < (int)DAT_362a5f08) {
    DAT_362a5f08 = uVar8;
  }
  iVar7 = local_14 * 3;
  *(int *)(param_2 + 0x6c) = iVar7;
  puVar9 = (undefined4 *)(param_1 + 0x50);
  iVar10 = *(int *)(param_1 + 0x58) + iVar7;
  *(int *)(param_1 + 0x58) = iVar10;
  iVar3 = FUN_3600bda0(puVar9);
  if (iVar3 < iVar10) {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar10 = FUN_3600bda0(puVar9);
    FUN_360623a0(puVar9,iVar10 + ((iVar7 + -1) / iVar3 + 1) * iVar3);
  }
  puVar6 = (undefined2 *)(*(int *)(param_1 + 0x54) + (*(int *)(param_1 + 0x58) + local_14 * -3) * 2)
  ;
  if (0 < local_14) {
    iVar3 = 0;
    iVar7 = local_14;
    do {
      *puVar6 = *(undefined2 *)(iVar3 + (int)DAT_362cbbbc);
      puVar6[1] = *(undefined2 *)(iVar3 + 4 + (int)DAT_362cbbbc);
      puVar6[2] = *(undefined2 *)(iVar3 + 8 + (int)DAT_362cbbbc);
      puVar6 = puVar6 + 3;
      iVar3 = iVar3 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  _DAT_362cbaa0 = (float)DAT_362cba90;
  _DAT_362cbaa4 = (float)DAT_362cba94;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + local_14;
  _DAT_362cba9c = _DAT_362cbaa0 / _DAT_362cbaa4;
  _DAT_362cbaa0 = _DAT_362cbaa0 / (float)DAT_362cba8c;
  _DAT_362cbaa4 = _DAT_362cbaa4 / (float)DAT_362cba8c;
  if (DAT_362cbbb0 != 0) {
    operator_delete__(DAT_362cbbb4);
    DAT_362cbbb0 = 0;
    DAT_362cbbb4 = (undefined4 *)0x0;
  }
  if (DAT_362cbbb8 != 0) {
    operator_delete__(DAT_362cbbbc);
    DAT_362cbbb8 = 0;
    DAT_362cbbbc = (undefined4 *)0x0;
  }
  return;
}

