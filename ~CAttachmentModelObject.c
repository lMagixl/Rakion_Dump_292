
/* public: __thiscall CAttachmentModelObject::~CAttachmentModelObject(void) */

void __thiscall CAttachmentModelObject::~CAttachmentModelObject(CAttachmentModelObject *this)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x32850  387  ??1CAttachmentModelObject@@QAE@XZ */
  puStack_8 = &LAB_3620fba8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CModelObject::~CModelObject((CModelObject *)(this + 0x24));
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked((CListNode *)this);
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)this);
  }
  ExceptionList = local_c;
  return;
}

