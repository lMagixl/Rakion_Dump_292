
undefined4 * __fastcall FUN_360f11c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36216428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  local_4 = 0;
  CPlayerAction::CPlayerAction((CPlayerAction *)(param_1 + 2));
  ExceptionList = local_c;
  return param_1;
}

