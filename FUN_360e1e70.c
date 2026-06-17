
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_360e1e70(double *param_1,double *param_2,undefined4 param_3,double *param_4,void *param_5,
            void *param_6,void *param_7,void *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  dVar2 = (param_4[2] * param_1[2] + *param_4 * *param_1 + param_1[1] * param_4[1]) - param_4[3];
  dVar3 = (param_2[2] * param_4[2] + *param_2 * *param_4 + param_2[1] * param_4[1]) - param_4[3];
  dVar4 = (double)_DAT_362a29a0 * _DAT_36232878;
  if (dVar2 < dVar4) {
    if (dVar3 < dVar4) {
      FUN_360e14b0(param_6,(undefined4 *)param_1,(undefined4 *)param_2,param_3);
      return;
    }
    if ((double)_DAT_362a29a0 * _DAT_36232860 < dVar3) {
      local_10 = _DAT_36227d28 / (dVar2 - dVar3);
      local_20 = (*param_1 - *param_2) * dVar2 * local_10;
      local_18 = (param_1[1] - param_2[1]) * dVar2 * local_10;
      local_10 = (param_1[2] - param_2[2]) * dVar2 * local_10;
      local_50 = *param_1 - local_20;
      local_48 = param_1[1] - local_18;
      local_40 = param_1[2] - local_10;
      local_38 = local_50;
      local_30 = local_48;
      local_28 = local_40;
      FUN_360e14b0(param_5,(undefined4 *)&local_50,(undefined4 *)param_2,param_3);
      FUN_360e14b0(param_6,(undefined4 *)param_1,(undefined4 *)&local_50,param_3);
      FUN_360e1ad0(param_7,(undefined4 *)&local_50);
      FUN_360e1ad0(param_8,(undefined4 *)&local_50);
      return;
    }
    FUN_360e14b0(param_6,(undefined4 *)param_1,(undefined4 *)param_2,param_3);
    FUN_360e1ad0(param_8,(undefined4 *)param_2);
    return;
  }
  dVar1 = (double)(_DAT_362a29a0 * (float)_DAT_36232860);
  if (dVar2 <= dVar1) {
    if (dVar3 < dVar4) {
      FUN_360e14b0(param_6,(undefined4 *)param_1,(undefined4 *)param_2,param_3);
      FUN_360e1ad0(param_8,(undefined4 *)param_1);
      return;
    }
    if (dVar1 < dVar3) {
      FUN_360e14b0(param_5,(undefined4 *)param_1,(undefined4 *)param_2,param_3);
      FUN_360e1ad0(param_7,(undefined4 *)param_1);
      return;
    }
    local_38 = *param_2 - *param_1;
    local_30 = param_2[1] - param_1[1];
    local_28 = param_2[2] - param_1[2];
    dVar2 = local_38 * *(double *)((int)param_7 + 0x20) +
            local_28 * *(double *)((int)param_7 + 0x30) +
            local_30 * *(double *)((int)param_7 + 0x28);
    local_20 = local_38;
    local_18 = local_30;
    local_10 = local_28;
    if (dVar1 < dVar2) {
      FUN_360e14b0(param_5,(undefined4 *)param_1,(undefined4 *)param_2,param_3);
      FUN_360e1ad0(param_7,(undefined4 *)param_1);
      FUN_360e1ad0(param_7,(undefined4 *)param_2);
      return;
    }
    if (dVar2 < dVar4) {
      FUN_360e14b0(param_6,(undefined4 *)param_1,(undefined4 *)param_2,param_3);
      FUN_360e1ad0(param_8,(undefined4 *)param_1);
      FUN_360e1ad0(param_8,(undefined4 *)param_2);
    }
    return;
  }
  if (dVar3 < dVar4) {
    local_10 = _DAT_36227d28 / (dVar3 - dVar2);
    local_20 = (*param_2 - *param_1) * dVar3 * local_10;
    local_18 = (param_2[1] - param_1[1]) * dVar3 * local_10;
    local_10 = (param_2[2] - param_1[2]) * dVar3 * local_10;
    local_50 = *param_2 - local_20;
    local_48 = param_2[1] - local_18;
    local_40 = param_2[2] - local_10;
    local_38 = local_50;
    local_30 = local_48;
    local_28 = local_40;
    FUN_360e14b0(param_5,(undefined4 *)param_1,(undefined4 *)&local_50,param_3);
    FUN_360e14b0(param_6,(undefined4 *)&local_50,(undefined4 *)param_2,param_3);
    FUN_360e1ad0(param_7,(undefined4 *)&local_50);
    FUN_360e1ad0(param_8,(undefined4 *)&local_50);
    return;
  }
  if (dVar1 < dVar3) {
    FUN_360e14b0(param_5,(undefined4 *)param_1,(undefined4 *)param_2,param_3);
    return;
  }
  FUN_360e14b0(param_5,(undefined4 *)param_1,(undefined4 *)param_2,param_3);
  FUN_360e1ad0(param_7,(undefined4 *)param_2);
  return;
}

