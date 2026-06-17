
void __cdecl FUN_36058df0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = *param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2];
  fVar3 = fVar3 + fVar3;
  *param_2 = *param_2 - *param_1 * fVar3;
  param_2[1] = param_2[1] - fVar1 * fVar3;
  param_2[2] = param_2[2] - fVar2 * fVar3;
  return;
}

