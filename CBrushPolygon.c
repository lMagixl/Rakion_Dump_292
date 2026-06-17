
/* public: __thiscall CBrushPolygon::CBrushPolygon(class CBrushPolygon const &) */

CBrushPolygon * __thiscall CBrushPolygon::CBrushPolygon(CBrushPolygon *this,CBrushPolygon *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11ee0  42  ??0CBrushPolygon@@QAE@ABV0@@Z */
  puStack_8 = &LAB_3620dd11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  local_4 = 2;
  _eh_vector_copy_constructor_iterator_
            (this + 0x1c,param_1 + 0x1c,0x38,3,CBrushPolygonTexture::CBrushPolygonTexture,
             CBrushPolygonTexture::~CBrushPolygonTexture);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  CShadowMap::CShadowMap((CShadowMap *)(this + 0xd0),(CShadowMap *)(param_1 + 0xd0));
  *(undefined ***)(this + 0xd0) = &CBrushShadowMap::_vftable_;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(this + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(this + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(this + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(this + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  ExceptionList = local_c;
  return this;
}

