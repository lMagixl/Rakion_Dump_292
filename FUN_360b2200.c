
void __thiscall FUN_360b2200(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213c3b;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(int *)this = param_1;
    iVar1 = thunk_FUN_361bf99c((param_1 + 1) * 0x18);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_36006680(iVar1,0x18,param_1 + 1,ModelFrameInfo::ModelFrameInfo);
    }
    *(int *)((int)this + 4) = iVar1;
  }
  ExceptionList = local_c;
  return;
}

