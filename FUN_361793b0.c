
void __thiscall FUN_361793b0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a8fb;
  local_c = ExceptionList;
  if ((param_2 & 1) == 0) {
    ExceptionList = &local_c;
    iVar1 = thunk_FUN_361bf99c(param_1 * 8);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_36006680(iVar1,8,param_1,&LAB_36175460);
    }
    *(int *)((int)this + 0x10) = iVar1;
  }
  *(uint *)((int)this + 4) = param_1;
  *(uint *)((int)this + 8) = param_1;
  *(uint *)this = param_2;
  ExceptionList = local_c;
  return;
}

