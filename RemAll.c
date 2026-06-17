
/* public: void __thiscall CListHead::RemAll(void) */

void __thiscall CListHead::RemAll(CListHead *this)

{
  CListNode *pCVar1;
  CListNode *this_00;
  
                    /* 0x2b560  3098  ?RemAll@CListHead@@QAEXXZ */
  this_00 = *(CListNode **)this;
  while (pCVar1 = *(CListNode **)this_00, pCVar1 != (CListNode *)0x0) {
    CListNode::Remove(this_00);
    this_00 = pCVar1;
  }
  return;
}

