
void __cdecl FUN_36134d10(undefined4 param_1)

{
  HMODULE hModule;
  char *pcVar1;
  FARPROC pFVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_36219070;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  hModule = LoadLibraryA(s_I_ole32_dll_362386fe + 2);
  if (hModule == (HMODULE)0x0) {
    pcVar1 = Translate(s_ETRSCannot_load_ole32_dll__3623870c,4);
    ThrowF_t(pcVar1);
  }
  pFVar2 = GetProcAddress(hModule,s_CoCreateGuid_36238728);
  if (pFVar2 == (FARPROC)0x0) {
    pcVar1 = Translate(s_ETRSCannot_find_CoCreateGuid____36238738,4);
    ThrowF_t(pcVar1);
  }
  iVar3 = (*pFVar2)(param_1);
  if (iVar3 != 0) {
    pcVar1 = Translate(s_ETRSCoCreateGuid____Error_0x_08x_36238758,4);
    ThrowF_t(pcVar1,iVar3);
  }
  FreeLibrary(hModule);
  ExceptionList = local_10;
  return;
}

