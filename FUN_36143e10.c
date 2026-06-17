
int __thiscall FUN_36143e10(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x10);
  FUN_36143aa0(this,param_1);
  iVar1 = FUN_36143c50(this,param_1);
  if (0 < param_1) {
    iVar3 = iVar3 * 4;
    iVar2 = iVar1;
    do {
      *(int *)(iVar3 + *(int *)((int)this + 0xc)) = iVar2;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return iVar1;
}

