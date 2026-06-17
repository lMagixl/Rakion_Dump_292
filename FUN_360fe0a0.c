
undefined4 FUN_360fe0a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362b8ddc,1);
  iVar1 = FUN_36149a00(param_3,param_4,param_1,param_2);
  local_4 = 0xffffffff;
  if (iVar1 == 0) {
    CTSingleLock::~CTSingleLock(local_18);
    ExceptionList = local_c;
    return 1;
  }
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return 0;
}

