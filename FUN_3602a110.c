
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3602a110(int param_1)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  MMRESULT MVar4;
  char *pcVar5;
  int iVar6;
  CInputDevice *unaff_ESI;
  UINT uJoyID;
  int iVar7;
  joyinfoex_tag local_34;
  
  CInputDevice::ClearControlsValue(unaff_ESI);
  iVar7 = *(int *)(unaff_ESI + 8);
  uJoyID = iVar7 - 4;
  if (((int)uJoyID < DAT_362a1b84) && ((*(int *)(_pInput + 0x10) != 0 || (DAT_362ba334 != 0)))) {
    local_34.dwFlags = 0x4ff;
    local_34.dwSize = 0x34;
    MVar4 = joyGetPosEx(uJoyID,&local_34);
    if (MVar4 == 0) {
      iVar7 = *(int *)(unaff_ESI + 0x18);
      fVar3 = (float)(int)(local_34.dwXpos - *(int *)(iVar7 + 8)) /
              (float)(*(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8));
      fVar3 = (fVar3 + fVar3) - _DAT_36223384;
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 4) = fVar3;
      fVar3 = (float)(int)(local_34.dwXpos - *(int *)(iVar7 + 0x20)) /
              (float)(*(int *)(iVar7 + 0x24) - *(int *)(iVar7 + 0x20));
      fVar3 = _DAT_36223384 - (fVar3 + fVar3);
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0x1c) = fVar3;
      fVar3 = (float)(int)(local_34.dwYpos - *(int *)(iVar7 + 0x38)) /
              (float)(*(int *)(iVar7 + 0x3c) - *(int *)(iVar7 + 0x38));
      fVar3 = (fVar3 + fVar3) - _DAT_36223384;
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0x34) = fVar3;
      fVar3 = (float)(int)(local_34.dwYpos - *(int *)(iVar7 + 0x50)) /
              (float)(*(int *)(iVar7 + 0x54) - *(int *)(iVar7 + 0x50));
      fVar3 = _DAT_36223384 - (fVar3 + fVar3);
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0x4c) = fVar3;
      fVar3 = (float)(int)(local_34.dwZpos - *(int *)(iVar7 + 0x68)) /
              (float)(*(int *)(iVar7 + 0x6c) - *(int *)(iVar7 + 0x68));
      fVar3 = (fVar3 + fVar3) - _DAT_36223384;
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 100) = fVar3;
      fVar3 = (float)(int)(local_34.dwZpos - *(int *)(iVar7 + 0x80)) /
              (float)(*(int *)(iVar7 + 0x84) - *(int *)(iVar7 + 0x80));
      fVar3 = _DAT_36223384 - (fVar3 + fVar3);
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0x7c) = fVar3;
      fVar3 = (float)(int)(local_34.dwRpos - *(int *)(iVar7 + 0x98)) /
              (float)(*(int *)(iVar7 + 0x9c) - *(int *)(iVar7 + 0x98));
      fVar3 = (fVar3 + fVar3) - _DAT_36223384;
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0x94) = fVar3;
      fVar3 = (float)(int)(local_34.dwRpos - *(int *)(iVar7 + 0xb0)) /
              (float)(*(int *)(iVar7 + 0xb4) - *(int *)(iVar7 + 0xb0));
      fVar3 = _DAT_36223384 - (fVar3 + fVar3);
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0xac) = fVar3;
      fVar3 = (float)(int)(local_34.dwUpos - *(int *)(iVar7 + 200)) /
              (float)(*(int *)(iVar7 + 0xcc) - *(int *)(iVar7 + 200));
      fVar3 = (fVar3 + fVar3) - _DAT_36223384;
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0xc4) = fVar3;
      fVar3 = (float)(int)(local_34.dwUpos - *(int *)(iVar7 + 0xe0)) /
              (float)(*(int *)(iVar7 + 0xe4) - *(int *)(iVar7 + 0xe0));
      fVar3 = _DAT_36223384 - (fVar3 + fVar3);
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0xdc) = fVar3;
      fVar3 = (float)(int)(local_34.dwVpos - *(int *)(iVar7 + 0xf8)) /
              (float)(*(int *)(iVar7 + 0xfc) - *(int *)(iVar7 + 0xf8));
      fVar3 = (fVar3 + fVar3) - _DAT_36223384;
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0xf4) = fVar3;
      fVar3 = (float)(int)(local_34.dwVpos - *(int *)(iVar7 + 0x110)) /
              (float)(*(int *)(iVar7 + 0x114) - *(int *)(iVar7 + 0x110));
      fVar3 = _DAT_36223384 - (fVar3 + fVar3);
      if (fVar3 < _DAT_3622376c) {
        fVar3 = _DAT_3622376c;
      }
      *(float *)(iVar7 + 0x10c) = fVar3;
      if (param_1 == 0) {
        iVar6 = 0x138;
        iVar7 = 2;
        do {
          iVar1 = iVar6 + -0x18 + *(int *)(unaff_ESI + 0x18);
          bVar2 = (byte)iVar7;
          if ((local_34.dwButtons & 1 << (bVar2 - 2 & 0x1f)) == 0) {
            *(undefined4 *)(iVar1 + 4) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 4) = 0x3f800000;
          }
          if ((1 << (bVar2 - 1 & 0x1f) & local_34.dwButtons) == 0) {
            *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar6 + 4) = 0;
          }
          else {
            *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar6 + 4) = 0x3f800000;
          }
          iVar1 = iVar6 + 0x18 + *(int *)(unaff_ESI + 0x18);
          if ((local_34.dwButtons & 1 << (bVar2 & 0x1f)) == 0) {
            *(undefined4 *)(iVar1 + 4) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 4) = 0x3f800000;
          }
          iVar1 = iVar6 + 0x30 + *(int *)(unaff_ESI + 0x18);
          if ((local_34.dwButtons & 1 << (bVar2 + 1 & 0x1f)) == 0) {
            *(undefined4 *)(iVar1 + 4) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 4) = 0x3f800000;
          }
          iVar1 = iVar6 + 0x48 + *(int *)(unaff_ESI + 0x18);
          if ((local_34.dwButtons & 1 << (bVar2 + 2 & 0x1f)) == 0) {
            *(undefined4 *)(iVar1 + 4) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 4) = 0x3f800000;
          }
          iVar1 = iVar6 + 0x60 + *(int *)(unaff_ESI + 0x18);
          if ((local_34.dwButtons & 1 << (bVar2 + 3 & 0x1f)) == 0) {
            *(undefined4 *)(iVar1 + 4) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 4) = 0x3f800000;
          }
          iVar1 = iVar6 + 0x78 + *(int *)(unaff_ESI + 0x18);
          if ((local_34.dwButtons & 1 << (bVar2 + 4 & 0x1f)) == 0) {
            *(undefined4 *)(iVar1 + 4) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 4) = 0x3f800000;
          }
          iVar1 = iVar6 + 0x90 + *(int *)(unaff_ESI + 0x18);
          if ((local_34.dwButtons & 1 << (bVar2 + 5 & 0x1f)) == 0) {
            *(undefined4 *)(iVar1 + 4) = 0;
          }
          else {
            *(undefined4 *)(iVar1 + 4) = 0x3f800000;
          }
          iVar1 = iVar7 + 6;
          iVar6 = iVar6 + 0xc0;
          iVar7 = iVar7 + 8;
        } while (iVar1 < 0x20);
        iVar7 = CInputDevice::HasJoystickPOV(unaff_ESI);
        if (iVar7 != 0) {
          if (local_34.dwPOV == 0) {
            *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x424) = 0x3f800000;
            return;
          }
          if (local_34.dwPOV == 9000) {
            *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x43c) = 0x3f800000;
            return;
          }
          if (local_34.dwPOV == 18000) {
            *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x454) = 0x3f800000;
            return;
          }
          if (local_34.dwPOV != 27000) {
            if (local_34.dwPOV == 0x1194) {
              *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x424) = 0x3f800000;
              *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x43c) = 0x3f800000;
              return;
            }
            if (local_34.dwPOV == 0x34bc) {
              *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x43c) = 0x3f800000;
              *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x454) = 0x3f800000;
              return;
            }
            if (local_34.dwPOV != 0x57e4) {
              if (local_34.dwPOV != 0x7b0c) {
                return;
              }
              *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x46c) = 0x3f800000;
              *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x424) = 0x3f800000;
              return;
            }
            *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x454) = 0x3f800000;
          }
          *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x46c) = 0x3f800000;
          return;
        }
      }
    }
    else if (DAT_362ba338 != 0) {
      iVar7 = iVar7 + -3;
      pcVar5 = Translate(s_ETRSJoystick__d_failed__disablin_362253b0,4);
      CPrintF(pcVar5,iVar7);
      CInputDevice::DisableDevice(unaff_ESI);
      return;
    }
  }
  return;
}

