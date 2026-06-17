
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36029ea0(void)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  CInputDevice *unaff_ESI;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float local_18;
  float local_14;
  float local_10;
  uint local_8;
  int iStack_4;
  
  CInputDevice::ClearControlsValue(unaff_ESI);
  if (DAT_362ba340 != 0) {
    FUN_36028210();
    bVar5 = DAT_362ba308;
    if ((DAT_362ba308 & 2) != 0) {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 100) = 0x3f800000;
    }
    if ((bVar5 & 1) != 0) {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x7c) = 0x3f800000;
    }
    if ((bVar5 & 4) != 0) {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x94) = 0x3f800000;
    }
    iVar7 = DAT_362ba310;
    iVar6 = DAT_362ba30c;
    fVar2 = (float)DAT_362ba310;
    local_10 = DAT_362a1b64;
    fVar3 = (float)DAT_362ba30c;
    fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
    if (fVar4 < _DAT_3622376c) {
      fVar4 = _DAT_3622376c;
    }
    if (DAT_362ba324 != 0) {
      fVar8 = _DAT_3622376c;
      if (SQRT(fVar4) < _DAT_362a1b6c) {
        fVar8 = _DAT_362ba3a4 + _DAT_362253e8;
      }
      _DAT_362ba3a4 = fVar8;
      if (_DAT_362a1b70 < _DAT_362ba3a4) {
        local_10 = DAT_362a1b64 / _DAT_362a1b68;
      }
    }
    if ((_DAT_362ba3a0 & 1) == 0) {
      _DAT_362ba3a0 = _DAT_362ba3a0 | 1;
    }
    CTimer::GetHighPrecisionTimer(_pTimer);
    fVar11 = (float10)CONCAT44((iStack_4 - DAT_362ba39c) - (uint)(local_8 < DAT_362ba398),
                               local_8 - DAT_362ba398) / (float10)*(longlong *)_pTimer;
    if (fVar11 < (float10)_DAT_362253e4) {
      fVar11 = (float10)_DAT_362253e4;
    }
    fVar9 = (float10)_DAT_362ba390;
    fVar10 = (float10)_DAT_362ba390;
    DAT_362ba398 = local_8;
    DAT_362ba39c = iStack_4;
    fVar1 = (float10)_DAT_362ba390;
    _DAT_362ba390 = (float)fVar11;
    local_18 = fVar2;
    local_14 = fVar3;
    if (DAT_362ba32c != 0) {
      local_18 = (float)((fVar11 * (float10)iVar7 + fVar10 * (float10)_DAT_362ba38c) /
                        (fVar9 + fVar11));
      local_14 = (float)((fVar11 * (float10)iVar6 + (float10)_DAT_362ba388 * fVar1) /
                        (fVar9 + fVar11));
    }
    local_18 = local_10 * local_18;
    fVar4 = -(local_10 * local_14);
    if (DAT_362ba328 != 0) {
      fVar4 = -fVar4;
    }
    fVar8 = _DAT_3622376c;
    if (_DAT_3622376c < local_18) {
      fVar8 = local_18;
    }
    _DAT_362ba388 = fVar3;
    _DAT_362ba38c = fVar2;
    *(float *)(*(int *)(unaff_ESI + 0x18) + 4) = fVar8;
    fVar2 = _DAT_3622376c;
    if (local_18 < _DAT_3622376c) {
      fVar2 = local_18;
    }
    *(float *)(*(int *)(unaff_ESI + 0x18) + 0x1c) = -fVar2;
    fVar2 = _DAT_3622376c;
    if (_DAT_3622376c < fVar4) {
      fVar2 = fVar4;
    }
    *(float *)(*(int *)(unaff_ESI + 0x18) + 0x34) = fVar2;
    if (_DAT_3622376c <= fVar4) {
      fVar4 = _DAT_3622376c;
    }
    *(float *)(*(int *)(unaff_ESI + 0x18) + 0x4c) = -fVar4;
  }
  return;
}

