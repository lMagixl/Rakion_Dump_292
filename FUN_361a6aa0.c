
void __fastcall FUN_361a6aa0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621b8e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_361a2ee0(param_1);
  local_4 = 0xffffffff;
  thunk_FUN_361a2ee0(param_1);
  ExceptionList = local_c;
  return;
}

