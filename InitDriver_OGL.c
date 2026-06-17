
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: int __thiscall CGfxLibrary::InitDriver_OGL(int) */

int __thiscall CGfxLibrary::InitDriver_OGL(CGfxLibrary *this,int param_1)

{
  char *pcVar1;
  DWORD DVar2;
  char *pcVar3;
  HMODULE pHVar4;
  LPSTR local_12c;
  CGfxLibrary *local_128;
  UINT local_124;
  CHAR local_120 [264];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x792a0  2315  ?InitDriver_OGL@CGfxLibrary@@AAEHH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36211f0e;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffec4;
  local_18 = DAT_362abd90;
  ExceptionList = &local_10;
  local_128 = this;
  local_124 = SetErrorMode(0x8001);
  pcVar1 = s_3DFXVGL_DLL_3622b050;
  if (param_1 == 0) {
    pcVar1 = s_OPENGL32_DLL_3622b05c;
  }
  pcVar1 = StringDuplicate(pcVar1);
  local_8 = 1;
  DVar2 = SearchPathA((LPCSTR)0x0,pcVar1,(LPCSTR)0x0,0x104,local_120,&local_12c);
  if (DVar2 == 0) {
    pcVar3 = Translate(s_ETRSOpenGL_driver___s__not_prese_3622b06c,4);
    ThrowF_t(pcVar3,pcVar1);
  }
  pHVar4 = LoadLibraryA(pcVar1);
  *(HMODULE *)(this + 0xa34) = pHVar4;
  if (pHVar4 == (HMODULE)0x0) {
    if (param_1 != 0) {
      pcVar3 = Translate(s_ETRS3Dfx_OpenGL_driver___s__is_i_3622b090,4);
      FatalError(pcVar3,pcVar1);
    }
    pcVar3 = Translate(s_ETRSCannot_load_OpenGL_driver____3622b14c,4);
    ThrowF_t(pcVar3,pcVar1);
  }
  FUN_360768d0();
  SetErrorMode(local_124);
  if (param_1 == 0) {
    DAT_362c444c = SwapBuffers_exref;
    DAT_362c4450 = SetPixelFormat_exref;
    DAT_362c4454 = ChoosePixelFormat_exref;
  }
  DAT_362c3d40 = param_1;
  local_8 = 0xffffffff;
  StringFree(pcVar1);
  ExceptionList = local_10;
  return 1;
}

