
void __thiscall FUN_3615a4a0(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(int *)this == 0) {
    if (param_1 != 0) {
      *(int *)this = param_1;
      uVar1 = thunk_FUN_361bf99c((param_1 + 1) * 0x1c);
      *(undefined4 *)((int)this + 4) = uVar1;
      return;
    }
  }
  else {
    iVar2 = thunk_FUN_361bf99c((param_1 + 1) * 0x1c);
    iVar5 = 0;
    if (0 < *(int *)this) {
      iVar3 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
        puVar7 = (undefined4 *)(iVar3 + iVar2);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x1c;
      } while (iVar5 < *(int *)this);
    }
    operator_delete__(*(void **)((int)this + 4));
    *(int *)((int)this + 4) = iVar2;
    *(int *)this = param_1;
  }
  return;
}

