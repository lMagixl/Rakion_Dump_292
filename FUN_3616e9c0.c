
void __thiscall FUN_3616e9c0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)this == 0) {
    if (param_1 != 0) {
      *(int *)this = param_1;
      uVar2 = thunk_FUN_361bf99c((param_1 * 3 + 3) * 4);
      *(undefined4 *)((int)this + 4) = uVar2;
      return;
    }
  }
  else {
    iVar3 = thunk_FUN_361bf99c((param_1 * 3 + 3) * 4);
    iVar5 = 0;
    if (0 < *(int *)this) {
      iVar4 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)((int)this + 4) + iVar4);
        puVar1 = (undefined4 *)(iVar4 + iVar3);
        *puVar1 = *puVar6;
        puVar1[1] = puVar6[1];
        puVar1[2] = puVar6[2];
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar5 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)((int)this + 4) = iVar3;
    *(int *)this = param_1;
  }
  return;
}

