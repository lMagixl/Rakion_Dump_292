
void __thiscall FUN_36160c90(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a4eb;
  local_c = ExceptionList;
  if (*(int *)this == 0) {
    ExceptionList = &local_c;
    FUN_36160080(this,param_1);
    ExceptionList = local_c;
    return;
  }
  iVar5 = param_1 + 1;
  ExceptionList = &local_c;
  piVar2 = (int *)thunk_FUN_361bf99c(iVar5 * 0xc + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar2 + 1;
    *piVar2 = iVar5;
    _eh_vector_constructor_iterator_
              (piVar4,0xc,iVar5,(_func_void_void_ptr *)&LAB_3615c330,
               (_func_void_void_ptr *)&LAB_3615fe90);
  }
  local_4 = 0xffffffff;
  local_14 = 0;
  if (0 < *(int *)this) {
    iVar5 = 0;
    do {
      iVar6 = *(int *)((int)this + 4) + iVar5;
      pcVar3 = StringDuplicate(*(char **)(*(int *)((int)this + 4) + iVar5));
      StringFree(*(char **)(iVar5 + (int)piVar4));
      *(char **)(iVar5 + (int)piVar4) = pcVar3;
      *(undefined4 *)(iVar5 + 4 + (int)piVar4) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(iVar5 + 8 + (int)piVar4) = *(undefined4 *)(iVar6 + 8);
      local_14 = local_14 + 1;
      iVar5 = iVar5 + 0xc;
    } while (local_14 < *(int *)this);
  }
  pvVar1 = *(void **)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3615fe90);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  *(int **)((int)this + 4) = piVar4;
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}

