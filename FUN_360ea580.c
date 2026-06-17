
void __thiscall FUN_360ea580(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = FUN_3608a5b0((int)this);
  iVar3 = FUN_360ea2f0(this,param_1);
  *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}

