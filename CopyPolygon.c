
/* public: class CBrushPolygon & __thiscall CBrushPolygon::CopyPolygon(class CBrushPolygon &) */

CBrushPolygon * __thiscall CBrushPolygon::CopyPolygon(CBrushPolygon *this,CBrushPolygon *param_1)

{
                    /* 0x13ba70  1393  ?CopyPolygon@CBrushPolygon@@QAEAAV1@AAV1@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  FUN_3613c370(this + 4,(int *)(param_1 + 4));
  FUN_3613c410(this + 0xc,(int *)(param_1 + 0xc));
  FUN_36026de0(this + 0x14,(int *)(param_1 + 0x14));
  CopyTextures(this,param_1);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(this + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(this + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  FUN_360325f0((undefined4 *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  return this;
}

