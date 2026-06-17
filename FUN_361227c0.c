
void __thiscall FUN_361227c0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_3611f7a0((int)this);
  for (iVar1 = iVar1 - *(int *)((int)this + 0x14); iVar1 < param_1;
      iVar1 = iVar1 - *(int *)((int)this + 0x14)) {
    FUN_36121eb0(this,*(int *)((int)this + 0x18));
    iVar1 = FUN_3611f7a0((int)this);
  }
  iVar1 = *(int *)((int)this + 0x14) + param_1;
  *(int *)((int)this + 0x14) = iVar1;
  FUN_3611fc90(this,iVar1 - param_1);
  return;
}

