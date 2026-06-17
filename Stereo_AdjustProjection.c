
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Stereo_AdjustProjection(class CProjection3D &,long,float) */

void __cdecl Stereo_AdjustProjection(CProjection3D *param_1,long param_2,float param_3)

{
  CProjection3D *pCVar1;
  float fVar2;
  float local_c;
  long local_8;
  long local_4;
  
                    /* 0x932a0  3673  ?Stereo_AdjustProjection@@YAXAAVCProjection3D@@JM@Z */
  if (_DAT_362a41cc < _DAT_362280f0) {
    _DAT_362a41cc = 0.01;
  }
  else if (_DAT_362a41cc < _DAT_36223384 == (_DAT_362a41cc == _DAT_36223384)) {
    _DAT_362a41cc = 1.0;
  }
  if (DAT_362a41c8 < -100) {
    DAT_362a41c8 = -100;
  }
  else if (100 < DAT_362a41c8) {
    DAT_362a41c8 = 100;
  }
  if ((param_2 != 2) && (DAT_362c5488 != 0)) {
    if (param_2 == 0) {
      local_8 = param_2;
      local_4 = param_2;
      local_c = _DAT_362a41cc * param_3 * _DAT_3622e4f0;
      CPlacement3D::Translate_OwnSystem
                ((CPlacement3D *)(param_1 + 0x28),(Vector<float,3> *)&local_c);
      pCVar1 = param_1 + 0x19c;
      *(float *)pCVar1 = *(float *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x60);
      fVar2 = (float)-DAT_362a41c8 * _DAT_36227cf0;
      *(float *)pCVar1 = *(float *)pCVar1 - fVar2;
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
      *(float *)(param_1 + 0x1a4) = *(float *)(param_1 + 0x1a4) - fVar2;
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
      return;
    }
    if (param_2 == 1) {
      local_c = _DAT_362a41cc * param_3 * _DAT_36227cf0;
      local_8 = 0;
      local_4 = 0;
      CPlacement3D::Translate_OwnSystem
                ((CPlacement3D *)(param_1 + 0x28),(Vector<float,3> *)&local_c);
      pCVar1 = param_1 + 0x19c;
      *(float *)pCVar1 = *(float *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x60);
      fVar2 = (float)DAT_362a41c8 * _DAT_36227cf0;
      *(float *)pCVar1 = *(float *)pCVar1 - fVar2;
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
      *(float *)(param_1 + 0x1a4) = *(float *)(param_1 + 0x1a4) - fVar2;
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
    }
  }
  return;
}

