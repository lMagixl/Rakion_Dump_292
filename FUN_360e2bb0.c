
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_360e2bb0(float *param_1,float *param_2,undefined4 param_3,float *param_4,void *param_5,
            void *param_6,void *param_7,void *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = (param_4[2] * param_1[2] + *param_4 * *param_1 + param_1[1] * param_4[1]) - param_4[3];
  fVar2 = (param_2[2] * param_4[2] + *param_2 * *param_4 + param_2[1] * param_4[1]) - param_4[3];
  fVar3 = _DAT_362a29a0 * (float)_DAT_36232878;
  if (fVar1 < fVar3) {
    if (fVar2 < fVar3) {
      FUN_360e1730(param_6,param_1,param_2,param_3);
      return;
    }
    if (_DAT_362a29a0 * (float)_DAT_36232860 < fVar2) {
      local_4 = _DAT_36223384 / (fVar1 - fVar2);
      local_c = (*param_1 - *param_2) * fVar1 * local_4;
      local_8 = (param_1[1] - param_2[1]) * fVar1 * local_4;
      local_4 = (param_1[2] - param_2[2]) * fVar1 * local_4;
      local_24 = *param_1 - local_c;
      local_20 = param_1[1] - local_8;
      local_1c = param_1[2] - local_4;
      local_18 = local_24;
      local_14 = local_20;
      local_10 = local_1c;
      FUN_360e1730(param_5,&local_24,param_2,param_3);
      FUN_360e1730(param_6,param_1,&local_24,param_3);
      FUN_360e2850(param_7,&local_24);
      FUN_360e2850(param_8,&local_24);
      return;
    }
    FUN_360e1730(param_6,param_1,param_2,param_3);
    FUN_360e2850(param_8,param_2);
    return;
  }
  fVar4 = _DAT_362a29a0 * (float)_DAT_36232860;
  if (fVar1 <= fVar4) {
    if (fVar2 < fVar3) {
      FUN_360e1730(param_6,param_1,param_2,param_3);
      FUN_360e2850(param_8,param_1);
      return;
    }
    if (fVar4 < fVar2) {
      FUN_360e1730(param_5,param_1,param_2,param_3);
      FUN_360e2850(param_7,param_1);
      return;
    }
    local_18 = *param_2 - *param_1;
    local_14 = param_2[1] - param_1[1];
    local_10 = param_2[2] - param_1[2];
    fVar1 = local_18 * *(float *)((int)param_7 + 0x18) +
            local_10 * *(float *)((int)param_7 + 0x20) + local_14 * *(float *)((int)param_7 + 0x1c);
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    if (fVar4 < fVar1) {
      FUN_360e1730(param_5,param_1,param_2,param_3);
      FUN_360e2850(param_7,param_1);
      FUN_360e2850(param_7,param_2);
      return;
    }
    if (fVar1 < fVar3) {
      FUN_360e1730(param_6,param_1,param_2,param_3);
      FUN_360e2850(param_8,param_1);
      FUN_360e2850(param_8,param_2);
    }
    return;
  }
  if (fVar2 < fVar3) {
    local_4 = _DAT_36223384 / (fVar2 - fVar1);
    local_c = (*param_2 - *param_1) * fVar2 * local_4;
    local_8 = (param_2[1] - param_1[1]) * fVar2 * local_4;
    local_4 = (param_2[2] - param_1[2]) * fVar2 * local_4;
    local_24 = *param_2 - local_c;
    local_20 = param_2[1] - local_8;
    local_1c = param_2[2] - local_4;
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
    FUN_360e1730(param_5,param_1,&local_24,param_3);
    FUN_360e1730(param_6,&local_24,param_2,param_3);
    FUN_360e2850(param_7,&local_24);
    FUN_360e2850(param_8,&local_24);
    return;
  }
  if (fVar4 < fVar2) {
    FUN_360e1730(param_5,param_1,param_2,param_3);
    return;
  }
  FUN_360e1730(param_5,param_1,param_2,param_3);
  FUN_360e2850(param_7,param_2);
  return;
}

