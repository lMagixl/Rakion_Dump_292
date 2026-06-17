
/* public: class CBrushMip * __thiscall CBrushMip::GetPrev(void) */

CBrushMip * __thiscall CBrushMip::GetPrev(CBrushMip *this)

{
                    /* 0x139360  2064  ?GetPrev@CBrushMip@@QAEPAV1@XZ */
  if (*(int *)(*(int *)(this + 0x1c) + 4) == 0) {
    return (CBrushMip *)0x0;
  }
  return (CBrushMip *)(*(int *)(this + 0x1c) + -0x18);
}

