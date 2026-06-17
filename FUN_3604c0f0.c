
undefined4 __thiscall FUN_3604c0f0(void *this,int param_1)

{
  undefined4 uVar1;
  CListNode *pCVar2;
  CListNode *pCVar3;
  
  uVar1 = thunk_FUN_361bf99c((param_1 + 1) * 0x38);
  pCVar2 = (CListNode *)FUN_361bf99c(0xc);
  pCVar3 = (CListNode *)0x0;
  if (pCVar2 != (CListNode *)0x0) {
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(pCVar2 + 4) = 0;
    pCVar3 = pCVar2;
  }
  CListHead::AddTail(this,pCVar3);
  *(undefined4 *)(pCVar3 + 8) = uVar1;
  return uVar1;
}

