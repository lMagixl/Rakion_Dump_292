
void __thiscall FUN_360e6060(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = FUN_360e5b60((int)this);
  iVar3 = FUN_360e5be0(this,param_1);
  *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}

