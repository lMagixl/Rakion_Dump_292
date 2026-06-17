
/* public: virtual __thiscall CModelData::~CModelData(void) */

void __thiscall CModelData::~CModelData(CModelData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb9ff0  441  ??1CModelData@@UAE@XZ */
  puStack_8 = &LAB_362142bd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0xb;
  Clear(this);
  local_4._0_1_ = 10;
  thunk_FUN_360b2390((undefined4 *)(this + 0x12a8));
  local_4._0_1_ = 9;
  thunk_FUN_360b22d0((undefined4 *)(this + 0x1290));
  local_4._0_1_ = 8;
  _eh_vector_destructor_iterator_(this + 0x11e0,4,0x20,CTString::~CTString);
  local_4._0_1_ = 7;
  _eh_vector_destructor_iterator_(this + 0xce0,0x28,0x20,CModelPatch::~CModelPatch);
  local_4 = CONCAT31(local_4._1_3_,6);
  _eh_vector_destructor_iterator_(this + 0xd8,0x60,0x20,ModelMipInfo::~ModelMipInfo);
  if (*(int *)(this + 0x4c) != 0) {
    operator_delete__(*(void **)(this + 0x50));
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x50) = 0;
  }
  if (*(int *)(this + 0x44) != 0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int *)(this + 0x3c) != 0) {
    operator_delete__(*(void **)(this + 0x40));
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x34) != 0) {
    operator_delete__(*(void **)(this + 0x38));
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    operator_delete__(*(void **)(this + 0x30));
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    operator_delete__(*(void **)(this + 0x28));
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  local_4 = 0xffffffff;
  CAnimData::~CAnimData((CAnimData *)this);
  ExceptionList = local_c;
  return;
}

