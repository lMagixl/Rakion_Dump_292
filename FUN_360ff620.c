
int __fastcall FUN_360ff620(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621746e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  local_4 = 0;
  FUN_360fe860(param_1);
  ExceptionList = local_c;
  return param_1;
}

