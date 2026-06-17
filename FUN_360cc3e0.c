
int * __thiscall FUN_360cc3e0(void *this,int param_1)

{
  int *piVar1;
  CListNode *pCVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621494b;
  local_c = ExceptionList;
  iVar3 = param_1 + 1;
  ExceptionList = &local_c;
  piVar1 = (int *)thunk_FUN_361bf99c(iVar3 * 0x680 + 4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar1 + 1;
    *piVar1 = iVar3;
    _eh_vector_constructor_iterator_(piVar4,0x680,iVar3,CBrush3D::CBrush3D,CBrush3D::~CBrush3D);
  }
  local_4 = 0xffffffff;
  pCVar2 = (CListNode *)FUN_361bf99c(0xc);
  if (pCVar2 == (CListNode *)0x0) {
    pCVar2 = (CListNode *)0x0;
  }
  else {
    *(undefined4 *)pCVar2 = 0;
    *(undefined4 *)(pCVar2 + 4) = 0;
  }
  CListHead::AddTail(this,pCVar2);
  *(int **)(pCVar2 + 8) = piVar4;
  ExceptionList = local_c;
  return piVar4;
}

