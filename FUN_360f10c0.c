
void __fastcall FUN_360f10c0(undefined4 *param_1)

{
  CListNode *pCVar1;
  
  pCVar1 = (CListNode *)*param_1;
  if (*(int *)pCVar1 != 0) {
    FUN_360f11a0(pCVar1);
    operator_delete(pCVar1);
  }
  return;
}

