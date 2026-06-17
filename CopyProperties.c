
/* public: class CBrushPolygon & __thiscall CBrushPolygon::CopyProperties(class CBrushPolygon &,int)
    */

CBrushPolygon * __thiscall
CBrushPolygon::CopyProperties(CBrushPolygon *this,CBrushPolygon *param_1,int param_2)

{
  uint uVar1;
  
                    /* 0x13a0f0  1396  ?CopyProperties@CBrushPolygon@@QAEAAV1@AAV1@H@Z */
  uVar1 = *(uint *)(this + 200);
  *(uint *)(this + 200) = uVar1 & 0xa20827df;
  *(uint *)(this + 200) = *(uint *)(param_1 + 200) & 0x5df7d820 | uVar1 & 0xa20827df;
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  CBrushPolygonTexture::CopyTextureProperties
            ((CBrushPolygonTexture *)(this + 0x1c),(CBrushPolygonTexture *)(param_1 + 0x1c),param_2)
  ;
  CBrushPolygonTexture::CopyTextureProperties
            ((CBrushPolygonTexture *)(this + 0x54),(CBrushPolygonTexture *)(param_1 + 0x54),param_2)
  ;
  CBrushPolygonTexture::CopyTextureProperties
            ((CBrushPolygonTexture *)(this + 0x8c),(CBrushPolygonTexture *)(param_1 + 0x8c),param_2)
  ;
  return this;
}

