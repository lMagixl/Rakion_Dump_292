
void __thiscall FUN_36010070(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = FUN_3600bea0(param_1);
  if (iVar1 != 0) {
    *(int *)this = iVar1;
    uVar2 = thunk_FUN_361bf99c(iVar1 * 4 + 4);
    *(undefined4 *)((int)this + 4) = uVar2;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        *(undefined4 *)(*(int *)((int)this + 4) + iVar3 * 4) =
             *(undefined4 *)(param_1[1] + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return;
}

