
undefined4 __cdecl FUN_360f2f30(CTString *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216512;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = StringDuplicate((char *)*param_2);
  local_4 = 0;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = CTString::operator!=((CTString *)&local_10,&DAT_36232e85);
  while( true ) {
    if (iVar1 == 0) {
      local_4 = local_4 & 0xffffff00;
      StringFree(local_14);
      local_4 = 0xffffffff;
      StringFree(local_10);
      ExceptionList = local_c;
      return 0;
    }
    pcVar2 = StringDuplicate(local_10);
    StringFree(local_14);
    local_14 = pcVar2;
    CTString::OnlyFirstLine((CTString *)&local_14);
    CTString::RemovePrefix((CTString *)&local_10,(CTString *)&local_14);
    CTString::DeleteChar((CTString *)&local_10,0);
    iVar1 = CTString::Matches(param_1,(CTString *)&local_14);
    if (iVar1 != 0) break;
    iVar1 = CTString::operator!=((CTString *)&local_10,&DAT_36232e85);
  }
  local_4 = local_4 & 0xffffff00;
  StringFree(local_14);
  local_4 = 0xffffffff;
  StringFree(local_10);
  ExceptionList = local_c;
  return 1;
}

