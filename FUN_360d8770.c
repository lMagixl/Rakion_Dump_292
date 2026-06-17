
void __thiscall FUN_360d8770(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621509b;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  if (param_1 != 0) {
    iVar1 = param_1 + 1;
    ExceptionList = &local_c;
    *(int *)this = param_1;
    piVar2 = (int *)thunk_FUN_361bf99c(iVar1 * 8 + 4);
    local_4 = 0;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
      _eh_vector_constructor_iterator_
                (piVar3,8,iVar1,CTFileName::CTFileName,CTFileName::~CTFileName);
    }
    *(int **)((int)this + 4) = piVar3;
  }
  ExceptionList = local_c;
  return;
}

