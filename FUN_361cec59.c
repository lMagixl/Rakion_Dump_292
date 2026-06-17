
void __cdecl FUN_361cec59(undefined4 param_1)

{
  HMODULE pHVar1;
  
  if (DAT_36383c50 == (FARPROC)0x0) {
    if (DAT_36383c4c != (FARPROC)0x0) goto LAB_361cece2;
    pHVar1 = GetModuleHandleA(s_d3d8_dll_362499d8);
    if (pHVar1 != (HMODULE)0x0) {
      pHVar1 = LoadLibraryA(s_d3d8_dll_362499d8);
      if (pHVar1 != (HMODULE)0x0) {
        DAT_36383c50 = GetProcAddress(pHVar1,s_DebugSetMute_36249a48);
      }
    }
    pHVar1 = GetModuleHandleA(s_d3d8d_dll_362499e4);
    if (pHVar1 != (HMODULE)0x0) {
      pHVar1 = LoadLibraryA(s_d3d8d_dll_362499e4);
      if (pHVar1 != (HMODULE)0x0) {
        DAT_36383c4c = GetProcAddress(pHVar1,s_DebugSetMute_36249a48);
      }
    }
    if (DAT_36383c50 != (FARPROC)0x0) goto LAB_361cecce;
  }
  else {
LAB_361cecce:
    (*DAT_36383c50)(param_1);
  }
  if (DAT_36383c4c == (FARPROC)0x0) {
    return;
  }
LAB_361cece2:
                    /* WARNING: Could not recover jumptable at 0x361cece2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_36383c4c)();
  return;
}

