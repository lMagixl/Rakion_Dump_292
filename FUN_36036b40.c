
void __thiscall FUN_36036b40(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621007b;
  local_c = ExceptionList;
  if (*(int *)this == 0) {
    ExceptionList = &local_c;
    FUN_36036a10(this,param_1);
    ExceptionList = local_c;
    return;
  }
  iVar4 = param_1 + 1;
  ExceptionList = &local_c;
  piVar2 = (int *)thunk_FUN_361bf99c(iVar4 * 0x18 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    local_10 = (int *)0x0;
  }
  else {
    local_10 = piVar2 + 1;
    *piVar2 = iVar4;
    _eh_vector_constructor_iterator_
              (local_10,0x18,iVar4,(_func_void_void_ptr *)&LAB_360369c0,FUN_360369e0);
  }
  iVar4 = 0;
  local_4 = 0xffffffff;
  if (0 < *(int *)this) {
    piVar2 = local_10 + 2;
    do {
      iVar3 = *(int *)((int)this + 4) + (-8 - (int)local_10);
      piVar2[-2] = *(int *)(iVar3 + (int)piVar2);
      piVar2[-1] = *(int *)((int)piVar2 + iVar3 + 4);
      FUN_36036a90(piVar2,(undefined4 *)((int)piVar2 + iVar3 + 8));
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar4 < *(int *)this);
  }
  pvVar1 = *(void **)((int)this + 4);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_360369e0);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  *(int *)this = param_1;
  *(int **)((int)this + 4) = local_10;
  ExceptionList = local_c;
  return;
}

