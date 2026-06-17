
void __thiscall FUN_3615adc0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)this != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = FUN_3615a400(param_1);
  if (iVar1 != 0) {
    *(int *)this = iVar1;
    uVar2 = thunk_FUN_361bf99c((iVar1 * 3 + 3) * 2);
    *(undefined4 *)((int)this + 4) = uVar2;
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        puVar5 = (undefined4 *)(param_1[1] + iVar3);
        puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
        *puVar4 = *puVar5;
        iVar3 = iVar3 + 6;
        iVar1 = iVar1 + -1;
        *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(puVar5 + 1);
      } while (iVar1 != 0);
    }
  }
  return;
}

