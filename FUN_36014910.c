
void __thiscall FUN_36014910(void *this,undefined4 *param_1)

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
  iVar1 = FUN_3600cc40(param_1);
  if ((iVar1 != 0) && (FUN_36010cd0(this,iVar1), 0 < iVar1)) {
    iVar2 = 0;
    do {
      puVar3 = (undefined4 *)(param_1[1] + iVar2);
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar2);
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      iVar2 = iVar2 + 0x14;
      iVar1 = iVar1 + -1;
      puVar4[4] = puVar3[4];
    } while (iVar1 != 0);
  }
  return;
}

