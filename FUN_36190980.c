
void __fastcall FUN_36190980(undefined4 *param_1)

{
  CListNode *pCVar1;
  void *pvVar2;
  CListNode *pCVar3;
  
  if (param_1[4] != 0) {
    FreeMemory((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  pCVar3 = (CListNode *)*param_1;
  while (pCVar1 = *(CListNode **)pCVar3, pCVar1 != (CListNode *)0x0) {
    pvVar2 = *(void **)(pCVar3 + 8);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x78,*(int *)((int)pvVar2 + -4),CControlBone::~CControlBone);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    FUN_36021530(pCVar3);
    operator_delete(pCVar3);
    pCVar3 = pCVar1;
  }
  return;
}

