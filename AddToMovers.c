
/* public: void __thiscall CMovableEntity::AddToMovers(void) */

void __thiscall CMovableEntity::AddToMovers(CMovableEntity *this)

{
  int iVar1;
  
                    /* 0x1aa9f0  1031  ?AddToMovers@CMovableEntity@@QAEXXZ */
  iVar1 = CListNode::IsLinked((CListNode *)(this + 0x2a0));
  if (iVar1 == 0) {
    CListHead::AddTail((CListHead *)(*(int *)(this + 0xa8) + 0x140),(CListNode *)(this + 0x2a0));
    iVar1 = (**(code **)(*(int *)this + 0x90))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)this + 0x70))();
      if (iVar1 == 0) {
        CEntityMessage::WritePlacementNotify
                  ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(this + 0x1c),'\x01');
        CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
      }
    }
  }
  return;
}

