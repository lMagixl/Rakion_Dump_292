
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36204c20(int param_1,int param_2,double *param_3)

{
  double dVar1;
  double *pdVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  DAT_36385f60 = 0.0;
  _DAT_36385f48 = 0.0;
  DAT_36385f40 = 0.0;
  _DAT_36385f30 = 0.0;
  DAT_36385f28 = 0.0;
  DAT_36385f20 = 0.0;
  if (0 < param_1) {
    pdVar5 = (double *)(param_2 + 0x10);
    do {
      param_1 = param_1 + -1;
      DAT_36385f20 = pdVar5[-2] * pdVar5[-2] + DAT_36385f20;
      DAT_36385f28 = pdVar5[-1] * pdVar5[-2] + DAT_36385f28;
      _DAT_36385f30 = pdVar5[-2] * *pdVar5 + _DAT_36385f30;
      DAT_36385f40 = pdVar5[-1] * pdVar5[-1] + DAT_36385f40;
      _DAT_36385f48 = pdVar5[-1] * *pdVar5 + _DAT_36385f48;
      DAT_36385f60 = *pdVar5 * *pdVar5 + DAT_36385f60;
      pdVar5 = pdVar5 + 3;
    } while (param_1 != 0);
  }
  iVar7 = 3;
  do {
    pdVar5 = &DAT_36385f20;
    iVar6 = 0;
    _DAT_36387e08 = DAT_36385f20 + DAT_36385f40 + DAT_36385f60;
    dVar1 = _DAT_3624cf90 / _DAT_36387e08;
    do {
      iVar4 = 3 - iVar6;
      pdVar2 = pdVar5;
      do {
        iVar4 = iVar4 + -1;
        *pdVar2 = dVar1 * *pdVar2;
        pdVar2 = pdVar2 + 1;
      } while (iVar4 != 0);
      pdVar5 = pdVar5 + 4;
      iVar6 = iVar6 + 1;
    } while ((int)pdVar5 < 0x36385f80);
    iVar6 = 4;
    do {
      DAT_363881e8 = DAT_36385f20 * DAT_36385f20 + _DAT_36385f30 * _DAT_36385f30 +
                     DAT_36385f28 * DAT_36385f28;
      DAT_363881f0 = _DAT_36385f30 * _DAT_36385f48 + (DAT_36385f20 + DAT_36385f40) * DAT_36385f28;
      DAT_363881f8 = DAT_36385f28 * _DAT_36385f48 + (DAT_36385f20 + DAT_36385f60) * _DAT_36385f30;
      _DAT_36388208 =
           DAT_36385f40 * DAT_36385f40 + _DAT_36385f48 * _DAT_36385f48 + DAT_36385f28 * DAT_36385f28
      ;
      _DAT_36388210 = DAT_36385f28 * _DAT_36385f30 + (DAT_36385f40 + DAT_36385f60) * _DAT_36385f48;
      _DAT_36388228 =
           DAT_36385f60 * DAT_36385f60 + _DAT_36385f48 * _DAT_36385f48 +
           _DAT_36385f30 * _DAT_36385f30;
      DAT_36385f20 = DAT_363881e8 * DAT_363881e8 + DAT_363881f0 * DAT_363881f0 +
                     DAT_363881f8 * DAT_363881f8;
      DAT_36385f28 = _DAT_36388210 * DAT_363881f8 + (_DAT_36388208 + DAT_363881e8) * DAT_363881f0;
      _DAT_36385f30 = _DAT_36388210 * DAT_363881f0 + (_DAT_36388228 + DAT_363881e8) * DAT_363881f8;
      DAT_36385f40 = _DAT_36388208 * _DAT_36388208 + _DAT_36388210 * _DAT_36388210 +
                     DAT_363881f0 * DAT_363881f0;
      iVar6 = iVar6 + -1;
      _DAT_36385f48 = DAT_363881f8 * DAT_363881f0 + (_DAT_36388228 + _DAT_36388208) * _DAT_36388210;
      DAT_36385f60 = _DAT_36388228 * _DAT_36388228 + _DAT_36388210 * _DAT_36388210 +
                     DAT_363881f8 * DAT_363881f8;
    } while (iVar6 != 0);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (DAT_36385f20 <= DAT_36385f40) {
    uVar3 = 1;
    if (DAT_36385f60 < DAT_36385f40) goto LAB_36204fb0;
  }
  else if (DAT_36385f60 < DAT_36385f20) {
    uVar3 = 0;
    goto LAB_36204fb0;
  }
  uVar3 = 2;
LAB_36204fb0:
  _DAT_36387af0 = _DAT_3624cdd0 / SQRT((&DAT_36385f20)[uVar3 * 4]);
  uVar8 = 0;
  if (uVar3 != 0) {
    pdVar5 = &DAT_363881e8 + uVar3;
    pdVar2 = param_3;
    uVar8 = uVar3;
    do {
      dVar1 = *pdVar5;
      pdVar5 = pdVar5 + 3;
      uVar8 = uVar8 - 1;
      *pdVar2 = _DAT_36387af0 * dVar1;
      pdVar2 = pdVar2 + 1;
    } while (uVar8 != 0);
    uVar8 = uVar3;
    if (2 < uVar3) {
      return;
    }
  }
  pdVar5 = &DAT_363881e8 + uVar8 + uVar3 * 3;
  iVar7 = 3 - uVar8;
  pdVar2 = param_3 + uVar8;
  do {
    dVar1 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    iVar7 = iVar7 + -1;
    *pdVar2 = _DAT_36387af0 * dVar1;
    pdVar2 = pdVar2 + 1;
  } while (iVar7 != 0);
  return;
}

