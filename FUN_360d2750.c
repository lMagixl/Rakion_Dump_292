
void __thiscall FUN_360d2750(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_360d3350((undefined4 *)((int)this + 8));
  puVar1 = (undefined4 *)(*(int *)((int)this + 0xc) + iVar2 * 0xc);
  *puVar1 = param_2;
  puVar1[2] = 0xffffffff;
  puVar1[1] = *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
  *(int *)(*(int *)((int)this + 4) + param_1 * 4) = iVar2;
  return;
}

