
void __thiscall FUN_360d6880(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214eab;
  local_c = ExceptionList;
  if (*(int *)this != 0) {
    ExceptionList = &local_c;
    iVar2 = thunk_FUN_361bf99c((param_1 + 1) * 0xc);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_36006680(iVar2,0xc,param_1 + 1,CBrushEdge::CBrushEdge);
    }
    iVar4 = 0;
    if (0 < *(int *)this) {
      iVar3 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
        puVar1 = (undefined4 *)(iVar3 + iVar2);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar4 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)this = param_1;
    *(int *)((int)this + 4) = iVar2;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_360d6800(this,param_1);
  ExceptionList = local_c;
  return;
}

