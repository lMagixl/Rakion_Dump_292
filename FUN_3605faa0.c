
void __cdecl FUN_3605faa0(float *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  param_1[3] = (float)param_2[3];
  *param_1 = (float)dVar1;
  param_1[1] = (float)dVar2;
  param_1[2] = (float)dVar3;
  return;
}

