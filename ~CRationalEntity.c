
/* public: virtual __thiscall CRationalEntity::~CRationalEntity(void) */

void __thiscall CRationalEntity::~CRationalEntity(CRationalEntity *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x129e0  466  ??1CRationalEntity@@UAE@XZ */
  puStack_8 = &LAB_3620de68;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(this + 0x110) != 0) {
    ExceptionList = &local_c;
    operator_delete__(*(void **)(this + 0x114));
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0;
  }
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x104));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 0x104));
  }
  local_4 = 0xffffffff;
  CEntity::~CEntity((CEntity *)this);
  ExceptionList = local_c;
  return;
}

