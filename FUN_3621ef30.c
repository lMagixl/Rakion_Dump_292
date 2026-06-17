
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3621ef30(void)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219a58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(s_I_Temp_Triangularization_out_36238b2a + 2);
  local_4 = 0;
  _DAT_362fda54 = StringDuplicate(pcVar1);
  _DAT_362fda58 = 0;
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  _atexit((_func_4879 *)&LAB_36220e40);
  ExceptionList = local_c;
  return;
}

