
void __fastcall FUN_360ee610(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362161cf;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360ee130(param_1);
  FUN_360ede50((int)(param_1 + 4));
  FUN_360eed30(param_1);
  ExceptionList = local_c;
  return;
}

