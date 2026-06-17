
/* public: void __thiscall CModelObject::RemoveAllAttachmentModels(void) */

void __thiscall CModelObject::RemoveAllAttachmentModels(CModelObject *this)

{
  CListNode *pCVar1;
  CListNode *this_00;
  
                    /* 0xb8670  3116  ?RemoveAllAttachmentModels@CModelObject@@QAEXXZ */
  this_00 = *(CListNode **)(this + 0x9c);
  while (pCVar1 = *(CListNode **)this_00, pCVar1 != (CListNode *)0x0) {
    CListNode::Remove(this_00);
    CAttachmentModelObject::~CAttachmentModelObject((CAttachmentModelObject *)this_00);
    operator_delete(this_00);
    this_00 = pCVar1;
  }
  return;
}

