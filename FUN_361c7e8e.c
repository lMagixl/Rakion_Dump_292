
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361c7e8e(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_2[1] * _DAT_36249370 + param_2[2] * _DAT_36249374 + *param_2 * _DAT_3624936c;
  *param_1 = (*param_2 - fVar1) * param_3 + fVar1;
  param_1[1] = (param_2[1] - fVar1) * param_3 + fVar1;
  param_1[2] = (param_2[2] - fVar1) * param_3 + fVar1;
  param_1[3] = param_2[3];
  return;
}

