
/* public: int __thiscall CGfxLibrary::IsCurrentModeTH(void) */

int __thiscall CGfxLibrary::IsCurrentModeTH(CGfxLibrary *this)

{
  int iVar1;
  
                    /* 0x1dc0  2377  ?IsCurrentModeTH@CGfxLibrary@@QAEHXZ */
  iVar1 = CDisplayMode::IsTripleHead((CDisplayMode *)(this + 0xa3c));
  return iVar1;
}

