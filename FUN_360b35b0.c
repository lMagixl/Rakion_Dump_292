
void __fastcall FUN_360b35b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_36213dc9;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_360b2670(param_1);
  FUN_360b2080(param_1 + 5);
  FUN_360b2110(param_1 + 10);
  local_4._0_1_ = 1;
  thunk_FUN_360b2110(param_1 + 10);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_360b2080(param_1 + 5);
  local_4 = 0xffffffff;
  thunk_FUN_360b2670(param_1);
  ExceptionList = local_c;
  return;
}

