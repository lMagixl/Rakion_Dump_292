
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_361ab3b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_24;
  float local_20;
  
  fVar1 = param_1[6];
  local_24 = *param_1;
  local_20 = param_1[3];
  fVar2 = SQRT(local_24 * local_24 + local_20 * local_20 + fVar1 * fVar1);
  fVar4 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar2) {
    fVar4 = _DAT_36223384 / fVar2;
  }
  local_20 = local_20 * fVar4;
  local_24 = local_24 * fVar4;
  fVar1 = fVar1 * fVar4;
  fVar4 = param_1[7] * local_20 - param_1[4] * fVar1;
  fVar6 = param_1[1] * fVar1 - param_1[7] * local_24;
  fVar2 = param_1[4] * local_24 - param_1[1] * local_20;
  fVar3 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar2 * fVar2);
  fVar5 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar3) {
    fVar5 = _DAT_36223384 / fVar3;
  }
  fVar2 = fVar2 * fVar5;
  fVar6 = fVar6 * fVar5;
  fVar4 = fVar4 * fVar5;
  fVar7 = fVar6 * fVar1 - fVar2 * local_20;
  fVar3 = fVar2 * local_24 - fVar4 * fVar1;
  fVar5 = fVar4 * local_20 - fVar6 * local_24;
  fVar8 = SQRT(fVar7 * fVar7 + fVar3 * fVar3 + fVar5 * fVar5);
  fVar9 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar8) {
    fVar9 = _DAT_36223384 / fVar8;
  }
  param_1[1] = fVar7 * fVar9;
  *param_1 = local_24;
  param_1[2] = fVar4;
  param_1[3] = local_20;
  param_1[4] = fVar3 * fVar9;
  param_1[7] = fVar5 * fVar9;
  param_1[8] = fVar2;
  param_1[5] = fVar6;
  param_1[6] = fVar1;
  return;
}

