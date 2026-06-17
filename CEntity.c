
/* public: __thiscall CEntity::CEntity(void) */

CEntity * __thiscall CEntity::CEntity(CEntity *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1270d0  84  ??0CEntity@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218983;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x8c) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x90) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x94) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x98) = 0xff61b1e6;
  *(undefined4 *)(this + 0x9c) = 0xff61b1e6;
  *(undefined4 *)(this + 0xa0) = 0xff61b1e6;
  CRelationDst::CRelationDst((CRelationDst *)(this + 0xac));
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  local_4 = 1;
  CListHead::Clear((CListHead *)(this + 0xc4));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x88) = 0xbf800000;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 4) = 2;
  DAT_362cce7c = DAT_362cce7c + 1;
  *(undefined4 *)(this + 0x20) = 0xbf800000;
  *(undefined4 *)(this + 0xe8) = 0xbf800000;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x800000;
  *(undefined4 *)(this + 0xfc) = 8;
  *(undefined4 *)(this + 0xf0) = 1;
  ExceptionList = local_c;
  return this;
}

