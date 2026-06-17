
/* public: void __thiscall CMovableEntity::AddToMoversDuringMoving(void) */

void __thiscall CMovableEntity::AddToMoversDuringMoving(CMovableEntity *this)

{
  int iVar1;
  
                    /* 0x1aaa60  1032  ?AddToMoversDuringMoving@CMovableEntity@@QAEXXZ */
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x2a0));
  if (iVar1 == 0) {
    AddToMovers(this);
    *(uint *)(this + 8) = *(uint *)(this + 8) | 0x10000;
  }
  return;
}

