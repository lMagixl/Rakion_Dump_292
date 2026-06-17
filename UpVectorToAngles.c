
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl UpVectorToAngles(class Vector<float,3> const &,class Vector<float,3> &) */

void __cdecl UpVectorToAngles(Vector<float,3> *param_1,Vector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float local_48;
  float local_44;
  float local_40;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
                    /* 0x49aa0  3899  ?UpVectorToAngles@@YAXABV?$Vector@M$02@@AAV1@@Z */
  if (ABS(*(float *)(param_1 + 4)) <= _DAT_36227cf0) {
    local_48 = *(float *)(param_1 + 8) - *(float *)(param_1 + 4) * _DAT_3622376c;
    local_44 = *(float *)param_1 * _DAT_3622376c - *(float *)(param_1 + 8) * _DAT_3622376c;
    local_40 = *(float *)(param_1 + 4) * _DAT_3622376c - *(float *)param_1;
  }
  else {
    local_48 = *(float *)(param_1 + 8) * _DAT_3622376c - *(float *)(param_1 + 4) * _DAT_3622376c;
    local_44 = *(float *)param_1 * _DAT_3622376c - *(float *)(param_1 + 8);
    local_40 = *(float *)(param_1 + 4) - *(float *)param_1 * _DAT_3622376c;
  }
  fVar1 = SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40);
  local_1c = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    local_1c = _DAT_36223384 / fVar1;
  }
  local_4 = local_40 * local_1c;
  local_10 = local_44 * local_1c;
  local_1c = local_48 * local_1c;
  local_24 = local_4 * *(float *)(param_1 + 4) - local_10 * *(float *)(param_1 + 8);
  local_18 = local_1c * *(float *)(param_1 + 8) - local_4 * *(float *)param_1;
  local_c = local_10 * *(float *)param_1 - local_1c * *(float *)(param_1 + 4);
  fVar1 = SQRT(local_24 * local_24 + local_18 * local_18 + local_c * local_c);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar2 = _DAT_36223384 / fVar1;
  }
  local_c = local_c * fVar2;
  local_18 = local_18 * fVar2;
  local_24 = local_24 * fVar2;
  local_20 = *(undefined4 *)param_1;
  local_14 = *(undefined4 *)(param_1 + 4);
  local_8 = *(undefined4 *)(param_1 + 8);
  DecomposeRotationMatrixNoSnap(param_2,(Matrix<float,3,3> *)&local_24);
  return;
}

