
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_3605dd10(double *param_1)

{
  double dVar1;
  float10 fVar2;
  
  dVar1 = _DAT_36227d98;
  if (_DAT_36227d98 < ABS(*param_1)) {
    dVar1 = ABS(*param_1);
  }
  fVar2 = (float10)dVar1;
  if (fVar2 < (float10)ABS(param_1[1])) {
    fVar2 = (float10)ABS(param_1[1]);
  }
  if (fVar2 < (float10)ABS(param_1[2])) {
    fVar2 = (float10)ABS(param_1[2]);
  }
  return fVar2;
}

