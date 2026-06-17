
void __fastcall FUN_360f08e0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362163ef;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360f0400(param_1);
  FUN_360f0120((int)(param_1 + 4));
  FUN_360f0f50(param_1);
  ExceptionList = local_c;
  return;
}

