
int __thiscall FUN_36091ac0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + param_1;
  *(int *)((int)this + 8) = iVar2;
  iVar1 = FUN_360918e0(this);
  if (iVar1 < iVar2) {
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = FUN_360918e0(this);
    FUN_36091a00(this,iVar2 + ((param_1 + -1) / iVar1 + 1) * iVar1);
  }
  return (*(int *)((int)this + 4) - param_1) + *(int *)((int)this + 8);
}

