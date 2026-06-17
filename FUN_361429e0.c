
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361429e0(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_50;
  double local_48;
  double local_40;
  
  local_50 = *param_2 - *param_1;
  local_48 = param_2[1] - param_1[1];
  local_40 = param_2[2] - param_1[2];
  dVar1 = SQRT(local_50 * local_50 + local_48 * local_48 + local_40 * local_40);
  dVar2 = _DAT_36227d98;
  if (_DAT_36223438 <= dVar1) {
    dVar2 = _DAT_36227d28 / dVar1;
  }
  local_40 = local_40 * dVar2;
  local_48 = local_48 * dVar2;
  local_50 = local_50 * dVar2;
  *param_3 = local_50;
  param_3[1] = local_48;
  param_3[2] = local_40;
  dVar1 = *param_1 * *param_3 + param_3[2] * param_1[2] + param_1[1] * param_3[1];
  dVar2 = _DAT_36227d28 / (param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  dVar3 = param_1[1];
  dVar4 = param_1[2];
  *param_4 = *param_1 - local_50 * dVar1 * dVar2;
  param_4[1] = dVar3 - local_48 * dVar1 * dVar2;
  param_4[2] = dVar4 - local_40 * dVar1 * dVar2;
  return;
}

