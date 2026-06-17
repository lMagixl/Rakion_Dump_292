
void __thiscall FUN_36013f70(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)this != 0) {
    operator_delete__(*(void **)((int)this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar1 = FUN_3600c040(param_1);
  if ((iVar1 != 0) && (FUN_3600bfc0(this,iVar1), 0 < iVar1)) {
    iVar2 = 0;
    do {
      puVar4 = (undefined4 *)(param_1[1] + iVar2);
      puVar5 = (undefined4 *)(*(int *)((int)this + 4) + iVar2);
      iVar2 = iVar2 + 0x34;
      iVar1 = iVar1 + -1;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    } while (iVar1 != 0);
  }
  return;
}

