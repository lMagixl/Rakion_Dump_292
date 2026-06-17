
void __thiscall FUN_36056020(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_3604b1f0((undefined4 *)(param_1 + 0x4c));
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x10);
  iVar3 = FUN_36054870(this,param_1);
  *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  FUN_36054820(this,1);
  return;
}

