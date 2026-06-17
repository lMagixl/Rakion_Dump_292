
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_36141f70(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (*param_1 * *param_3 + param_3[2] * param_1[2] + param_1[1] * param_3[1]) - param_3[3];
  dVar2 = (param_2[2] * param_3[2] + param_2[1] * param_3[1] + *param_2 * *param_3) - param_3[3];
  if (dVar1 < _DAT_36238b90) {
    if ((_DAT_36238b90 <= dVar2) && (_DAT_362280b0 < dVar2)) {
      dVar3 = param_1[1];
      dVar4 = param_1[2];
      dVar2 = _DAT_36227d28 / (dVar1 - dVar2);
      dVar5 = param_1[1];
      dVar6 = param_1[2];
      *param_2 = *param_1 - (*param_1 - *param_2) * dVar1 * dVar2;
      param_2[1] = dVar5 - (dVar3 - param_2[1]) * dVar1 * dVar2;
      param_2[2] = dVar6 - (dVar4 - param_2[2]) * dVar1 * dVar2;
      return 1;
    }
    return 1;
  }
  if (dVar1 <= _DAT_362280b0) {
    if (dVar2 < _DAT_36238b90) {
      return 1;
    }
    if (dVar2 <= _DAT_362280b0) {
      return 1;
    }
  }
  else if (dVar2 < _DAT_36238b90) {
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    dVar1 = _DAT_36227d28 / (dVar2 - dVar1);
    dVar5 = param_2[1];
    dVar6 = param_2[2];
    *param_1 = *param_2 - (*param_2 - *param_1) * dVar2 * dVar1;
    param_1[1] = dVar5 - (dVar3 - param_1[1]) * dVar2 * dVar1;
    param_1[2] = dVar6 - (dVar4 - param_1[2]) * dVar2 * dVar1;
    return 1;
  }
  return 0;
}

