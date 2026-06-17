
/* public: void __thiscall CSessionState::HandleAllMovableEntities(void) */

void __thiscall CSessionState::HandleAllMovableEntities(CSessionState *this)

{
  CListNode *pCVar1;
  CListNode *pCVar2;
  int iVar3;
  CListNode *pCVar4;
  CListNode *pCVar5;
  CListNode *local_18 [3];
  CListNode *local_c [3];
  
                    /* 0x10f740  2232  ?HandleAllMovableEntities@CSessionState@@QAEXXZ */
  CListHead::Clear((CListHead *)local_18);
  CListHead::Clear((CListHead *)local_c);
  pCVar5 = *(CListNode **)(_pNetwork + 0x1324);
  while (pCVar4 = pCVar5, pCVar5 = *(CListNode **)pCVar4, pCVar2 = local_18[0],
        pCVar5 != (CListNode *)0x0) {
    CListNode::Remove(pCVar4);
    if (((byte)pCVar4[-0x290] & 4) == 0) {
      if ((*(uint *)(pCVar4 + -0x298) & 0xe0000000) == 0x80000000) {
        CListHead::AddHead((CListHead *)local_18,pCVar4);
      }
      else {
        CListHead::AddTail((CListHead *)local_18,pCVar4);
      }
    }
  }
  while (pCVar4 = pCVar2, pCVar2 = *(CListNode **)pCVar4, pCVar5 = local_18[0],
        pCVar2 != (CListNode *)0x0) {
    if ((~(*(uint *)(pCVar4 + -0x290) >> 0x1c) & 1) != 0) {
      (**(code **)(*(int *)(pCVar4 + -0x2a0) + 0x144))();
    }
  }
  while (pCVar2 = pCVar5, pCVar5 = *(CListNode **)pCVar2, pCVar5 != (CListNode *)0x0) {
    if ((~(*(uint *)(pCVar2 + -0x290) >> 0x1c) & 1) != 0) {
      (**(code **)(*(int *)(pCVar2 + -0x2a0) + 0x148))();
    }
  }
  iVar3 = CListHead::IsEmpty((CListHead *)local_18);
  pCVar5 = local_18[0];
  while (pCVar2 = local_c[0], iVar3 == 0) {
    local_18[0] = pCVar5;
    CListNode::Remove(pCVar5);
    CListHead::AddTail((CListHead *)local_c,pCVar5);
    if ((~(*(uint *)(pCVar5 + -0x290) >> 0x1c) & 1) != 0) {
      (**(code **)(*(int *)(pCVar5 + -0x2a0) + 0x14c))();
    }
    CListHead::MoveList((CListHead *)local_18,(CListHead *)(_pNetwork + 0x1324));
    iVar3 = CListHead::IsEmpty((CListHead *)local_18);
    pCVar5 = local_18[0];
  }
  while (pCVar4 = pCVar2, pCVar2 = *(CListNode **)pCVar4, pCVar5 = local_c[0],
        pCVar2 != (CListNode *)0x0) {
    if ((~(*(uint *)(pCVar4 + -0x290) >> 0x1c) & 1) != 0) {
      (**(code **)(*(int *)(pCVar4 + -0x2a0) + 0x150))();
    }
  }
  while (pCVar2 = *(CListNode **)pCVar5, pCVar2 != (CListNode *)0x0) {
    pCVar4 = pCVar5 + -0x2a0;
    if ((*(uint *)(pCVar5 + -0x290) & 0x10) != 0) {
      *(uint *)(pCVar5 + -0x290) = *(uint *)(pCVar5 + -0x290) & 0xffffffef;
      CListNode::Remove(pCVar5);
    }
    pCVar1 = pCVar5 + -0x290;
    pCVar5 = pCVar2;
    if ((~(*(uint *)pCVar1 >> 0x1c) & 1) != 0) {
      (**(code **)(*(int *)pCVar4 + 0x144))();
    }
  }
  CListHead::MoveList((CListHead *)(_pNetwork + 0x1324),(CListHead *)local_c);
  return;
}

