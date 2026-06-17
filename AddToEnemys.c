
/* public: void __thiscall CMovableEntity::AddToEnemys(void) */

void __thiscall CMovableEntity::AddToEnemys(CMovableEntity *this)

{
  CListNode *this_00;
  int iVar1;
  
                    /* 0x1aa9b0  1030  ?AddToEnemys@CMovableEntity@@QAEXXZ */
  this_00 = (CListNode *)(this + 0x34c);
  iVar1 = CListNode::IsLinked(this_00);
  if (iVar1 != 0) {
    CListNode::Remove(this_00);
  }
  CListHead::AddTail((CListHead *)(*(int *)(this + 0xa8) + 0x14c),this_00);
  return;
}

