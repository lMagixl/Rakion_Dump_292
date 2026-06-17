
/* public: int __thiscall CGfxLibrary::IsCurrentModeDH(void) */

int __thiscall CGfxLibrary::IsCurrentModeDH(CGfxLibrary *this)

{
  int iVar1;
  
                    /* 0x1db0  2376  ?IsCurrentModeDH@CGfxLibrary@@QAEHXZ */
  iVar1 = CDisplayMode::IsDualHead((CDisplayMode *)(this + 0xa3c));
  return iVar1;
}

