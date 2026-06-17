
/* private: int __thiscall CGfxLibrary::InitDriver_D3D(void) */

int __thiscall CGfxLibrary::InitDriver_D3D(CGfxLibrary *this)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  int iVar3;
  
                    /* 0x72ec0  2314  ?InitDriver_D3D@CGfxLibrary@@AAEHXZ */
  pHVar1 = LoadLibraryA(s_D3D8_DLL_36228888);
  *(HMODULE *)(this + 0xa34) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    CPrintF(s_DX8_error__API_not_installed__36228894);
    *(undefined4 *)(this + 0xa28) = 0;
    return 0;
  }
  pFVar2 = GetProcAddress(pHVar1,s_Direct3DCreate8_362288b4);
  if (pFVar2 == (FARPROC)0x0) {
    CPrintF(s_DX8_error__Cannot_get_entry_proc_362288c4);
    pHVar1 = *(HMODULE *)(this + 0xa34);
  }
  else {
    iVar3 = (*pFVar2)(0xdc);
    *(int *)(this + 0xa58) = iVar3;
    if (iVar3 != 0) {
      return 1;
    }
    CPrintF(s_DX8_error__Cannot_be_initialized_362288f4);
    pHVar1 = *(HMODULE *)(this + 0xa34);
  }
  FreeLibrary(pHVar1);
  *(undefined4 *)(this + 0xa34) = 0;
  return 0;
}

