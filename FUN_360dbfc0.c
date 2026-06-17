
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_360dbfc0(float *param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  float local_14;
  
  local_14 = in_EAX[1];
  if (SQRT((*in_EAX - *param_1) * (*in_EAX - *param_1) +
           (in_EAX[1] - param_1[1]) * (in_EAX[1] - param_1[1]) +
           (in_EAX[2] - param_1[2]) * (in_EAX[2] - param_1[2])) < _DAT_3623281c) {
    local_14 = local_14 + _DAT_362253e4;
  }
  fVar1 = *param_1 - *param_2;
  fVar2 = param_1[1] - param_2[1];
  fVar3 = param_1[2] - param_2[2];
  fVar4 = *in_EAX - *param_1;
  local_14 = local_14 - param_1[1];
  fVar5 = in_EAX[2] - param_1[2];
  fVar6 = fVar4 * fVar4 + local_14 * local_14 + fVar5 * fVar5;
  fVar7 = _DAT_36223384 / fVar6;
  fVar4 = (fVar1 * fVar4 + fVar2 * local_14 + fVar3 * fVar5) * fVar7;
  fVar1 = fVar4 * fVar4 -
          ((fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) - param_3 * param_3) * fVar7;
  if (fVar1 < _DAT_3622376c) {
    return 0;
  }
  fVar1 = SQRT(fVar1);
  fVar2 = fVar1 - fVar4;
  fVar1 = -fVar4 - fVar1;
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  *param_4 = SQRT(fVar6) * fVar1;
  return 1;
}

