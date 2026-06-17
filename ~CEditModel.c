
/* public: virtual __thiscall CEditModel::~CEditModel(void) */

void __thiscall CEditModel::~CEditModel(CEditModel *this)

{
  CListNode *pCVar1;
  void *pvVar2;
  int iVar3;
  CListNode *this_00;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xad1c0  412  ??1CEditModel@@UAE@XZ */
  puStack_8 = &LAB_36213953;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 7;
  this_00 = *(CListNode **)(this + 0x1390);
  while (pCVar1 = *(CListNode **)this_00, pCVar1 != (CListNode *)0x0) {
    CStock_CTextureData::Release(_pTextureStock,*(CTextureData **)(this_00 + 8));
    local_4._0_1_ = 8;
    StringFree(*(char **)(this_00 + 0xc));
    local_4 = CONCAT31(local_4._1_3_,7);
    iVar3 = CListNode::IsLinked(this_00);
    if (iVar3 != 0) {
      CListNode::Remove(this_00);
    }
    operator_delete(this_00);
    this_00 = pCVar1;
  }
  local_4._0_1_ = 6;
  StringFree(*(char **)(this + 0x13c8));
  local_4._0_1_ = 5;
  StringFree(*(char **)(this + 0x13c0));
  local_4._0_1_ = 4;
  StringFree(*(char **)(this + 0x13b8));
  local_4._0_1_ = 3;
  StringFree(*(char **)(this + 0x1370));
  local_4._0_1_ = 2;
  if (*(int *)(this + 0x1300) != 0) {
    pvVar2 = *(void **)(this + 0x1304);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x14,*(int *)((int)pvVar2 + -4),CAttachedSound::~CAttachedSound);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    *(undefined4 *)(this + 0x1300) = 0;
    *(undefined4 *)(this + 0x1304) = 0;
  }
  local_4._0_1_ = 1;
  thunk_FUN_360b2430((undefined4 *)(this + 0x12ec));
  local_4 = (uint)local_4._1_3_ << 8;
  CModelData::~CModelData((CModelData *)(this + 0x18));
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

