
void * __thiscall FUN_36120d60(void *this,int param_1)

{
  void *pvVar1;
  CListNode *pCVar2;
  CListNode *pCVar3;
  
  pvVar1 = AllocMemoryAligned((param_1 + 1) * 0x20,0x20);
  pCVar2 = (CListNode *)FUN_361bf99c(0xc);
  pCVar3 = (CListNode *)0x0;
  if (pCVar2 != (CListNode *)0x0) {
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(pCVar2 + 4) = 0;
    pCVar3 = pCVar2;
  }
  CListHead::AddTail(this,pCVar3);
  *(void **)(pCVar3 + 8) = pvVar1;
  return pvVar1;
}

