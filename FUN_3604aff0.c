
int __thiscall FUN_3604aff0(void *this,int param_1)

{
  int iVar1;
  CListNode *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = thunk_FUN_361bf99c(param_1 * 8 + 8);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (-1 < param_1) {
    puVar3 = (undefined4 *)(iVar1 + 4);
    iVar4 = param_1 + 1;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  pCVar2 = (CListNode *)FUN_361bf99c(0xc);
  if (pCVar2 == (CListNode *)0x0) {
    CListHead::AddTail(this,(CListNode *)0x0);
    iRam00000008 = iVar1;
    return iVar1;
  }
  *(undefined4 *)pCVar2 = 0;
  *(undefined4 *)(pCVar2 + 4) = 0;
  CListHead::AddTail(this,pCVar2);
  *(int *)(pCVar2 + 8) = iVar1;
  return iVar1;
}

