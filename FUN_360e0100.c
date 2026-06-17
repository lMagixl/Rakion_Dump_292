
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_360e0100(double *param_1,double *param_2,double *param_3,double *param_4,double param_5,
            double param_6)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  iVar1 = *(int *)(param_1 + 4);
  while( true ) {
    if (iVar1 == 1) {
      dVar2 = *param_2;
      if (param_5 < *param_2) {
        dVar2 = param_5;
      }
      *param_2 = dVar2;
      dVar2 = param_2[1];
      if (param_2[1] < param_6) {
        dVar2 = param_6;
      }
      param_2[1] = dVar2;
      return;
    }
    if (iVar1 == 2) break;
    dVar2 = (*param_3 * *param_1 + param_3[2] * param_1[2] + param_3[1] * param_1[1]) - param_1[3];
    dVar3 = (*param_4 * *param_1 + param_4[2] * param_1[2] + param_4[1] * param_1[1]) - param_1[3];
    if ((dVar2 < _DAT_36227d98) || (dVar3 < _DAT_36227d98)) {
      if ((_DAT_36227d98 <= dVar2) || (_DAT_36227d98 <= dVar3)) {
        dVar3 = dVar2 / (dVar2 - dVar3);
        local_38 = *param_3 + (*param_4 - *param_3) * dVar3;
        local_30 = param_3[1] + (param_4[1] - param_3[1]) * dVar3;
        local_28 = param_3[2] + (param_4[2] - param_3[2]) * dVar3;
        dVar3 = (param_6 - param_5) * dVar3 + param_5;
        local_20 = local_38;
        local_18 = local_30;
        local_10 = local_28;
        if (dVar2 < _DAT_36227d98) {
          FUN_360e0100(*(double **)(param_1 + 5),param_2,param_3,&local_38,param_5,dVar3);
          FUN_360e0100(*(double **)((int)param_1 + 0x24),param_2,&local_38,param_4,dVar3,param_6);
          return;
        }
        FUN_360e0100(*(double **)((int)param_1 + 0x24),param_2,param_3,&local_38,param_5,dVar3);
        FUN_360e0100(*(double **)(param_1 + 5),param_2,&local_38,param_4,dVar3,param_6);
        return;
      }
      param_1 = *(double **)(param_1 + 5);
    }
    else {
      param_1 = *(double **)((int)param_1 + 0x24);
    }
    iVar1 = *(int *)(param_1 + 4);
  }
  return;
}

