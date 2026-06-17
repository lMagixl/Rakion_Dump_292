
/* public: class CBrushPolygon & __thiscall CBrushPolygon::CopyPropertiesWithoutTexture(class
   CBrushPolygon &) */

CBrushPolygon * __thiscall
CBrushPolygon::CopyPropertiesWithoutTexture(CBrushPolygon *this,CBrushPolygon *param_1)

{
  uint uVar1;
  
                    /* 0x13a180  1397  ?CopyPropertiesWithoutTexture@CBrushPolygon@@QAEAAV1@AAV1@@Z
                        */
  uVar1 = *(uint *)(this + 200);
  *(uint *)(this + 200) = uVar1 & 0xa20827df;
  *(uint *)(this + 200) = *(uint *)(param_1 + 200) & 0x5df7d820 | uVar1 & 0xa20827df;
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  return this;
}

