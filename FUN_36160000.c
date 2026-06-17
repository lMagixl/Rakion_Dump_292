
void __thiscall FUN_36160000(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a44b;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  if (param_1 != 0) {
    iVar1 = param_1 + 1;
    ExceptionList = &local_c;
    *(int *)this = param_1;
    piVar2 = (int *)thunk_FUN_361bf99c(iVar1 * 0xc + 4);
    local_4 = 0;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
      _eh_vector_constructor_iterator_
                (piVar3,0xc,iVar1,(_func_void_void_ptr *)&LAB_3615c300,
                 (_func_void_void_ptr *)&LAB_3615fe40);
    }
    *(int **)((int)this + 4) = piVar3;
  }
  ExceptionList = local_c;
  return;
}

