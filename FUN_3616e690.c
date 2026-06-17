
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3616e690(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = _DAT_36223384 - -param_1[6] * -param_1[6];
  if (fVar1 < _DAT_3622376c) {
    fVar1 = _DAT_3622376c;
  }
  fVar2 = _DAT_3622376c;
  fVar3 = _DAT_36223384;
  if (_DAT_362253e4 < SQRT(fVar1)) {
    fVar1 = _DAT_36223384 / SQRT(fVar1);
    fVar2 = fVar1 * param_1[4];
    fVar3 = fVar1 * param_1[5];
  }
  *param_1 = fVar3;
  param_1[2] = 0.0;
  param_1[6] = 0.0;
  param_1[1] = -fVar2;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[4] = fVar2;
  param_1[10] = 1.0;
  param_1[5] = fVar3;
  return;
}

