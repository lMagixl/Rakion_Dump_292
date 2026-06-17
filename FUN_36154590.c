
void __thiscall FUN_36154590(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219bbb;
  local_c = ExceptionList;
  iVar5 = 0;
  if (*(int *)this == 0) {
    ExceptionList = &local_c;
    FUN_36014780(this,param_1);
    ExceptionList = local_c;
    return;
  }
  iVar6 = param_1 + 1;
  ExceptionList = &local_c;
  piVar3 = (int *)thunk_FUN_361bf99c(iVar6 * 0xc + 4);
  local_4 = 0;
  if (piVar3 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = piVar3 + 1;
    *piVar3 = iVar6;
    _eh_vector_constructor_iterator_
              (piVar4,0xc,iVar6,(_func_void_void_ptr *)&LAB_36010b00,FUN_36010a40);
  }
  local_4 = 0xffffffff;
  if (0 < *(int *)this) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)((int)this + 4);
      *(undefined4 *)(iVar6 + (int)piVar4) = *(undefined4 *)(iVar1 + iVar6);
      FUN_36010b30((void *)(iVar6 + 4 + (int)piVar4),(undefined4 *)(iVar1 + iVar6 + 4));
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < *(int *)this);
  }
  pvVar2 = *(void **)((int)this + 4);
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,0xc,*(int *)((int)pvVar2 + -4),FUN_36010a40);
    operator_delete__((void *)((int)pvVar2 + -4));
  }
  *(int **)((int)this + 4) = piVar4;
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}

