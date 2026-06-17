
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_360e0680(int param_1,double *param_2,double param_3)

{
  float10 fVar1;
  
  if (*(double **)(param_1 + 8) == (double *)0x0) {
    return (float10)_DAT_3622376c;
  }
  fVar1 = FUN_360e03d0(*(double **)(param_1 + 8),param_2,param_3);
  return fVar1;
}

