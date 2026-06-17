
/* private: void __thiscall CGfxLibrary::EndDriver_OGL(void) */

void __thiscall CGfxLibrary::EndDriver_OGL(CGfxLibrary *this)

{
  HDC hdc;
  char *pcVar1;
  
                    /* 0x79470  1562  ?EndDriver_OGL@CGfxLibrary@@AAEXXZ */
  if (DAT_362c4d70 != (void *)0x0) {
    if ((*(uint *)(this + 0xa54) & 0x800000) != 0) {
      (*DAT_362c3d28)(0x200,DAT_362c4d70);
    }
    FreeMemory(DAT_362c4d70);
    DAT_362c4d70 = (void *)0x0;
  }
  if (((byte)this[0xa54] & 4) != 0) {
    hdc = GetDC((HWND)0x0);
    SetDeviceGammaRamp(hdc,&DAT_362c4d90);
    ReleaseDC((HWND)0x0,hdc);
  }
  if (*(int *)(this + 0xac4) != 0) {
    if (DAT_362c443c != (code *)0x0) {
      pcVar1 = (char *)(*DAT_362c443c)(0,0);
      FUN_36076840(pcVar1,s_MakeCurrent_NULL__NULL__3622b190);
    }
    pcVar1 = (char *)(*DAT_362c442c)(*(undefined4 *)(this + 0xac4));
    FUN_36076840(pcVar1,s_DeleteContext_3622b1a8);
    *(undefined4 *)(this + 0xac4) = 0;
  }
  FUN_36078090();
  return;
}

