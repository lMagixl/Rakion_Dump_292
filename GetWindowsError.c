
/* class CTString const __cdecl GetWindowsError(unsigned long) */

ulong __cdecl GetWindowsError(ulong param_1)

{
  char *pcVar1;
  char *pcVar2;
  DWORD in_stack_00000008;
  char *local_18;
  undefined4 local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x25ea0  2213  ?GetWindowsError@@YA?BVCTString@@K@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f219;
  local_c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_c;
  FormatMessageA(0x1100,(LPCVOID)0x0,in_stack_00000008,0x400,(LPSTR)&local_18,0,(va_list *)0x0);
  pcVar1 = StringDuplicate(local_18);
  local_4 = 1;
  local_10 = pcVar1;
  LocalFree(local_18);
  pcVar2 = StringDuplicate(pcVar1);
  *(char **)param_1 = pcVar2;
  local_14 = 1;
  local_4 = local_4 & 0xffffff00;
  StringFree(pcVar1);
  ExceptionList = local_c;
  return param_1;
}

