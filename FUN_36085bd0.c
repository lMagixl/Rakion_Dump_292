
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36085bd0(undefined4 *param_1)

{
  int *piVar1;
  CGfxLibrary *pCVar2;
  int iVar3;
  ulonglong uVar4;
  HDC local_8 [2];
  
  pCVar2 = _pGfx;
  if (((byte)_pGfx[0xa54] & 4) == 0) {
    DAT_362c5484 = 0.0;
    DAT_362a41b0 = 1.0;
    DAT_362a41b4 = 1.0;
    DAT_362a41c0 = 1.0;
    DAT_362a41bc = 1.0;
    DAT_362a41b8 = 1.0;
    DAT_362a41c4 = 0x100;
    return;
  }
  if ((((_DAT_362c4d50 != DAT_362c5484) || (_DAT_362c4d4c != DAT_362a41b0)) ||
      (_DAT_362c4d48 != DAT_362a41b4)) ||
     (((DAT_362c4d38 != DAT_362a41c4 || (_DAT_362c4d44 != DAT_362a41b8)) ||
      ((_DAT_362c4d40 != DAT_362a41bc || (_DAT_362c4d3c != DAT_362a41c0)))))) {
    if (DAT_362c5484 < _DAT_3622dd08) {
      DAT_362c5484 = -0.8;
    }
    else if (DAT_362c5484 < _DAT_3622dd04 == (DAT_362c5484 == _DAT_3622dd04)) {
      DAT_362c5484 = 0.8;
    }
    if (DAT_362a41b0 < _DAT_362287a8) {
      DAT_362a41b0 = 0.2;
    }
    else if (DAT_362a41b0 < _DAT_3622879c == (DAT_362a41b0 == _DAT_3622879c)) {
      DAT_362a41b0 = 4.0;
    }
    if (DAT_362a41b4 < _DAT_362287a8) {
      DAT_362a41b4 = 0.2;
    }
    else if (DAT_362a41b4 < _DAT_3622879c == (DAT_362a41b4 == _DAT_3622879c)) {
      DAT_362a41b4 = 4.0;
    }
    if (DAT_362a41c4 < 2) {
      DAT_362a41c4 = 2;
    }
    else if (0x100 < DAT_362a41c4) {
      DAT_362a41c4 = 0x100;
    }
    if (DAT_362a41b8 < _DAT_3622376c) {
      DAT_362a41b8 = 0.0;
    }
    else if (DAT_362a41b8 < _DAT_36228798 == (DAT_362a41b8 == _DAT_36228798)) {
      DAT_362a41b8 = 2.0;
    }
    if (DAT_362a41bc < _DAT_3622376c) {
      DAT_362a41bc = 0.0;
    }
    else if (DAT_362a41bc < _DAT_36228798 == (DAT_362a41bc == _DAT_36228798)) {
      DAT_362a41bc = 2.0;
    }
    if (DAT_362a41c0 < _DAT_3622376c) {
      DAT_362a41c0 = 0.0;
    }
    else if (DAT_362a41c0 < _DAT_36228798 == (DAT_362a41c0 == _DAT_36228798)) {
      DAT_362a41c0 = 2.0;
    }
    _DAT_362c4d50 = DAT_362c5484;
    _DAT_362c4d4c = DAT_362a41b0;
    _DAT_362c4d48 = DAT_362a41b4;
    iVar3 = 0;
    _DAT_362c4d44 = DAT_362a41b8;
    _DAT_362c4d40 = DAT_362a41bc;
    _DAT_362c4d3c = DAT_362a41c0;
    local_8[0] = (HDC)(_DAT_36223384 / (_DAT_36228800 / (float)DAT_362a41c4));
    DAT_362c4d38 = DAT_362a41c4;
    do {
      _CIpow();
      FUN_361bfd6c();
      uVar4 = FUN_361bfd6c();
      (&DAT_362c4738)[iVar3] = (short)uVar4;
      uVar4 = FUN_361bfd6c();
      (&DAT_362c4938)[iVar3] = (short)uVar4;
      uVar4 = FUN_361bfd6c();
      (&DAT_362c4b38)[iVar3] = (short)uVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    iVar3 = *(int *)(pCVar2 + 0xa38);
    if (iVar3 == 0) {
      FUN_3609c160(local_8,(HWND)*param_1);
      SetDeviceGammaRamp(local_8[0],&DAT_362c4738);
      FUN_3609c180(local_8);
      return;
    }
    if (iVar3 == 1) {
      piVar1 = *(int **)(pCVar2 + 0xa5c);
      (**(code **)(*piVar1 + 0x48))(piVar1,0,&DAT_362c4738);
    }
  }
  return;
}

