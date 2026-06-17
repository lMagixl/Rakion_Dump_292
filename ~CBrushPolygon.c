
/* public: __thiscall CBrushPolygon::~CBrushPolygon(void) */

void __thiscall CBrushPolygon::~CBrushPolygon(CBrushPolygon *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x11e20  395  ??1CBrushPolygon@@QAE@XZ */
  puStack_8 = &LAB_3620dce3;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  Clear(this);
  local_4._0_1_ = 4;
  CRelationSrc::~CRelationSrc((CRelationSrc *)(this + 0x1b0));
  local_4._0_1_ = 3;
  CBrushShadowMap::~CBrushShadowMap((CBrushShadowMap *)(this + 0xd0));
  local_4 = CONCAT31(local_4._1_3_,2);
  _eh_vector_destructor_iterator_(this + 0x1c,0x38,3,CBrushPolygonTexture::~CBrushPolygonTexture);
  if (*(int *)(this + 0x14) != 0) {
    operator_delete__(*(void **)(this + 0x18));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    operator_delete__(*(void **)(this + 0x10));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  ExceptionList = local_c;
  return;
}

