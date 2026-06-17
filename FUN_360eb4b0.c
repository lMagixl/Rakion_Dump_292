
void __thiscall FUN_360eb4b0(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36215dcb;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(int *)this = param_1;
    iVar1 = thunk_FUN_361bf99c((param_1 + 1) * 8);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_36006680(iVar1,8,param_1 + 1,&LAB_360ea730);
    }
    *(int *)((int)this + 4) = iVar1;
  }
  ExceptionList = local_c;
  return;
}

