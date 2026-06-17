
/* public: void __thiscall CBrushPolygon::CopyFromSameSector(class CBrushPolygon &) */

void __thiscall CBrushPolygon::CopyFromSameSector(CBrushPolygon *this,CBrushPolygon *param_1)

{
                    /* 0x13a7b0  1387  ?CopyFromSameSector@CBrushPolygon@@QAEXAAV1@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  CBrushPolygonTexture::CopyTextureProperties
            ((CBrushPolygonTexture *)(this + 0x1c),(CBrushPolygonTexture *)(param_1 + 0x1c),1);
  CBrushPolygonTexture::CopyTextureProperties
            ((CBrushPolygonTexture *)(this + 0x54),(CBrushPolygonTexture *)(param_1 + 0x54),1);
  CBrushPolygonTexture::CopyTextureProperties
            ((CBrushPolygonTexture *)(this + 0x8c),(CBrushPolygonTexture *)(param_1 + 0x8c),1);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  FUN_36010000(this + 4,(undefined4 *)(param_1 + 4));
  return;
}

