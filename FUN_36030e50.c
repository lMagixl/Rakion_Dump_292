
void __thiscall FUN_36030e50(void *this,int param_1)

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
  puStack_8 = &LAB_3620f95b;
  local_c = ExceptionList;
  iVar5 = 0;
  if (*(int *)this == 0) {
    ExceptionList = &local_c;
    FUN_36030d50(this,param_1);
    ExceptionList = local_c;
    return;
  }
  iVar6 = param_1 + 1;
  ExceptionList = &local_c;
  piVar2 = (int *)thunk_FUN_361bf99c(iVar6 * 8 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar2 + 1;
    *piVar2 = iVar6;
    _eh_vector_constructor_iterator_
              (piVar4,8,iVar6,(_func_void_void_ptr *)&LAB_36030c20,
               (_func_void_void_ptr *)&LAB_3600bb40);
  }
  local_4 = 0xffffffff;
  if (0 < *(int *)this) {
    do {
      iVar6 = *(int *)((int)this + 4);
      pcVar3 = StringDuplicate(*(char **)(iVar6 + iVar5 * 8));
      StringFree((char *)piVar4[iVar5 * 2]);
      piVar4[iVar5 * 2] = (int)pcVar3;
      piVar4[iVar5 * 2 + 1] = *(int *)(iVar6 + iVar5 * 8 + 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)this);
  }
  pvVar1 = *(void **)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,8,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3600bb40);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  *(int **)((int)this + 4) = piVar4;
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}

