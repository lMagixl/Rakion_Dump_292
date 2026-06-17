
void __fastcall FUN_360e7d60(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36215b6f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360e7880(param_1);
  FUN_360e75d0((int)(param_1 + 4));
  FUN_360e8480(param_1);
  ExceptionList = local_c;
  return;
}

