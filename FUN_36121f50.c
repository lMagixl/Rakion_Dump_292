
int __thiscall FUN_36121f50(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  FUN_3611fcb0(this,param_1);
  iVar1 = FUN_36120db0(this,param_1);
  if (0 < param_1) {
    iVar2 = iVar2 * 4;
    iVar3 = iVar1;
    do {
      *(int *)(iVar2 + *(int *)((int)this + 0xc)) = iVar3;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0xc;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return iVar1;
}

