
int FUN_3620c9f0(int param_1,size_t param_2,void *param_3)

{
  int iVar1;
  int *piVar2;
  
  DAT_363884a4 = param_1;
  qsort(param_3,param_2,8,(_PtFuncCompare *)&LAB_3620c9c0);
  iVar1 = (int)param_2 / 2 + 1;
  if (0 < iVar1) {
    piVar2 = (int *)((int)param_3 + iVar1 * 8 + 4);
    do {
      if (*(char *)(*piVar2 + param_1) != *(char *)(piVar2[-2] + param_1)) break;
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -2;
    } while (0 < iVar1);
  }
  return iVar1 + -1;
}

