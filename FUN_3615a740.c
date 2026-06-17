
void __thiscall FUN_3615a740(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(int *)this == 0) {
    if (param_1 != 0) {
      *(int *)this = param_1;
      uVar1 = thunk_FUN_361bf99c((param_1 * 3 + 3) * 2);
      *(undefined4 *)((int)this + 4) = uVar1;
      return;
    }
  }
  else {
    iVar2 = thunk_FUN_361bf99c((param_1 * 3 + 3) * 2);
    iVar4 = 0;
    if (0 < *(int *)this) {
      iVar3 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
        *(undefined4 *)(iVar3 + iVar2) = *puVar5;
        *(undefined2 *)((undefined4 *)(iVar3 + iVar2) + 1) = *(undefined2 *)(puVar5 + 1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 6;
      } while (iVar4 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)((int)this + 4) = iVar2;
    *(int *)this = param_1;
  }
  return;
}

