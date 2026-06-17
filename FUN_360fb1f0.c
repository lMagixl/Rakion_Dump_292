
void __thiscall FUN_360fb1f0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)this != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = FUN_3604f2b0(param_1);
  if ((iVar1 != 0) && (FUN_3604f220(this,iVar1), 0 < iVar1)) {
    iVar2 = 0;
    do {
      puVar3 = (undefined4 *)(param_1[1] + iVar2);
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar2);
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      iVar2 = iVar2 + 0xc;
      iVar1 = iVar1 + -1;
      puVar4[2] = puVar3[2];
    } while (iVar1 != 0);
  }
  return;
}

