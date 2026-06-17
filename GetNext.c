
/* public: class CBrushMip * __thiscall CBrushMip::GetNext(void) */

CBrushMip * __thiscall CBrushMip::GetNext(CBrushMip *this)

{
                    /* 0x139350  2015  ?GetNext@CBrushMip@@QAEPAV1@XZ */
  if (**(int **)(this + 0x18) == 0) {
    return (CBrushMip *)0x0;
  }
  return (CBrushMip *)(*(int **)(this + 0x18) + -6);
}

