
void __fastcall FUN_360e17f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_362154de;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  thunk_FUN_360e0d40(param_1 + 0xf);
  local_4._0_1_ = 1;
  thunk_FUN_360e0d40(param_1 + 10);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_360e0d40(param_1 + 5);
  local_4 = 0xffffffff;
  thunk_FUN_360e0d40(param_1);
  ExceptionList = local_c;
  return;
}

