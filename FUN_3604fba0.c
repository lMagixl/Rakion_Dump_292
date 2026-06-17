
void __thiscall FUN_3604fba0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this == 0) {
    if (param_1 != 0) {
      *(int *)this = param_1;
      uVar1 = thunk_FUN_361bf99c(param_1 * 4 + 4);
      *(undefined4 *)((int)this + 4) = uVar1;
      return;
    }
  }
  else {
    iVar2 = thunk_FUN_361bf99c(param_1 * 4 + 4);
    iVar3 = 0;
    if (0 < *(int *)this) {
      do {
        *(undefined4 *)(iVar2 + iVar3 * 4) = *(undefined4 *)(*(int *)((int)this + 4) + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)((int)this + 4) = iVar2;
    *(int *)this = param_1;
  }
  return;
}

