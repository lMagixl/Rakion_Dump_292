
void __thiscall FUN_36048070(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362115db;
  local_c = ExceptionList;
  iVar4 = 0;
  if (*(int *)this != 0) {
    iVar5 = param_1 + 1;
    ExceptionList = &local_c;
    piVar2 = (int *)thunk_FUN_361bf99c(iVar5 * 0x20 + 4);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = piVar2 + 1;
      *piVar2 = iVar5;
      _eh_vector_constructor_iterator_
                (local_18,0x20,iVar5,(_func_void_void_ptr *)&LAB_36047ac0,
                 (_func_void_void_ptr *)&LAB_36047ae0);
    }
    local_4 = 0xffffffff;
    if (0 < *(int *)this) {
      piVar2 = local_18 + 1;
      do {
        iVar5 = *(int *)((int)this + 4) + (-4 - (int)local_18);
        piVar2[-1] = *(int *)(iVar5 + (int)piVar2);
        pcVar3 = StringDuplicate(*(char **)((int)piVar2 + iVar5 + 4));
        StringFree((char *)*piVar2);
        *piVar2 = (int)pcVar3;
        piVar2[1] = *(int *)((int)piVar2 + iVar5 + 8);
        piVar2[2] = *(int *)((int)piVar2 + iVar5 + 0xc);
        piVar2[3] = *(int *)((int)piVar2 + iVar5 + 0x10);
        piVar2[4] = *(int *)((int)piVar2 + iVar5 + 0x14);
        piVar2[5] = *(int *)((int)piVar2 + iVar5 + 0x18);
        piVar2[6] = *(int *)((int)piVar2 + iVar5 + 0x1c);
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 8;
      } while (iVar4 < *(int *)this);
    }
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x20,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_36047ae0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(int **)((int)this + 4) = local_18;
    *(int *)this = param_1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_36047d60(this,param_1);
  ExceptionList = local_c;
  return;
}

