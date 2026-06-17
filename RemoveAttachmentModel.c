
/* public: void __thiscall CModelObject::RemoveAttachmentModel(long) */

void __thiscall CModelObject::RemoveAttachmentModel(CModelObject *this,long param_1)

{
  CListNode *pCVar1;
  CListNode *this_00;
  
                    /* 0xb91c0  3124  ?RemoveAttachmentModel@CModelObject@@QAEXJ@Z */
  pCVar1 = *(CListNode **)(this + 0x9c);
  do {
    this_00 = pCVar1;
    if (*(CListNode **)this_00 == (CListNode *)0x0) {
      return;
    }
    pCVar1 = *(CListNode **)this_00;
  } while (*(int *)(this_00 + 8) != param_1);
  CListNode::Remove(this_00);
  CAttachmentModelObject::~CAttachmentModelObject((CAttachmentModelObject *)this_00);
  operator_delete(this_00);
  return;
}

