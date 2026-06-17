
void __thiscall FUN_360622b0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211d4b;
  local_c = ExceptionList;
  if (*(int *)this != 0) {
    ExceptionList = &local_c;
    iVar1 = thunk_FUN_361bf99c((param_1 + 1) * 4);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_36006680(iVar1,4,param_1 + 1,&LAB_360605b0);
    }
    iVar2 = 0;
    local_4 = 0xffffffff;
    if (0 < *(int *)this) {
      do {
        *(undefined4 *)(iVar1 + iVar2 * 4) = *(undefined4 *)(*(int *)((int)this + 4) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)((int)this + 4) = iVar1;
    *(int *)this = param_1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_36062030(this,param_1);
  ExceptionList = local_c;
  return;
}

