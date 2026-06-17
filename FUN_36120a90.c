
void __thiscall FUN_36120a90(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362184fb;
  local_c = ExceptionList;
  if (*(int *)this != 0) {
    ExceptionList = &local_c;
    iVar1 = thunk_FUN_361bf99c((param_1 + 1) * 0x1c);
    local_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_36006680(iVar1,0x1c,param_1 + 1,&LAB_3611fb40);
    }
    iVar4 = 0;
    if (0 < *(int *)this) {
      iVar2 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)((int)this + 4) + iVar2);
        puVar6 = (undefined4 *)(iVar2 + iVar1);
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x1c;
      } while (iVar4 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)((int)this + 4) = iVar1;
    *(int *)this = param_1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_3611fef0(this,param_1);
  ExceptionList = local_c;
  return;
}

