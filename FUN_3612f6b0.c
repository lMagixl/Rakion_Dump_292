
HMODULE __cdecl FUN_3612f6b0(LPCSTR param_1)

{
  DWORD dwMessageId;
  DWORD DVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_1c;
  char *local_18;
  char *local_14;
  HMODULE local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218caa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = LoadLibraryA(param_1);
  if (local_10 == (HMODULE)0x0) {
    dwMessageId = GetLastError();
    DVar1 = FormatMessageA(0x1100,(LPCVOID)0x0,dwMessageId,0x400,(LPSTR)&local_18,0,(va_list *)0x0);
    pcVar2 = StringDuplicate(&DAT_36222fa0);
    local_4 = 0;
    local_14 = pcVar2;
    if (DVar1 == 0) {
      local_1c = StringDuplicate(&DAT_36222fa0);
      local_4._0_1_ = 1;
      DVar1 = GetLastError();
      pcVar3 = Translate(s_ETRSCannot_format_error_message__362382e0,4);
      CTString::PrintF((CTString *)&local_1c,(char *)&local_1c,pcVar3,dwMessageId,DVar1);
      pcVar3 = StringDuplicate(local_1c);
      StringFree(pcVar2);
      local_4 = (uint)local_4._1_3_ << 8;
      local_14 = pcVar3;
      StringFree(local_1c);
    }
    else {
      pcVar3 = StringDuplicate(local_18);
      StringFree(pcVar2);
      local_14 = pcVar3;
      LocalFree(local_18);
    }
    pcVar2 = pcVar3;
    pcVar4 = Translate(s_ETRSCannot_load_DLL_file___s_____36238338,4);
    ThrowF_t(pcVar4,param_1,pcVar2);
    local_4 = 0xffffffff;
    StringFree(pcVar3);
  }
  ExceptionList = local_c;
  return local_10;
}

