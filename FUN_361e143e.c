
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_361e143e(float *param_1)

{
  float local_1c;
  float local_18;
  float local_14;
  
  if (_DAT_3622376c <= *param_1) {
    if (_DAT_36223384 < *param_1) {
      local_1c = 1.0;
    }
    else {
      local_1c = *param_1;
    }
  }
  else {
    local_1c = 0.0;
  }
  if (_DAT_3622376c <= param_1[1]) {
    if (_DAT_36223384 < param_1[1]) {
      local_18 = 1.0;
    }
    else {
      local_18 = param_1[1];
    }
  }
  else {
    local_18 = 0.0;
  }
  if (_DAT_3622376c <= param_1[2]) {
    if (param_1[2] <= _DAT_36223384) {
      local_14 = param_1[2];
    }
    else {
      local_14 = 1.0;
    }
  }
  else {
    local_14 = 0.0;
  }
  FUN_361e13fc(param_1);
  return ((int)ROUND(local_1c * _DAT_36249aa0 + _DAT_36227cf0) << 6 |
         (int)ROUND(local_18 * _DAT_36230524 + _DAT_36227cf0)) << 5 |
         (int)ROUND(local_14 * _DAT_36249aa0 + _DAT_36227cf0);
}

