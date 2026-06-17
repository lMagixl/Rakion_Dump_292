
void __thiscall FUN_3615ab50(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)this == 0) {
    if (param_1 != 0) {
      *(int *)this = param_1;
      uVar2 = thunk_FUN_361bf99c(param_1 * 8 + 8);
      *(undefined4 *)((int)this + 4) = uVar2;
      return;
    }
  }
  else {
    iVar3 = thunk_FUN_361bf99c(param_1 * 8 + 8);
    iVar4 = 0;
    if (0 < *(int *)this) {
      do {
        iVar1 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar3 + iVar4 * 8) = *(undefined4 *)(iVar1 + iVar4 * 8);
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = *(undefined4 *)(iVar1 + 4 + iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)((int)this + 4) = iVar3;
    *(int *)this = param_1;
  }
  return;
}

