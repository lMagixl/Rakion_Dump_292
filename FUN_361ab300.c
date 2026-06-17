
void __fastcall FUN_361ab300(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_EAX;
  float *unaff_ESI;
  
  fVar1 = in_EAX[1];
  fVar2 = in_EAX[2];
  fVar3 = *param_1 * *in_EAX + param_1[1] * in_EAX[1] + param_1[2] * in_EAX[2];
  *param_2 = *in_EAX * fVar3;
  param_2[1] = fVar1 * fVar3;
  param_2[2] = fVar2 * fVar3;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *unaff_ESI = *param_1 - *param_2;
  unaff_ESI[1] = fVar3 - fVar1;
  unaff_ESI[2] = fVar4 - fVar2;
  return;
}

