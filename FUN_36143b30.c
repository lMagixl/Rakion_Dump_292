
void __thiscall FUN_36143b30(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x10);
  iVar3 = FUN_36143a60(this,param_1);
  *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  FUN_36143a10(this,1);
  return;
}

