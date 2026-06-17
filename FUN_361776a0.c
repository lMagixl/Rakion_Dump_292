
void FUN_361776a0(void)

{
  CListNode *pCVar1;
  CListNode *pCVar2;
  CListNode *pCVar3;
  CListNode *this;
  undefined4 *unaff_EBX;
  int iVar4;
  
  iVar4 = unaff_EBX[2] * 6;
  if (0 < iVar4) {
    pCVar2 = (CListNode *)FUN_361bf99c(0x18);
    if (pCVar2 == (CListNode *)0x0) {
      pCVar2 = (CListNode *)0x0;
    }
    else {
      *(undefined4 *)pCVar2 = 0;
      *(undefined4 *)(pCVar2 + 4) = 0;
    }
    *(int *)(pCVar2 + 8) = iVar4;
    *(undefined4 *)(pCVar2 + 0xc) = *unaff_EBX;
    *(undefined4 *)(pCVar2 + 0x10) = unaff_EBX[4];
    *(undefined4 *)(pCVar2 + 0x14) = unaff_EBX[3];
    pCVar1 = DAT_36300a88;
    pCVar3 = (CListNode *)0x0;
    do {
      this = pCVar3;
      pCVar3 = pCVar1;
      if (*(CListNode **)pCVar3 == (CListNode *)0x0) break;
      pCVar1 = *(CListNode **)pCVar3;
    } while (*(int *)(pCVar3 + 8) <= iVar4);
    if (this == (CListNode *)0x0) {
      CListHead::AddHead((CListHead *)&DAT_36300a88,pCVar2);
      unaff_EBX[1] = 0;
      unaff_EBX[2] = 0;
      unaff_EBX[4] = 0;
      unaff_EBX[3] = 0xffffffff;
      return;
    }
    CListNode::AddAfter(this,pCVar2);
    unaff_EBX[1] = 0;
    unaff_EBX[2] = 0;
    unaff_EBX[3] = 0xffffffff;
    unaff_EBX[4] = 0;
  }
  return;
}

