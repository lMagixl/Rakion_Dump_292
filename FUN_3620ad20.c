
int * __thiscall FUN_3620ad20(void *this,int *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1 == (int *)0x0) {
    piVar1 = FUN_3620ae80(this,0);
    piVar1[1] = 1;
    puVar2 = FUN_3620af00(this,param_2,param_3,param_4);
    *(undefined4 **)piVar1[4] = puVar2;
    piVar3 = param_4;
    piVar6 = (int *)piVar1[2];
    for (uVar4 = *(uint *)this & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar6 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar6 = piVar6 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)piVar6 = (char)*piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
      piVar6 = (int *)((int)piVar6 + 1);
    }
    piVar3 = (int *)piVar1[3];
    for (uVar4 = *(uint *)this & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar3 = *param_4;
      param_4 = param_4 + 1;
      piVar3 = piVar3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(char *)piVar3 = (char)*param_4;
      param_4 = (int *)((int)param_4 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
    }
    return piVar1;
  }
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return (int *)0x0;
    }
    if (param_1[2] < param_4[param_1[1]]) {
      piVar3 = FUN_3620ad20(this,(int *)param_1[4],param_2,param_3,param_4);
      param_1[4] = (int)piVar3;
      return param_1;
    }
    piVar3 = FUN_3620ad20(this,(int *)param_1[3],param_2,param_3,param_4);
    param_1[3] = (int)piVar3;
    return param_1;
  }
  iVar5 = FUN_3620af60(this,(int)param_1,param_4);
  if (-1 < iVar5) {
    piVar3 = *(int **)(param_1[4] + iVar5 * 4);
    *piVar3 = *piVar3 + param_2;
    iVar5 = *(int *)(param_1[4] + iVar5 * 4);
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + param_3;
    return param_1;
  }
  if (param_1[1] < 8) {
    FUN_3620b160(this,(int)param_1,param_2,param_3,param_4);
    return param_1;
  }
  piVar3 = FUN_3620afc0(this,param_1);
  piVar3 = FUN_3620ad20(this,piVar3,param_2,param_3,param_4);
  return piVar3;
}

