
void __thiscall FUN_360b3f40(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_360b2c30(param_1);
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 0x10);
  iVar3 = FUN_360b3cc0(this,(int)param_1);
  *(undefined4 *)(iVar1 + iVar3 * 4) = *(undefined4 *)(iVar1 + -4 + iVar2 * 4);
  FUN_360b3c70(this,1);
  return;
}

