
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361c7ee6(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = _DAT_36227cf0;
  *param_1 = (*param_2 - _DAT_36227cf0) * param_3 + _DAT_36227cf0;
  param_1[1] = (param_2[1] - fVar1) * param_3 + fVar1;
  param_1[2] = (param_2[2] - fVar1) * param_3 + fVar1;
  param_1[3] = param_2[3];
  return;
}

