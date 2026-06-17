
void __cdecl FUN_360f31c0(CTString *param_1)

{
  char *pcVar1;
  CTString *pCVar2;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36232e90);
  local_4 = 0;
  pCVar2 = (CTString *)CTString::operator+(param_1,(CTString *)&local_10);
  local_4._0_1_ = 1;
  CTString::operator+=((CTString *)&DAT_362ccff0,pCVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_10);
  local_4 = 0xffffffff;
  StringFree(pcVar1);
  ExceptionList = local_c;
  return;
}

