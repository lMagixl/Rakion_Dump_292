
/* public: int __thiscall CGfxLibrary::HasCompression(void) */

int __thiscall CGfxLibrary::HasCompression(CGfxLibrary *this)

{
                    /* 0x85a10  2253  ?HasCompression@CGfxLibrary@@QAEHXZ */
  if (*(int *)(_pGfx + 0xa38) == 0) {
    if (((*(uint *)(this + 0xa54) & 0x8000000) != 0) &&
       ((*(uint *)(this + 0xa54) & 0x10000000) != 0)) {
      return 1;
    }
  }
  else if ((*(int *)(_pGfx + 0xa38) == 1) && (((byte)this[0xa54] & 8) != 0)) {
    return 1;
  }
  return 0;
}

