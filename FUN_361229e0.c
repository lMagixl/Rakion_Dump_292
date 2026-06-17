
int __thiscall FUN_361229e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + param_1;
  *(int *)((int)this + 8) = iVar2;
  iVar1 = FUN_3611fa00(this);
  if (iVar1 < iVar2) {
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = FUN_3611fa00(this);
    FUN_361221a0(this,iVar2 + ((param_1 + -1) / iVar1 + 1) * iVar1);
  }
  return (*(int *)((int)this + 8) - param_1) * 0x10 + *(int *)((int)this + 4);
}

