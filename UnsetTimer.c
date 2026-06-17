
/* public: void __thiscall CRationalEntity::UnsetTimer(void) */

void __thiscall CRationalEntity::UnsetTimer(CRationalEntity *this)

{
  int iVar1;
  
                    /* 0x126090  3896  ?UnsetTimer@CRationalEntity@@QAEXXZ */
  *(undefined4 *)(this + 0x10c) = 0xbf800000;
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x104));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(this + 0x104));
    return;
  }
  return;
}

