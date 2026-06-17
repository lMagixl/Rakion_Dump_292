
CAttachedModelPosition * __thiscall FUN_360b1e60(void *this,int param_1)

{
  CAttachedModelPosition *pCVar1;
  CListNode *pCVar2;
  CAttachedModelPosition *this_00;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213bfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar1 = (CAttachedModelPosition *)thunk_FUN_361bf99c((param_1 * 9 + 9) * 4);
  local_4 = 0;
  if (pCVar1 == (CAttachedModelPosition *)0x0) {
    pCVar1 = (CAttachedModelPosition *)0x0;
  }
  else if (-1 < param_1) {
    iVar3 = param_1 + 1;
    this_00 = pCVar1;
    do {
      CAttachedModelPosition::CAttachedModelPosition(this_00);
      this_00 = this_00 + 0x24;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_4 = 0xffffffff;
  pCVar2 = (CListNode *)FUN_361bf99c(0xc);
  if (pCVar2 == (CListNode *)0x0) {
    pCVar2 = (CListNode *)0x0;
  }
  else {
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(pCVar2 + 4) = 0;
  }
  CListHead::AddTail(this,pCVar2);
  *(CAttachedModelPosition **)(pCVar2 + 8) = pCVar1;
  ExceptionList = local_c;
  return pCVar1;
}

