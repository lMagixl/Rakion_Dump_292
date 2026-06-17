
/* public: __thiscall CBrushShadowMap::CBrushShadowMap(void) */

CBrushShadowMap * __thiscall CBrushShadowMap::CBrushShadowMap(CBrushShadowMap *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x140740  51  ??0CBrushShadowMap@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219946;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CShadowMap::CShadowMap((CShadowMap *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  local_4 = 1;
  CListHead::Clear((CListHead *)(this + 0x90));
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

