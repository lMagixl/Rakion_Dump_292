
int __thiscall FUN_3620b630(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)this;
  iVar4 = 0;
  if (0 < iVar5) {
    piVar2 = (int *)param_2[2];
    iVar3 = param_1[2] - (int)piVar2;
    do {
      iVar1 = *(int *)(iVar3 + (int)piVar2) - *piVar2;
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + iVar1 * iVar1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (*param_2 * *param_1 * iVar4) / (*param_1 + *param_2);
}

