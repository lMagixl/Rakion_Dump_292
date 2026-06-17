
undefined4 * FUN_360e3c60(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  double *pdVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  CListHead local_dc [20];
  CListHead local_c8 [20];
  double local_b4 [4];
  undefined4 local_94 [5];
  int local_80;
  undefined4 local_7c [8];
  CListHead local_5c [20];
  undefined4 local_48;
  undefined4 local_44 [8];
  CListHead local_24 [20];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621574c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_36054990(param_1,0);
  puVar6 = puVar1;
  pdVar3 = local_b4;
  for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pdVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  FUN_3604cf00(local_94,puVar1 + 8);
  local_80 = puVar1[0xd];
  iVar9 = 0;
  local_4 = 0;
  FUN_36054650(local_c8);
  local_4._0_1_ = 1;
  FUN_36054650(local_dc);
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar8 = FUN_360dee10((int)param_1);
  if (0 < iVar8) {
    do {
      FUN_3604b9a0(local_24);
      local_10 = 0xffffffff;
      local_4._0_1_ = 4;
      FUN_3604b9a0(local_5c);
      local_48 = 0xffffffff;
      local_4 = CONCAT31(local_4._1_3_,5);
      iVar2 = FUN_36054990(param_1,iVar9);
      iVar8 = local_80;
      if (*(int *)(iVar2 + 0x34) != local_80) {
        pdVar3 = (double *)FUN_36054990(param_1,iVar9);
        iVar8 = FUN_360e24d0(pdVar3,local_b4,iVar8,local_44,local_7c);
        if (iVar8 == 0) {
          iVar8 = FUN_3604b9e0((int)local_24);
          if (0 < iVar8) {
            piVar4 = FUN_360562d0(local_c8,1);
            FUN_3604bda0(piVar4 + 8,local_24);
            piVar5 = (int *)FUN_36054990(param_1,iVar9);
            piVar11 = piVar4;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar11 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar11 = piVar11 + 1;
            }
            iVar8 = FUN_36054990(param_1,iVar9);
            piVar4[0xd] = *(int *)(iVar8 + 0x34);
          }
          iVar8 = FUN_3604b9e0((int)local_5c);
          if (0 < iVar8) {
            piVar4 = FUN_360562d0(local_dc,1);
            FUN_3604bda0(piVar4 + 8,local_5c);
            piVar5 = (int *)FUN_36054990(param_1,iVar9);
            piVar11 = piVar4;
            for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
              *piVar11 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar11 = piVar11 + 1;
            }
            iVar8 = FUN_36054990(param_1,iVar9);
            piVar4[0xd] = *(int *)(iVar8 + 0x34);
          }
        }
      }
      local_4._0_1_ = 4;
      thunk_FUN_3604c3a0((undefined4 *)local_5c);
      local_4 = CONCAT31(local_4._1_3_,3);
      thunk_FUN_3604c3a0((undefined4 *)local_24);
      iVar9 = iVar9 + 1;
      iVar8 = FUN_360dee10((int)param_1);
    } while (iVar9 < iVar8);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_36056320(param_1);
  iVar8 = FUN_360dee10((int)local_c8);
  if (iVar8 < 1) {
    puVar6 = (undefined4 *)FUN_361bf99c(0x30);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[8] = 1;
      puVar6[9] = 0;
      puVar6[10] = 0;
    }
  }
  else {
    puVar6 = FUN_360e3c60((undefined4 *)local_c8);
  }
  iVar8 = FUN_360dee10((int)local_dc);
  if (iVar8 < 1) {
    puVar1 = (undefined4 *)FUN_361bf99c(0x30);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[8] = 2;
      puVar1[9] = 0;
      puVar1[10] = 0;
    }
  }
  else {
    puVar1 = FUN_360e3c60((undefined4 *)local_dc);
  }
  puVar7 = (undefined4 *)FUN_361bf99c(0x30);
  puVar10 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    pdVar3 = local_b4;
    puVar10 = puVar7;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *(undefined4 *)pdVar3;
      pdVar3 = (double *)((int)pdVar3 + 4);
      puVar10 = puVar10 + 1;
    }
    puVar7[8] = 3;
    puVar7[9] = puVar6;
    puVar7[10] = puVar1;
    puVar7[0xb] = local_80;
    puVar10 = puVar7;
  }
  local_4._0_1_ = 1;
  thunk_FUN_36056320((undefined4 *)local_dc);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_36056320((undefined4 *)local_c8);
  local_4 = 0xffffffff;
  thunk_FUN_3604c3a0(local_94);
  ExceptionList = local_c;
  return puVar10;
}

