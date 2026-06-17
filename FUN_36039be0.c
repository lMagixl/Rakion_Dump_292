
int * __thiscall FUN_36039be0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  CListNode *pCVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621057b;
  local_c = ExceptionList;
  iVar4 = param_1 + 1;
  ExceptionList = &local_c;
  piVar1 = (int *)thunk_FUN_361bf99c(iVar4 * 0x18 + 4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar1 + 1;
    *piVar1 = iVar4;
    _eh_vector_constructor_iterator_(piVar5,0x18,iVar4,FUN_36039ae0,FUN_36039af0);
  }
  local_4 = 0xffffffff;
  puVar2 = (undefined4 *)FUN_361bf99c(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    pCVar3 = (CListNode *)0x0;
  }
  else {
    pCVar3 = (CListNode *)FUN_36021680(puVar2);
  }
  CListHead::AddTail(this,pCVar3);
  *(int **)(pCVar3 + 8) = piVar5;
  ExceptionList = local_c;
  return piVar5;
}

