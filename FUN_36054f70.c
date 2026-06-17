
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36054f70(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = _DAT_36227d28 / param_3;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  *param_2 = *param_1 * dVar1;
  param_2[1] = dVar2 * dVar1;
  param_2[2] = dVar3 * dVar1;
  return;
}

