
void __fastcall FUN_36116f80(int param_1)

{
  int iVar1;
  int iVar2;
  CListNode *pCVar3;
  CListNode *pCVar4;
  
  pCVar3 = *(CListNode **)(param_1 + 0xe40);
  while (pCVar4 = pCVar3, pCVar3 = *(CListNode **)pCVar4, pCVar3 != (CListNode *)0x0) {
    CListNode::Remove(pCVar4);
    iVar1 = 0;
    if (0 < *(int *)(pCVar4 + -0x6c)) {
      iVar2 = 0;
      do {
        *(undefined4 *)(*(int *)(pCVar4 + -0x68) + 400 + iVar2) = 0;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x1d0;
      } while (iVar1 < *(int *)(pCVar4 + -0x6c));
    }
  }
  pCVar3 = *(CListNode **)(param_1 + 0xe34);
  while (pCVar4 = *(CListNode **)pCVar3, pCVar4 != (CListNode *)0x0) {
    CListNode::Remove(pCVar3);
    pCVar3 = pCVar4;
  }
  pCVar3 = *(CListNode **)(param_1 + 0xe4c);
  while (pCVar4 = *(CListNode **)pCVar3, pCVar4 != (CListNode *)0x0) {
    CListNode::Remove(pCVar3);
    pCVar3 = pCVar4;
  }
  return;
}

