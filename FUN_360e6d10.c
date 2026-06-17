
void __fastcall FUN_360e6d10(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36215a5f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360e6830(param_1);
  FUN_360e6550((int)(param_1 + 4));
  FUN_360e72c0(param_1);
  ExceptionList = local_c;
  return;
}

