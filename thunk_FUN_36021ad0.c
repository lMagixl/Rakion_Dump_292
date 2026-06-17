
void __fastcall thunk_FUN_36021ad0(undefined4 *param_1)

{
  undefined4 *puVar1;
  CListNode *pCVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  CListNode *pCVar6;
  
  if (param_1[4] != 0) {
    iVar5 = 0;
    if (0 < (int)param_1[4]) {
      do {
        puVar1 = *(undefined4 **)(param_1[3] + iVar5 * 4);
        pcVar4 = StringDuplicate(&DAT_36222fa0);
        StringFree((char *)*puVar1);
        *puVar1 = pcVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_1[4]);
    }
    FreeMemory((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  pCVar6 = (CListNode *)*param_1;
  while (pCVar2 = *(CListNode **)pCVar6, pCVar2 != (CListNode *)0x0) {
    pvVar3 = *(void **)(pCVar6 + 8);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar3,8,*(int *)((int)pvVar3 + -4),CTFileName::~CTFileName);
      operator_delete__((void *)((int)pvVar3 + -4));
    }
    FUN_36021530(pCVar6);
    operator_delete(pCVar6);
    pCVar6 = pCVar2;
  }
  return;
}

