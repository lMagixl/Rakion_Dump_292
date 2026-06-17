
void __thiscall FUN_360d8450(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x1c);
  uVar1 = (**(code **)((int)this + 0x14))(piVar3);
  iVar2 = FUN_360d7d70(this,uVar1,piVar3);
  if (iVar2 == -1) {
    this_00 = (void *)FUN_361bf99c(8);
    if (this_00 != (void *)0x0) {
      uVar1 = FUN_360d7ce0(this_00,param_1);
      FUN_360d8390(this,uVar1);
      return;
    }
    FUN_360d8390(this,0);
  }
  return;
}

