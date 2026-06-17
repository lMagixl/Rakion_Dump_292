
/* public: void __thiscall CBrushMip::SetMipDistance(float) */

void __thiscall CBrushMip::SetMipDistance(CBrushMip *this,float param_1)

{
                    /* 0x1393c0  3514  ?SetMipDistance@CBrushMip@@QAEXM@Z */
  *(float *)(this + 0x20) = param_1;
  SpreadFurtherMips(this);
  return;
}

