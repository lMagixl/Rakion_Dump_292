
/* public: void __thiscall CSessionState::HandleMovers(void) */

void __thiscall CSessionState::HandleMovers(CSessionState *this)

{
  CListNode *pCVar1;
  int iVar2;
  CListNode *pCVar3;
  CListNode *pCVar4;
  CEntity *this_00;
  CListNode *local_30 [3];
  CListNode *local_24 [3];
  CListHead local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10f470  2238  ?HandleMovers@CSessionState@@QAEXXZ */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621803a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CListHead::Clear((CListHead *)local_30);
  CListHead::Clear((CListHead *)local_24);
  CListHead::Clear(local_18);
  pCVar1 = *(CListNode **)(_pNetwork + 0x1324);
  while (pCVar4 = pCVar1, pCVar1 = *(CListNode **)pCVar4, pCVar3 = local_30[0],
        pCVar1 != (CListNode *)0x0) {
    CListNode::Remove(pCVar4);
    if (((byte)pCVar4[-0x290] & 4) == 0) {
      if ((*(uint *)(pCVar4 + -0x298) & 0xe0000000) == 0x80000000) {
        CListHead::AddHead((CListHead *)local_30,pCVar4);
      }
      else {
        CListHead::AddTail((CListHead *)local_30,pCVar4);
      }
    }
  }
  while (pCVar1 = *(CListNode **)pCVar3, pCVar4 = local_30[0], pCVar1 != (CListNode *)0x0) {
    pCVar4 = pCVar3 + -0x2a0;
    iVar2 = (**(code **)(*(int *)(pCVar3 + -0x2a0) + 0x70))();
    pCVar3 = pCVar1;
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)pCVar4 + 0x17c))(), iVar2 != 0)) {
      (**(code **)(*(int *)pCVar4 + 0x144))();
    }
  }
  while (pCVar1 = *(CListNode **)pCVar4, pCVar1 != (CListNode *)0x0) {
    pCVar3 = pCVar4 + -0x2a0;
    iVar2 = (**(code **)(*(int *)pCVar3 + 0x70))();
    pCVar4 = pCVar1;
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)pCVar3 + 0x17c))(), iVar2 != 0)) {
      (**(code **)(*(int *)pCVar3 + 0x148))();
    }
  }
  iVar2 = CListHead::IsEmpty((CListHead *)local_30);
  pCVar1 = local_30[0];
  while (pCVar3 = local_24[0], iVar2 == 0) {
    this_00 = (CEntity *)(pCVar1 + -0x2a0);
    if (this_00 != (CEntity *)0x0) {
      *(int *)(pCVar1 + -0x288) = *(int *)(pCVar1 + -0x288) + 1;
    }
    uStack_4 = 0;
    local_30[0] = pCVar1;
    CListNode::Remove(pCVar1);
    CListHead::AddTail((CListHead *)local_24,pCVar1);
    iVar2 = (**(code **)(*(int *)this_00 + 0x70))();
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)this_00 + 0x17c))(), iVar2 != 0)) {
      (**(code **)(*(int *)this_00 + 0x14c))();
      CListHead::MoveList((CListHead *)local_30,(CListHead *)(_pNetwork + 0x1324));
    }
    iVar2 = *(int *)(pCVar1 + -0x288);
    uStack_4 = 0xffffffff;
    *(int *)(pCVar1 + -0x288) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      CEntity::DeleteSelf(this_00);
    }
    iVar2 = CListHead::IsEmpty((CListHead *)local_30);
    pCVar1 = local_30[0];
  }
  while (pCVar1 = *(CListNode **)pCVar3, pCVar4 = local_24[0], pCVar1 != (CListNode *)0x0) {
    pCVar4 = pCVar3 + -0x2a0;
    iVar2 = (**(code **)(*(int *)(pCVar3 + -0x2a0) + 0x70))();
    pCVar3 = pCVar1;
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)pCVar4 + 0x17c))(), iVar2 != 0)) {
      (**(code **)(*(int *)pCVar4 + 0x150))();
    }
  }
  while (pCVar1 = *(CListNode **)pCVar4, pCVar1 != (CListNode *)0x0) {
    pCVar3 = pCVar4 + -0x2a0;
    if ((*(uint *)(pCVar4 + -0x290) & 0x10) != 0) {
      *(uint *)(pCVar4 + -0x290) = *(uint *)(pCVar4 + -0x290) & 0xffffffef;
      CListNode::Remove(pCVar4);
      iVar2 = (**(code **)(*(int *)pCVar3 + 0x90))();
      if ((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)pCVar3 + 0x70))(), iVar2 == 0)) {
        CEntityMessage::WritePlacementNotify
                  ((CEntityMessage *)(this + 0x1cd8),(ulong *)(pCVar4 + -0x284),'\x01');
        CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)(this + 0x1cd8));
      }
    }
    iVar2 = (**(code **)(*(int *)pCVar3 + 0x70))();
    pCVar4 = pCVar1;
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)pCVar3 + 0x17c))(), iVar2 != 0)) {
      (**(code **)(*(int *)pCVar3 + 0x144))();
    }
  }
  CListHead::MoveList((CListHead *)(_pNetwork + 0x1324),local_18);
  CListHead::MoveList((CListHead *)(_pNetwork + 0x1324),(CListHead *)local_24);
  CEntity::HandleSentEvents();
  ExceptionList = pvStack_c;
  return;
}

