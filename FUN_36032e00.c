
undefined4 * __cdecl
FUN_36032e00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  HMODULE hModule;
  undefined4 *puVar1;
  char *pcVar2;
  FARPROC pFVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *local_18;
  char *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fc39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  hModule = GetModuleHandleA(s_I_EngineGUI_dll_362256d2 + 2);
  if (hModule == (HMODULE)0x0) {
    GetLastError();
    puVar1 = (undefined4 *)GetWindowsError((ulong)&local_18);
    uVar5 = *puVar1;
    pcVar4 = s_EngineGUI_dll_362256e4;
    local_4 = 1;
    pcVar2 = Translate(s_ETRSCannot_load__s___s_Cannot_re_362256f4,4);
    WarningMessage(pcVar2,pcVar4,uVar5);
    local_4 = local_4 & 0xffffff00;
    StringFree(local_18);
    pcVar2 = StringDuplicate(&DAT_36225721);
    local_4 = 2;
    local_14[0] = pcVar2;
    pcVar4 = StringDuplicate(pcVar2);
    *param_1 = pcVar4;
    param_1[1] = 0;
  }
  else {
    pFVar3 = GetProcAddress(hModule,s__FileRequester__YA_AVCTFileName__36225724);
    if (pFVar3 == (FARPROC)0x0) {
      pcVar4 = s_EngineGUI_dll_36225750;
      pcVar2 = Translate(s_ETRSError_in__s__FileRequester___36225760,4);
      WarningMessage(pcVar2,pcVar4);
      pcVar2 = StringDuplicate(&DAT_362257aa);
      local_4 = 3;
      local_14[0] = pcVar2;
      pcVar4 = StringDuplicate(pcVar2);
      *param_1 = pcVar4;
      param_1[1] = 0;
      local_4 = local_4 & 0xffffff00;
      StringFree(pcVar2);
      ExceptionList = local_c;
      return param_1;
    }
    puVar1 = (undefined4 *)
             (*pFVar3)(local_14,param_2,param_4,s_Replace_file_directory_362257ac,param_3);
    local_4 = 4;
    pcVar2 = StringDuplicate((char *)*puVar1);
    *param_1 = pcVar2;
    param_1[1] = puVar1[1];
    pcVar2 = local_14[0];
  }
  local_4 = local_4 & 0xffffff00;
  StringFree(pcVar2);
  ExceptionList = local_c;
  return param_1;
}

