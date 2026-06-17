
void __fastcall FUN_360ea0e0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36215d8f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360e9c00(param_1);
  FUN_360e9920((int)(param_1 + 4));
  FUN_360ea700(param_1);
  ExceptionList = local_c;
  return;
}

