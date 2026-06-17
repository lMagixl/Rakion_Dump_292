
void __fastcall FUN_360e8f20(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36215c7f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360e8a40(param_1);
  FUN_360e8760((int)(param_1 + 4));
  FUN_360e9640(param_1);
  ExceptionList = local_c;
  return;
}

