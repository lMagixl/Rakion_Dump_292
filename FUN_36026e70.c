
void __thiscall FUN_36026e70(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f37b;
  local_c = ExceptionList;
  iVar6 = 0;
  if (*(int *)this != 0) {
    iVar5 = param_1 + 1;
    ExceptionList = &local_c;
    piVar2 = (int *)thunk_FUN_361bf99c(iVar5 * 4 + 4);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar2 + 1;
      *piVar2 = iVar5;
      _eh_vector_constructor_iterator_(piVar4,4,iVar5,CTString::CTString,CTString::~CTString);
    }
    local_4 = 0xffffffff;
    if (0 < *(int *)this) {
      do {
        pcVar3 = StringDuplicate(*(char **)(*(int *)((int)this + 4) + iVar6 * 4));
        StringFree((char *)piVar4[iVar6]);
        piVar4[iVar6] = (int)pcVar3;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)this);
    }
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),CTString::~CTString);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(int **)((int)this + 4) = piVar4;
    *(int *)this = param_1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_36026b70(this,param_1);
  ExceptionList = local_c;
  return;
}

