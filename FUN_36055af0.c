
void __fastcall FUN_36055af0(undefined4 *param_1)

{
  CListNode *pCVar1;
  CListNode *pCVar2;
  
  if (param_1[4] != 0) {
    FreeMemory((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  pCVar2 = (CListNode *)*param_1;
  while (pCVar1 = *(CListNode **)pCVar2, pCVar1 != (CListNode *)0x0) {
    operator_delete__(*(void **)(pCVar2 + 8));
    FUN_36021530(pCVar2);
    operator_delete(pCVar2);
    pCVar2 = pCVar1;
  }
  return;
}

