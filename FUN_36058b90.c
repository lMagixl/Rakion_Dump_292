
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_36058b90(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS((*param_2 * param_1[3] + param_1[5] * param_2[2] + param_1[4] * param_2[1]) *
              param_1[0xc]) +
          ABS((param_1[9] * *param_2 + param_1[0xb] * param_2[2] + param_1[10] * param_2[1]) *
              param_1[0xe]) +
          ABS((*param_2 * param_1[6] + param_1[8] * param_2[2] + param_1[7] * param_2[1]) *
              param_1[0xd]);
  fVar2 = (*param_2 * *param_1 + param_1[2] * param_2[2] + param_1[1] * param_2[1]) - param_2[3];
  if (fVar1 < fVar2) {
    return (float10)_DAT_36223384;
  }
  if (fVar2 < -fVar1) {
    return (float10)_DAT_36227d20;
  }
  return (float10)_DAT_3622376c;
}

