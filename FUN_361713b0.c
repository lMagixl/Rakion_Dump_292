
void __thiscall FUN_361713b0(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a68b;
  local_c = ExceptionList;
  if (*(int *)this != 0) {
    iVar4 = param_1 + 1;
    ExceptionList = &local_c;
    piVar2 = (int *)thunk_FUN_361bf99c(iVar4 * 0x18 + 4);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = piVar2 + 1;
      *piVar2 = iVar4;
      _eh_vector_constructor_iterator_
                (local_18,0x18,iVar4,SkeletonLOD::SkeletonLOD,SkeletonLOD::~SkeletonLOD);
    }
    local_4 = 0xffffffff;
    local_14 = 0;
    if (0 < *(int *)this) {
      piVar2 = local_18 + 5;
      do {
        iVar4 = *(int *)((int)this + 4) + (-0x14 - (int)local_18);
        piVar2[-5] = *(int *)(iVar4 + (int)piVar2);
        FUN_360165e0(piVar2 + -4,(undefined4 *)((int)piVar2 + iVar4 + 4));
        FUN_36014140(piVar2 + -2,(undefined4 *)((int)piVar2 + iVar4 + 0xc));
        pcVar3 = StringDuplicate(*(char **)((int)piVar2 + iVar4 + 0x14));
        StringFree((char *)*piVar2);
        *piVar2 = (int)pcVar3;
        local_14 = local_14 + 1;
        piVar2 = piVar2 + 6;
      } while (local_14 < *(int *)this);
    }
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x18,*(int *)((int)pvVar1 + -4),SkeletonLOD::~SkeletonLOD);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(int **)((int)this + 4) = local_18;
    *(int *)this = param_1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_36014580(this,param_1);
  ExceptionList = local_c;
  return;
}

