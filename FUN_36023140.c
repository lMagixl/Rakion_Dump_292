
void __fastcall FUN_36023140(undefined4 *param_1)

{
  undefined4 *puVar1;
  CListNode *pCVar2;
  void *pvVar3;
  char *pcVar4;
  CListNode *pCVar5;
  int iVar6;
  
  if (param_1[4] != 0) {
    iVar6 = 0;
    if (0 < (int)param_1[4]) {
      do {
        puVar1 = *(undefined4 **)(param_1[3] + iVar6 * 4);
        pcVar4 = StringDuplicate(&DAT_36222fa0);
        StringFree((char *)*puVar1);
        *puVar1 = pcVar4;
        puVar1[2] = 0;
        puVar1[3] = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_1[4]);
    }
    FreeMemory((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  pCVar5 = (CListNode *)*param_1;
  while (pCVar2 = *(CListNode **)pCVar5, pCVar2 != (CListNode *)0x0) {
    pvVar3 = *(void **)(pCVar5 + 8);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar3,0x10,*(int *)((int)pvVar3 + -4),(_func_void_void_ptr *)&LAB_36022600);
      operator_delete__((void *)((int)pvVar3 + -4));
    }
    FUN_36021530(pCVar5);
    operator_delete(pCVar5);
    pCVar5 = pCVar2;
  }
  return;
}

