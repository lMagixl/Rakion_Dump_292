
void __thiscall FUN_360485c0(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621163b;
  local_c = ExceptionList;
  if (*(int *)this != 0) {
    iVar5 = param_1 + 1;
    ExceptionList = &local_c;
    piVar2 = (int *)thunk_FUN_361bf99c(iVar5 * 100 + 4);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = piVar2 + 1;
      *piVar2 = iVar5;
      _eh_vector_constructor_iterator_
                (local_18,100,iVar5,(_func_void_void_ptr *)&LAB_360464b0,
                 (_func_void_void_ptr *)&LAB_36047d10);
    }
    local_4 = 0xffffffff;
    local_14 = 0;
    if (0 < *(int *)this) {
      piVar2 = local_18 + 2;
      do {
        iVar4 = *(int *)((int)this + 4) + (-8 - (int)local_18);
        piVar2[-2] = *(int *)(iVar4 + (int)piVar2);
        piVar2[-1] = *(int *)((int)piVar2 + iVar4 + 4);
        pcVar3 = StringDuplicate(*(char **)((int)piVar2 + iVar4 + 8));
        StringFree((char *)*piVar2);
        *piVar2 = (int)pcVar3;
        piVar2[1] = *(int *)((int)piVar2 + iVar4 + 0xc);
        piVar2[2] = *(int *)((int)piVar2 + iVar4 + 0x10);
        piVar2[3] = *(int *)((int)piVar2 + iVar4 + 0x14);
        piVar2[4] = *(int *)((int)piVar2 + iVar4 + 0x18);
        piVar2[5] = *(int *)((int)piVar2 + iVar4 + 0x1c);
        piVar2[6] = *(int *)((int)piVar2 + iVar4 + 0x20);
        piVar6 = (int *)((int)piVar2 + iVar4 + 0x24);
        piVar7 = piVar2 + 7;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        piVar2[0x15] = *(int *)((int)piVar2 + iVar4 + 0x5c);
        piVar2[0x16] = *(int *)((int)piVar2 + iVar4 + 0x60);
        local_14 = local_14 + 1;
        piVar2 = piVar2 + 0x19;
      } while (local_14 < *(int *)this);
    }
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,100,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_36047d10);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(int **)((int)this + 4) = local_18;
    *(int *)this = param_1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_36048230(this,param_1);
  ExceptionList = local_c;
  return;
}

