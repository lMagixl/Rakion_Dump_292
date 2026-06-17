
void __thiscall FUN_36054ee0(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  *param_2 = *param_1 * param_3;
  param_2[1] = dVar1 * param_3;
  param_2[2] = dVar2 * param_3;
  return;
}

