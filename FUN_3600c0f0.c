
void __thiscall FUN_3600c0f0(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d8eb;
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
      FUN_36006680(iVar1,8,param_1 + 1,&LAB_3600b210);
    }
    *(int *)((int)this + 4) = iVar1;
  }
  ExceptionList = local_c;
  return;
}

