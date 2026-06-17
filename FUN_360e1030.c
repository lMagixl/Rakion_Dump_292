
float10 __thiscall FUN_360e1030(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[3];
  return ((float10)(*param_2 * fVar1) * (float10)*param_1 +
         (float10)(param_2[2] * fVar1) * (float10)param_1[2] +
         (float10)(param_2[1] * fVar1) * (float10)param_1[1]) - (float10)param_1[3];
}

