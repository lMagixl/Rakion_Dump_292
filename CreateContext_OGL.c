
/* private: int __thiscall CGfxLibrary::CreateContext_OGL(struct HDC__ *) */

int __thiscall CGfxLibrary::CreateContext_OGL(CGfxLibrary *this,HDC__ *param_1)

{
  int iVar1;
  
                    /* 0x79250  1413  ?CreateContext_OGL@CGfxLibrary@@AAEHPAUHDC__@@@Z */
  iVar1 = SetupPixelFormat_OGL(this,param_1,1);
  if (iVar1 != 0) {
    iVar1 = (*DAT_362c4424)(param_1);
    *(int *)(this + 0xac4) = iVar1;
    if (iVar1 != 0) {
      iVar1 = (*DAT_362c443c)(param_1,iVar1);
      return (uint)(iVar1 != 0);
    }
    FUN_36076840((char *)0x0,s_CreateContext_3622ab20);
  }
  return 0;
}

