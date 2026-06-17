
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3621d1b0(void)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ec48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(s_I_Scripts_PersistentSymbols_ini_362226ea + 2);
  local_4 = 0;
  _DAT_362b8dcc = StringDuplicate(pcVar1);
  _DAT_362b8dd0 = 0;
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  _atexit((_func_4879 *)&LAB_3621fe10);
  ExceptionList = local_c;
  return;
}

