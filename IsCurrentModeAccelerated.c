
/* public: int __thiscall CGfxLibrary::IsCurrentModeAccelerated(void) */

int __thiscall CGfxLibrary::IsCurrentModeAccelerated(CGfxLibrary *this)

{
                    /* 0x1da0  2375  ?IsCurrentModeAccelerated@CGfxLibrary@@QAEHXZ */
  return *(uint *)(this + 0xa54) & 1;
}

