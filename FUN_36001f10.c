
void __fastcall FUN_36001f10(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3620d16c;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  StringFree(*(char **)(param_1 + 0x140));
  local_4 = local_4 & 0xffffff00;
  StringFree(*(char **)(param_1 + 0x13c));
  local_4 = 0xffffffff;
  StringFree(*(char **)(param_1 + 0x138));
  ExceptionList = local_c;
  return;
}

