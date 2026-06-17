
void __fastcall FUN_360515e0(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  void *pvVar6;
  CListHead *pCVar7;
  size_t local_40;
  void *local_3c;
  int local_38;
  void *local_34;
  int local_30;
  void *local_2c;
  int local_28;
  CListHead local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36211af8;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  local_30 = 0;
  local_2c = (void *)0x0;
  local_38 = 0;
  local_34 = (void *)0x0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  local_40 = FUN_360543c0((int)param_1 + 0x3c);
  FUN_36050dd0(param_1,&local_30,&local_38,(int *)&local_40);
  sVar4 = local_40;
  if (0 < (int)local_40) {
    qsort(local_34,local_40,4,(_PtFuncCompare *)&LAB_36050250);
  }
  iVar5 = 1;
  if (1 < (int)sVar4) {
    do {
      iVar1 = FUN_36054c90(*(int *)((int)local_34 + iVar5 * 4),
                           *(int *)((int)local_34 + iVar5 * 4 + -4));
      if (iVar1 != 0) {
        FUN_36050bc0(param_1,(int)&local_38,iVar3,iVar5 + -1);
        iVar3 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)sVar4);
  }
  FUN_36050bc0(param_1,(int)&local_38,iVar3,sVar4 - 1);
  pvVar6 = (void *)((int)param_1 + 0x50);
  sVar4 = 0;
  local_40 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  local_3c = pvVar6;
  iVar3 = FUN_3604a760((int)pvVar6);
  if (0 < iVar3) {
    do {
      iVar3 = 0;
      iVar5 = FUN_3604a750(pvVar6,sVar4);
      pvVar6 = (void *)(iVar5 + 0x4c);
      iVar1 = 0;
      iVar5 = FUN_3604aa50((int)pvVar6);
      if (0 < iVar5) {
        do {
          piVar2 = (int *)FUN_3604a700(pvVar6,iVar1);
          for (iVar5 = *(int *)(*piVar2 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
            iVar3 = iVar3 + 1;
          }
          iVar1 = iVar1 + 1;
          iVar5 = FUN_3604aa50((int)pvVar6);
        } while (iVar1 < iVar5);
      }
      FUN_3604a6e0(local_20);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0 < iVar3) {
        FUN_3604b1a0(local_20,iVar3);
      }
      iVar3 = 0;
      iVar5 = FUN_3604a750(local_3c,sVar4);
      pvVar6 = (void *)(iVar5 + 0x4c);
      iVar5 = 0;
      local_28 = 0;
      iVar1 = FUN_3604aa50((int)pvVar6);
      if (0 < iVar1) {
        do {
          piVar2 = (int *)FUN_3604a700(pvVar6,iVar5);
          for (iVar1 = *(int *)(*piVar2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
            iVar5 = FUN_3604a700(pvVar6,iVar5);
            iVar5 = *(int *)(iVar5 + 4);
            piVar2 = (int *)FUN_3604a700(local_20,iVar3);
            piVar2[1] = iVar5;
            *piVar2 = iVar1;
            iVar3 = iVar3 + 1;
            iVar5 = local_28;
          }
          iVar5 = iVar5 + 1;
          local_28 = iVar5;
          iVar1 = FUN_3604aa50((int)pvVar6);
          sVar4 = local_40;
        } while (iVar5 < iVar1);
      }
      pvVar6 = local_3c;
      iVar3 = FUN_3604a750(local_3c,sVar4);
      FUN_3604b1f0((undefined4 *)(iVar3 + 0x4c));
      pCVar7 = local_20;
      iVar3 = FUN_3604a750(pvVar6,sVar4);
      FUN_36055020((void *)(iVar3 + 0x4c),pCVar7);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_3604b5b0((undefined4 *)local_20);
      sVar4 = sVar4 + 1;
      local_40 = sVar4;
      iVar3 = FUN_3604a760((int)pvVar6);
      pvVar6 = local_3c;
    } while ((int)sVar4 < iVar3);
  }
  if (local_38 != 0) {
    operator_delete__(local_34);
  }
  if (local_30 != 0) {
    operator_delete__(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}

