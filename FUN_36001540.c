
void __fastcall FUN_36001540(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620d0ab;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  StringFree(*(char **)(param_1 + 0x14));
  local_4 = 0xffffffff;
  StringFree(*(char **)(param_1 + 0x10));
  ExceptionList = local_c;
  return;
}

