
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_360dfa80(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS((*param_2 * param_1[3] + param_1[5] * param_2[2] + param_1[4] * param_2[1]) *
              param_1[0xc]) +
          ABS((param_1[9] * *param_2 + param_1[0xb] * param_2[2] + param_1[10] * param_2[1]) *
              param_1[0xe]) +
          ABS((*param_2 * param_1[6] + param_1[8] * param_2[2] + param_1[7] * param_2[1]) *
              param_1[0xd]);
  dVar2 = (*param_2 * *param_1 + param_1[2] * param_2[2] + param_1[1] * param_2[1]) - param_2[3];
  if (dVar1 < dVar2) {
    return (float10)_DAT_36227d28;
  }
  if (dVar2 < -dVar1) {
    return (float10)_DAT_36227d30;
  }
  return (float10)_DAT_36227d98;
}

