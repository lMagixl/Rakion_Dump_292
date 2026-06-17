
/* public: class CBrushPolygonTexture & __thiscall CBrushPolygonTexture::CopyTextureProperties(class
   CBrushPolygonTexture &,int) */

CBrushPolygonTexture * __thiscall
CBrushPolygonTexture::CopyTextureProperties
          (CBrushPolygonTexture *this,CBrushPolygonTexture *param_1,int param_2)

{
                    /* 0x45e0  1400  ?CopyTextureProperties@CBrushPolygonTexture@@QAEAAV1@AAV1@H@Z
                        */
  CAnimObject::SetData((CAnimObject *)this,*(CAnimData **)(param_1 + 0x14));
  this[0x30] = param_1[0x30];
  this[0x31] = param_1[0x31];
  this[0x32] = param_1[0x32];
  this[0x33] = param_1[0x33];
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  if (param_2 != 0) {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  }
  return this;
}

