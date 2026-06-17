
void __fastcall FUN_360f1160(undefined4 *param_1)

{
  CListNode *pCVar1;
  CListNode *pCVar2;
  
  pCVar2 = (CListNode *)*param_1;
  while (pCVar1 = *(CListNode **)pCVar2, pCVar1 != (CListNode *)0x0) {
    FUN_360f11a0(pCVar2);
    operator_delete(pCVar2);
    pCVar2 = pCVar1;
  }
  return;
}

