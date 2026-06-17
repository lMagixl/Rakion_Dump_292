
void __cdecl FUN_3618d0f0(float *param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_5[5];
  fVar2 = param_5[4];
  fVar3 = param_5[3];
  fVar4 = param_5[8];
  fVar5 = param_5[7];
  fVar6 = param_5[6];
  *param_1 = param_2 * *param_5 + param_3 * param_5[1] + param_4 * param_5[2];
  param_1[1] = param_2 * fVar3 + param_3 * fVar2 + param_4 * fVar1;
  param_1[2] = param_2 * fVar6 + param_3 * fVar5 + param_4 * fVar4;
  return;
}

