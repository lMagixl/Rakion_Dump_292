
int * __thiscall FUN_3620b360(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 == 1) {
    piVar3 = (int *)param_1[3];
    piVar2 = (int *)param_1[4];
    if ((*piVar3 == 0) && (piVar3[1] < 4)) {
      iVar4 = 0;
      if (0 < piVar3[1]) {
        do {
          piVar1 = *(int **)(piVar3[4] + iVar4 * 4);
          piVar2 = FUN_3620ad20(this,piVar2,*piVar1,piVar1[1],(int *)piVar1[2]);
          iVar4 = iVar4 + 1;
        } while (iVar4 < piVar3[1]);
      }
      param_1[4] = 0;
      FUN_3620b440(this,param_1);
      return piVar2;
    }
    if ((*piVar2 == 0) && (piVar2[1] < 4)) {
      iVar4 = 0;
      if (0 < piVar2[1]) {
        do {
          piVar1 = *(int **)(piVar2[4] + iVar4 * 4);
          piVar3 = FUN_3620ad20(this,piVar3,*piVar1,piVar1[1],(int *)piVar1[2]);
          iVar4 = iVar4 + 1;
        } while (iVar4 < piVar2[1]);
      }
      param_1[3] = 0;
      FUN_3620b440(this,param_1);
      return piVar3;
    }
    piVar3 = FUN_3620b360(this,piVar3);
    param_1[3] = (int)piVar3;
    piVar3 = FUN_3620b360(this,piVar2);
    param_1[4] = (int)piVar3;
  }
  return param_1;
}

