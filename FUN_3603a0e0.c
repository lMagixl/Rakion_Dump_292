
void __fastcall FUN_3603a0e0(CListHead *param_1)

{
  int iVar1;
  CListNode *pCVar2;
  CListNode *pCVar3;
  
  iVar1 = CListHead::IsEmpty(param_1);
  if (iVar1 == 0) {
    pCVar2 = CListHead::Tail(param_1);
    pCVar3 = CListHead::Head(param_1);
    if (pCVar3 != pCVar2) {
      iVar1 = FUN_36021480((int)param_1);
      FUN_36021a30((undefined4 *)param_1);
      FUN_360219e0(param_1,iVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

