
void __fastcall FUN_3604b8e0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_36211796;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  StringFree(*(char **)(param_1 + 0x10));
  local_4 = local_4 & 0xffffff00;
  StringFree(*(char **)(param_1 + 0xc));
  local_4 = 0xffffffff;
  StringFree(*(char **)(param_1 + 8));
  ExceptionList = local_c;
  return;
}

