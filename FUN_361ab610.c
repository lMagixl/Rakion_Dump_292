
void __fastcall FUN_361ab610(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2) <
      SQRT(param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2])) {
    param_3 = param_4;
  }
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  if (param_3 < fVar4) {
    fVar4 = param_3 / fVar4;
    *param_1 = fVar1 * fVar4 + *param_1;
    param_1[1] = fVar2 * fVar4 + param_1[1];
    param_1[2] = fVar3 * fVar4 + param_1[2];
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

