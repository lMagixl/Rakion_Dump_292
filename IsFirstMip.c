
/* public: int __thiscall CBrushMip::IsFirstMip(void) */

int __thiscall CBrushMip::IsFirstMip(CBrushMip *this)

{
                    /* 0x4ae0  2391  ?IsFirstMip@CBrushMip@@QAEHXZ */
  return (uint)(*(CBrushMip **)(*(int *)(this + 0x14) + 0x674) == this + 0x18);
}

