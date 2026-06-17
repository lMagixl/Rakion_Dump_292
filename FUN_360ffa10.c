
int __fastcall FUN_360ffa10(void *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362174cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)param_1 + 0x20) = *(int *)((int)param_1 + 0x20) + 1;
  iVar1 = FUN_36026a70((int)param_1 + 0x10);
  if (0 < iVar1) {
    iVar1 = *(int *)(*(int *)((int)param_1 + 0x14) + -4 + iVar1 * 4);
    *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -1;
    iVar1 = FUN_360ff550(param_1,iVar1);
    FUN_360fe860(iVar1);
    ExceptionList = local_c;
    return iVar1;
  }
  iVar1 = FUN_360ff560((int)param_1);
  if (*(int *)((int)param_1 + 0x34) <= iVar1) {
    iVar1 = *(int *)((int)param_1 + 0x28) + 1;
    *(int *)((int)param_1 + 0x28) = iVar1;
    if (iVar1 < *(int *)((int)param_1 + 0x2c)) {
      iVar1 = *(int *)((int)param_1 + 0x2c);
    }
    *(int *)((int)param_1 + 0x2c) = iVar1;
  }
  iVar1 = FUN_361bf99c(0x428);
  local_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_360ff620(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_360ff9a0(param_1,iVar1);
  FUN_360fe860(iVar1);
  ExceptionList = local_c;
  return iVar1;
}

