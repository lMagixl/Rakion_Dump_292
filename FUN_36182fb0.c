
void __fastcall FUN_36182fb0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_2 = fVar1 * *param_1 + fVar2 * param_1[1] + fVar3 * param_1[2] + param_1[3];
  param_2[1] = fVar1 * param_1[4] + fVar2 * param_1[5] + fVar3 * param_1[6] + param_1[7];
  param_2[2] = fVar1 * param_1[8] + fVar2 * param_1[9] + fVar3 * param_1[10] + param_1[0xb];
  *in_EAX = *param_2;
  in_EAX[1] = param_2[1];
  in_EAX[2] = param_2[2];
  return;
}

