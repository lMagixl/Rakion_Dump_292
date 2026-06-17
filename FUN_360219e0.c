
int * __thiscall FUN_360219e0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return (int *)0x0;
  }
  iVar3 = *(int *)((int)this + 0x10);
  FUN_360215b0(this,param_1);
  piVar1 = FUN_36021850(this,param_1);
  if (0 < param_1) {
    iVar3 = iVar3 * 4;
    piVar2 = piVar1;
    do {
      *(int **)(iVar3 + *(int *)((int)this + 0xc)) = piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 4;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return piVar1;
}

