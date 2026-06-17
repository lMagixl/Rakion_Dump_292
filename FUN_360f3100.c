
void __cdecl FUN_360f3100(CTString *param_1)

{
  char *pcVar1;
  CTString *pCVar2;
  char *pcVar3;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621654e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36232e8c);
  local_4 = 0;
  pCVar2 = (CTString *)CTString::operator+(param_1,(CTString *)&local_10);
  local_4._0_1_ = 1;
  pCVar2 = FUN_36037fd0((CTString *)&local_14,(CTString *)&DAT_362ccfec,pCVar2);
  local_4._0_1_ = 2;
  pcVar3 = StringDuplicate(*(char **)pCVar2);
  StringFree(DAT_362ccfec);
  local_4._0_1_ = 1;
  DAT_362ccfec = pcVar3;
  StringFree(local_14);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_10);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  ExceptionList = local_c;
  return;
}

