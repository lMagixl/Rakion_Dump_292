
/* public: int __thiscall CGfxLibrary::HasOcclusionCulling(void) */

int __thiscall CGfxLibrary::HasOcclusionCulling(CGfxLibrary *this)

{
                    /* 0x1e10  2257  ?HasOcclusionCulling@CGfxLibrary@@QAEHXZ */
  if (*(int *)(this + 0xa38) == 0) {
    return *(uint *)(this + 0xa54) & 0x800000;
  }
  if (*(int *)(this + 0xa38) == 1) {
    return *(uint *)(this + 0xa54) & 0x8000;
  }
  return 0;
}

