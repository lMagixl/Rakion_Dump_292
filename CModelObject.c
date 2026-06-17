
/* public: __thiscall CModelObject::CModelObject(void) */

CModelObject * __thiscall CModelObject::CModelObject(CModelObject *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb7310  154  ??0CModelObject@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213f51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CAnimObject::CAnimObject((CAnimObject *)this);
  local_4 = 0;
  CTextureObject::CTextureObject((CTextureObject *)(this + 0x24));
  local_4._0_1_ = 1;
  CTextureObject::CTextureObject((CTextureObject *)(this + 0x3c));
  local_4._0_1_ = 2;
  CTextureObject::CTextureObject((CTextureObject *)(this + 0x54));
  local_4._0_1_ = 3;
  CTextureObject::CTextureObject((CTextureObject *)(this + 0x6c));
  local_4 = CONCAT31(local_4._1_3_,4);
  CListHead::Clear((CListHead *)(this + 0x9c));
  *(undefined4 *)(this + 0x84) = 0x3f800000;
  *(undefined4 *)(this + 0x88) = 0x3f800000;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  *(undefined4 *)(this + 0x90) = 0x7fffffff;
  *(undefined4 *)(this + 0x20) = 1;
  ExceptionList = local_c;
  return this;
}

