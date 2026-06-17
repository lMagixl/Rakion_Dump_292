
void __thiscall FUN_36010300(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)this != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar3 = FUN_3600c3d0(param_1);
  if (iVar3 != 0) {
    *(int *)this = iVar3;
    uVar4 = thunk_FUN_361bf99c(iVar3 * 8 + 8);
    *(undefined4 *)((int)this + 4) = uVar4;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = param_1[1];
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + iVar5 * 8) = *(undefined4 *)(iVar1 + iVar5 * 8);
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = *(undefined4 *)(iVar1 + 4 + iVar5 * 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  return;
}

