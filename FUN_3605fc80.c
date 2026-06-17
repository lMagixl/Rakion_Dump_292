
void __cdecl FUN_3605fc80(double *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  param_1[3] = (double)param_2[3];
  *param_1 = (double)fVar1;
  param_1[1] = (double)fVar2;
  param_1[2] = (double)fVar3;
  return;
}

