
void __thiscall FUN_36010370(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)this != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = FUN_3600c450(param_1);
  if (iVar1 != 0) {
    *(int *)this = iVar1;
    uVar2 = thunk_FUN_361bf99c((iVar1 + 1) * 0x1c);
    *(undefined4 *)((int)this + 4) = uVar2;
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        puVar5 = (undefined4 *)(param_1[1] + iVar3);
        puVar6 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
        iVar3 = iVar3 + 0x1c;
        iVar1 = iVar1 + -1;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      } while (iVar1 != 0);
    }
  }
  return;
}

