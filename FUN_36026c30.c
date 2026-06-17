
void __thiscall FUN_36026c30(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_360216b0((int)this);
  for (iVar1 = iVar1 - *(int *)((int)this + 0x14); iVar1 < param_1;
      iVar1 = iVar1 - *(int *)((int)this + 0x14)) {
    FUN_36021930(this,*(int *)((int)this + 0x18));
    iVar1 = FUN_360216b0((int)this);
  }
  iVar1 = *(int *)((int)this + 0x14) + param_1;
  *(int *)((int)this + 0x14) = iVar1;
  FUN_360217c0(this,iVar1 - param_1);
  return;
}

