
int __thiscall FUN_36062630(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + param_1;
  *(int *)((int)this + 8) = iVar2;
  iVar1 = FUN_36061f90(this);
  if (iVar1 < iVar2) {
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = FUN_36061f90(this);
    FUN_360622b0(this,iVar2 + ((param_1 + -1) / iVar1 + 1) * iVar1);
  }
  return *(int *)((int)this + 4) + (*(int *)((int)this + 8) - param_1) * 4;
}

