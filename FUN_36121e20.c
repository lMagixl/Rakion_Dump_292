
void __fastcall FUN_36121e20(undefined4 *param_1)

{
  int iVar1;
  CListNode *pCVar2;
  void *pvVar3;
  int iVar4;
  CListNode *pCVar5;
  
  if (param_1[4] != 0) {
    iVar4 = 0;
    if (0 < (int)param_1[4]) {
      do {
        iVar1 = *(int *)(param_1[3] + iVar4 * 4);
        *(undefined4 *)(iVar1 + 4) = 0;
        *(undefined4 *)(iVar1 + 8) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_1[4]);
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
                (pvVar3,0x10,*(int *)((int)pvVar3 + -4),(_func_void_void_ptr *)&LAB_3611eff0);
      FreeMemoryAligned((void *)((int)pvVar3 + -4));
    }
    FUN_36021530(pCVar5);
    operator_delete(pCVar5);
    pCVar5 = pCVar2;
  }
  return;
}

