
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl RM_GetMipAdjustmentFactor(class CProjection3D const *) */

float __cdecl RM_GetMipAdjustmentFactor(CProjection3D *param_1)

{
                    /* 0x162b10  2915  ?RM_GetMipAdjustmentFactor@@YAMPBVCProjection3D@@@Z */
  if (param_1 == (CProjection3D *)0x0) {
    param_1 = (CProjection3D *)0x42b40000;
  }
  else {
    param_1 = *(CProjection3D **)(param_1 + 0x184);
  }
  if ((float)_DAT_362a6bd0 == (float)param_1) {
    return _DAT_362a6bcc;
  }
  _DAT_362a6bcc = Tan((float)param_1 * _DAT_36227cf0);
  _DAT_362a6bd0 = param_1;
  return _DAT_362a6bcc;
}

