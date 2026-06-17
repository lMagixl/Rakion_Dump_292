
void __fastcall FUN_36043c40(undefined4 *param_1)

{
  CListNode *pCVar1;
  void *pvVar2;
  int iVar3;
  CListNode *pCVar4;
  
  if (param_1[4] != 0) {
    iVar3 = 0;
    if (0 < (int)param_1[4]) {
      do {
        CBrushSector::Clear(*(CBrushSector **)(param_1[3] + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[4]);
    }
    FreeMemory((void *)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  pCVar4 = (CListNode *)*param_1;
  while (pCVar1 = *(CListNode **)pCVar4, pCVar1 != (CListNode *)0x0) {
    pvVar2 = *(void **)(pCVar4 + 8);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0xc0,*(int *)((int)pvVar2 + -4),CBrushSector::~CBrushSector);
      operator_delete__((void *)((int)pvVar2 + -4));
    }
    FUN_36021530(pCVar4);
    operator_delete(pCVar4);
    pCVar4 = pCVar1;
  }
  return;
}

