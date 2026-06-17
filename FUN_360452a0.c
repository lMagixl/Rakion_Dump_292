
void __fastcall FUN_360452a0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362112eb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  StringFree(*(char **)(param_1 + 8));
  local_4 = 0xffffffff;
  StringFree(*(char **)(param_1 + 4));
  ExceptionList = local_c;
  return;
}

