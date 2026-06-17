
/* public: __thiscall CModelData::CModelData(void) */

CModelData * __thiscall CModelData::CModelData(CModelData *this)

{
  CModelData *pCVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb9e80  146  ??0CModelData@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214205;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CAnimData::CAnimData((CAnimData *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  pCVar1 = this + 0xd8;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_
            (pCVar1,0x60,0x20,ModelMipInfo::ModelMipInfo,ModelMipInfo::~ModelMipInfo);
  local_4._0_1_ = 7;
  _eh_vector_constructor_iterator_
            (this + 0xce0,0x28,0x20,CModelPatch::CModelPatch,CModelPatch::~CModelPatch);
  local_4._0_1_ = 8;
  _eh_vector_constructor_iterator_(this + 0x11e0,4,0x20,CTString::CTString,CTString::~CTString);
  local_4._0_1_ = 9;
  FUN_360bb120((CListHead *)(this + 0x1290));
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_360bb1c0((CListHead *)(this + 0x12a8));
  *(undefined4 *)(this + 0x12d0) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x12bc) = 0;
  iVar2 = 0x20;
  do {
    *(undefined4 *)pCVar1 = 0;
    pCVar1 = pCVar1 + 0x60;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x1268) = 0x3f800000;
  *(undefined4 *)(this + 0x126c) = 0x3f800000;
  *(undefined4 *)(this + 0x1270) = 0x3f800000;
  *(undefined4 *)(this + 0x1260) = 0;
  *(undefined4 *)(this + 0x1264) = 0;
  *(undefined4 *)(this + 0x12a4) = 0;
  *(undefined4 *)(this + 0x12c0) = 0xffffffff;
  *(undefined4 *)(this + 0x12c4) = 0xffffffff;
  *(undefined4 *)(this + 0x12c8) = 0xffffffff;
  *(undefined4 *)(this + 0x12cc) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

