
int * __thiscall FUN_36097be0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    return (int *)0x0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  FUN_36097970(this,param_1);
  piVar1 = FUN_36097ad0(this,param_1);
  if (0 < param_1) {
    iVar2 = iVar2 * 4;
    piVar3 = piVar1;
    do {
      *(int **)(iVar2 + *(int *)((int)this + 0xc)) = piVar3;
      iVar2 = iVar2 + 4;
      piVar3 = piVar3 + 0x14;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return piVar1;
}

