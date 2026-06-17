
void __thiscall FUN_360d28e0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_360d34d0((undefined4 *)((int)this + 0x24));
  iVar2 = *(int *)((int)this + 0x28);
  *(undefined4 *)(iVar2 + iVar3 * 8) = param_2;
  iVar1 = *(int *)((int)this + 0xc) + param_1 * 0xc;
  *(undefined4 *)(iVar2 + iVar3 * 8 + 4) = *(undefined4 *)(iVar1 + 8);
  *(int *)(iVar1 + 8) = iVar3;
  return;
}

