
void __thiscall FUN_360623a0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    if (param_1 != 0) {
      *(int *)this = param_1;
      uVar1 = thunk_FUN_361bf99c(param_1 * 2 + 2);
      *(undefined4 *)((int)this + 4) = uVar1;
      return;
    }
  }
  else {
    iVar2 = thunk_FUN_361bf99c(param_1 * 2 + 2);
    iVar3 = 0;
    if (0 < *(int *)this) {
      do {
        *(undefined2 *)(iVar2 + iVar3 * 2) = *(undefined2 *)(*(int *)((int)this + 4) + iVar3 * 2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)((int)this + 4) = iVar2;
    *(int *)this = param_1;
  }
  return;
}

