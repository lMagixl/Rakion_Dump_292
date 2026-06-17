
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361ca82f(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _DAT_36227cf0;
  if (param_3 == 2) {
    fVar2 = SQRT(param_2[2] * _DAT_36227cf0 + _DAT_36227cf0);
    param_1[2] = fVar2;
    fVar1 = fVar1 / fVar2;
    *param_1 = fVar1 * *param_2;
    param_1[1] = fVar1 * param_2[1];
    return;
  }
  if (param_3 == 3) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    if (param_4 != 0) goto LAB_361ca882;
  }
  else {
    if (param_3 != 4) {
      return;
    }
    if (param_4 != 0) {
      fVar1 = _DAT_36227cf0 / (_DAT_36227cf0 - param_2[2] * _DAT_36227cf0);
      *param_1 = fVar1 * *param_2;
      param_1[1] = fVar1 * param_2[1];
LAB_361ca882:
      param_1[2] = -param_2[2];
      return;
    }
    fVar1 = _DAT_36227cf0 / ((param_2[2] + _DAT_36223384) * _DAT_36227cf0);
    *param_1 = fVar1 * *param_2;
    param_1[1] = fVar1 * param_2[1];
  }
  param_1[2] = param_2[2];
  return;
}

