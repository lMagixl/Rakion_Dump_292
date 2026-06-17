
/* public: class CBrushPolygon & __thiscall CBrushPolygon::CopyTextures(class CBrushPolygon &) */

CBrushPolygon * __thiscall CBrushPolygon::CopyTextures(CBrushPolygon *this,CBrushPolygon *param_1)

{
                    /* 0x13a1e0  1401  ?CopyTextures@CBrushPolygon@@QAEAAV1@AAV1@@Z */
  CAnimObject::SetData((CAnimObject *)(this + 0x1c),*(CAnimData **)(param_1 + 0x30));
  this[0x4c] = param_1[0x4c];
  this[0x4d] = param_1[0x4d];
  this[0x4e] = param_1[0x4e];
  this[0x4f] = param_1[0x4f];
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  CAnimObject::SetData((CAnimObject *)(this + 0x54),*(CAnimData **)(param_1 + 0x68));
  this[0x84] = param_1[0x84];
  this[0x85] = param_1[0x85];
  this[0x86] = param_1[0x86];
  this[0x87] = param_1[0x87];
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  CAnimObject::SetData((CAnimObject *)(this + 0x8c),*(CAnimData **)(param_1 + 0xa0));
  this[0xbc] = param_1[0xbc];
  this[0xbd] = param_1[0xbd];
  this[0xbe] = param_1[0xbe];
  this[0xbf] = param_1[0xbf];
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  return this;
}

