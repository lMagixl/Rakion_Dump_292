
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36029ad0(int param_1)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SHORT SVar6;
  CInputDevice *in_EAX;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_20;
  float local_1c;
  float local_18;
  uint local_10;
  int iStack_c;
  tagPOINT local_8;
  
  CInputDevice::ClearControlsValue(in_EAX);
  BVar7 = GetCursorPos(&local_8);
  if (BVar7 != 0) {
    iVar9 = local_8.x - *(int *)(_pInput + 0x14);
    fVar2 = (float)iVar9;
    iVar10 = local_8.y - *(int *)(_pInput + 0x18);
    fVar3 = (float)iVar10;
    local_18 = _DAT_362a1b50 * _DAT_362253ec;
    fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
    if (fVar4 < _DAT_3622376c) {
      fVar4 = _DAT_3622376c;
    }
    if (DAT_362ba314 != 0) {
      fVar5 = _DAT_3622376c;
      if (SQRT(fVar4) < _DAT_362a1b58) {
        fVar5 = _DAT_362ba384 + _DAT_362253e8;
      }
      _DAT_362ba384 = fVar5;
      if (_DAT_362a1b5c < _DAT_362ba384) {
        local_18 = local_18 / _DAT_362a1b54;
      }
    }
    if ((_DAT_362ba380 & 1) == 0) {
      _DAT_362ba380 = _DAT_362ba380 | 1;
    }
    CTimer::GetHighPrecisionTimer(_pTimer);
    fVar13 = (float10)CONCAT44((iStack_c - _DAT_362ba37c) - (uint)(local_10 < DAT_362ba378),
                               local_10 - DAT_362ba378) / (float10)*(longlong *)_pTimer;
    if (fVar13 < (float10)_DAT_362253e4) {
      fVar13 = (float10)_DAT_362253e4;
    }
    fVar11 = (float10)_DAT_362ba370;
    fVar12 = (float10)_DAT_362ba370;
    DAT_362ba378 = local_10;
    _DAT_362ba37c = iStack_c;
    fVar1 = (float10)_DAT_362ba370;
    _DAT_362ba370 = (float)fVar13;
    local_20 = fVar2;
    local_1c = fVar3;
    if (DAT_362ba31c != 0) {
      local_20 = (float)((fVar13 * (float10)iVar9 + fVar12 * (float10)_DAT_362ba36c) /
                        (fVar11 + fVar13));
      local_1c = (float)((fVar13 * (float10)iVar10 + (float10)_DAT_362ba368 * fVar1) /
                        (fVar11 + fVar13));
    }
    local_20 = local_18 * local_20;
    fVar4 = -(local_18 * local_1c);
    if (_DAT_362ba318 != _DAT_3622376c) {
      fVar4 = -fVar4;
    }
    fVar5 = _DAT_3622376c;
    if (_DAT_3622376c < local_20) {
      fVar5 = local_20;
    }
    _DAT_362ba368 = fVar3;
    _DAT_362ba36c = fVar2;
    *(float *)(*(int *)(in_EAX + 0x18) + 4) = fVar5;
    fVar2 = _DAT_3622376c;
    if (local_20 < _DAT_3622376c) {
      fVar2 = local_20;
    }
    *(float *)(*(int *)(in_EAX + 0x18) + 0x1c) = -fVar2;
    fVar2 = _DAT_3622376c;
    if (_DAT_3622376c < fVar4) {
      fVar2 = fVar4;
    }
    *(float *)(*(int *)(in_EAX + 0x18) + 0x34) = fVar2;
    if (_DAT_3622376c <= fVar4) {
      fVar4 = _DAT_3622376c;
    }
    *(float *)(*(int *)(in_EAX + 0x18) + 0x4c) = -fVar4;
    uVar8 = DAT_362ba354;
    if (param_1 == 0) {
      if (0 < (int)DAT_362ba354) {
        if (DAT_362ba358 == 0) {
          uVar8 = DAT_362ba354 - 0x78;
          *(undefined4 *)(*(int *)(in_EAX + 0x18) + 100) = 0x3f800000;
          DAT_362ba358 = 1;
          DAT_362ba354 = uVar8;
          if ((int)uVar8 < 0) {
            DAT_362ba354 = 0;
            goto LAB_36029dd0;
          }
        }
        else {
          *(undefined4 *)(*(int *)(in_EAX + 0x18) + 100) = 0;
          DAT_362ba358 = 0;
        }
      }
      if ((int)uVar8 < 0) {
        if (DAT_362ba35c == 0) {
          *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0x7c) = 0x3f800000;
          DAT_362ba35c = 1;
          DAT_362ba354 = (0 < (int)(uVar8 + 0x78)) - 1 & uVar8 + 0x78;
        }
        else {
          *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0x7c) = 0;
          DAT_362ba35c = 0;
        }
      }
    }
  }
LAB_36029dd0:
  if (DAT_362a1b48 == 0) {
    SVar6 = GetAsyncKeyState(1);
    if (SVar6 < 0) {
      *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0x94) = 0x3f800000;
    }
    SVar6 = GetAsyncKeyState(2);
    if (SVar6 < 0) {
      *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0xac) = 0x3f800000;
    }
    SVar6 = GetAsyncKeyState(4);
    if (SVar6 < 0) {
      *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0xc4) = 0x3f800000;
    }
  }
  else {
    if (DAT_362b94c8 != '\0') {
      *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0x94) = 0x3f800000;
    }
    if (DAT_362b94c9 != '\0') {
      *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0xac) = 0x3f800000;
    }
    if (DAT_362b94ca != '\0') {
      *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0xc4) = 0x3f800000;
    }
    if (DAT_362b94cb != '\0') {
      *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0xdc) = 0x3f800000;
    }
    if (DAT_362b94cc != '\0') {
      *(undefined4 *)(*(int *)(in_EAX + 0x18) + 0xf4) = 0x3f800000;
    }
  }
  if ((local_8.x != *(int *)(_pInput + 0x14)) || (local_8.y != *(int *)(_pInput + 0x18))) {
    SetCursorPos(*(int *)(_pInput + 0x14),*(int *)(_pInput + 0x18));
  }
  return;
}

