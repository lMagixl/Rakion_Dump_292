
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_3617c0c0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_EAX;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_6c;
  int local_68;
  float local_58 [11];
  float local_2c;
  float local_28 [4];
  float local_18 [6];
  
  local_58[1] = *in_EAX - *param_2;
  local_58[2] = in_EAX[1] - param_2[1];
  local_58[3] = in_EAX[2] - param_2[2];
  fVar3 = SQRT(local_58[1] * local_58[1] + local_58[2] * local_58[2] + local_58[3] * local_58[3]);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar3) {
    fVar2 = _DAT_36223384 / fVar3;
  }
  local_58[3] = local_58[3] * fVar2;
  fVar5 = local_58[3];
  local_58[2] = local_58[2] * fVar2;
  fVar4 = local_58[2];
  local_58[1] = local_58[1] * fVar2;
  fVar3 = local_58[1];
  local_58[4] = local_58[1];
  local_58[5] = local_58[2];
  local_58[6] = local_58[3];
  local_18[3] = *param_1;
  local_18[4] = param_1[1];
  local_18[5] = param_1[2];
  local_58[7] = param_1[3];
  local_58[8] = param_1[4];
  local_58[9] = param_1[5];
  bVar1 = true;
  if (local_18[3] <= *param_2) {
    if (*param_2 <= local_58[7]) {
      iVar9 = 2;
      if (_DAT_3622376c < local_58[1]) goto LAB_3617c230;
    }
    else {
      bVar1 = false;
      local_18[0] = local_58[7];
      iVar9 = 0;
    }
  }
  else {
    local_18[0] = local_18[3];
    bVar1 = false;
    iVar9 = 1;
LAB_3617c230:
    local_18[3] = local_58[7];
  }
  if (local_18[4] <= param_2[1]) {
    if (param_2[1] <= local_58[8]) {
      iVar8 = 2;
      if (_DAT_3622376c < local_58[2]) {
        local_2c = local_58[8];
        goto LAB_3617c275;
      }
    }
    else {
      bVar1 = false;
      local_18[1] = local_58[8];
      iVar8 = 0;
    }
    local_2c = local_18[4];
  }
  else {
    local_18[1] = local_18[4];
    local_2c = local_58[8];
    bVar1 = false;
    iVar8 = 1;
  }
LAB_3617c275:
  if (local_18[5] <= param_2[2]) {
    if (param_2[2] <= local_58[9]) {
      iVar7 = 2;
      if (_DAT_3622376c < local_58[3]) {
        local_28[0] = local_58[9];
        goto LAB_3617c2d8;
      }
    }
    else {
      local_18[2] = local_58[9];
      bVar1 = false;
      iVar7 = 0;
    }
    local_28[0] = local_18[5];
  }
  else {
    local_18[2] = local_18[5];
    local_28[0] = local_58[9];
    bVar1 = false;
    iVar7 = 1;
  }
LAB_3617c2d8:
  if ((iVar9 == 2) || (local_58[1] == _DAT_3622376c)) {
    local_28[1] = -1.0;
  }
  else {
    local_28[1] = (local_18[0] - *param_2) / local_58[1];
  }
  if (local_58[1] == _DAT_3622376c) {
    local_58[1] = -1.0;
  }
  else {
    local_58[1] = (local_18[3] - *param_2) / local_58[1];
  }
  if ((iVar8 == 2) || (local_58[2] == _DAT_3622376c)) {
    local_28[2] = -1.0;
  }
  else {
    local_28[2] = (local_18[1] - param_2[1]) / local_58[2];
  }
  if (local_58[2] == _DAT_3622376c) {
    local_58[2] = -1.0;
  }
  else {
    local_58[2] = (local_2c - param_2[1]) / local_58[2];
  }
  local_28[3] = _DAT_36227d20;
  if ((iVar7 != 2) && (local_58[3] != _DAT_3622376c)) {
    local_28[3] = (local_18[2] - param_2[2]) / local_58[3];
  }
  if (local_58[3] == _DAT_3622376c) {
    local_58[3] = -1.0;
  }
  else {
    local_58[3] = (local_28[0] - param_2[2]) / local_58[3];
  }
  iVar8 = 1;
  iVar9 = 1;
  local_68 = 1;
  local_6c = 1;
  if (local_28[1] < local_28[2]) {
    iVar8 = 2;
    local_68 = 2;
  }
  if ((_DAT_3622376c <= local_58[2]) &&
     ((local_58[1] < _DAT_3622376c || (local_58[2] < local_58[1])))) {
    local_6c = 2;
    iVar9 = 2;
  }
  if (local_28[iVar8] < local_28[3]) {
    iVar8 = 3;
    local_68 = 3;
  }
  if ((_DAT_3622376c <= local_58[3]) &&
     ((local_58[iVar9] < _DAT_3622376c || (local_58[3] < local_58[iVar9])))) {
    local_6c = 3;
    iVar9 = 3;
  }
  if (bVar1) {
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    local_6c = iVar9;
  }
  else {
    if ((local_28[iVar8] < _DAT_3622376c) || (local_58[iVar9] < _DAT_3622376c)) {
      return 0;
    }
    iVar9 = 1;
    pfVar6 = param_2;
    do {
      if (local_68 == iVar9) {
        *(undefined4 *)(((int)param_3 - (int)param_2) + (int)pfVar6) =
             *(undefined4 *)(((int)local_18 - (int)param_2) + (int)pfVar6);
      }
      else {
        fVar2 = *(float *)((int)local_58 + (0x10 - (int)param_2) + (int)pfVar6) * local_28[iVar8] +
                *pfVar6;
        *(float *)(((int)param_3 - (int)param_2) + (int)pfVar6) = fVar2;
        if (fVar2 < *(float *)((int)local_18 + (0xc - (int)param_2) + (int)pfVar6)) {
          return 0;
        }
        if (*(float *)((int)local_58 + (0x1c - (int)param_2) + (int)pfVar6) < fVar2) {
          return 0;
        }
      }
      iVar9 = iVar9 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar9 < 4);
  }
  if (local_6c == 1) {
    *param_4 = local_18[3];
  }
  else {
    pfVar6 = local_58 + local_6c;
    *param_4 = fVar3 * *pfVar6 + *param_2;
    if (local_6c == 2) {
      param_4[1] = local_2c;
      goto LAB_3617c51a;
    }
  }
  pfVar6 = local_58 + local_6c;
  param_4[1] = fVar4 * local_58[local_6c] + param_2[1];
  if (local_6c == 3) {
    param_4[2] = local_28[0];
    return 1;
  }
LAB_3617c51a:
  param_4[2] = fVar5 * *pfVar6 + param_2[2];
  return 1;
}

