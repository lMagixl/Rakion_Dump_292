
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
FUN_36205330(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,int param_7)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  undefined8 *puVar16;
  double *pdVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  double *local_3c;
  double *local_38;
  double *local_24;
  int local_18 [5];
  
  if (0 < param_2) {
    puVar9 = &DAT_36384258;
    puVar16 = &DAT_36387cc0;
    local_38 = (double *)param_2;
    do {
      iVar13 = 0;
      puVar10 = puVar9;
      do {
        puVar9 = puVar10 + 1;
        iVar14 = iVar13 + *param_5 * 3;
        iVar13 = iVar13 + 1;
        *(undefined4 *)puVar10 = *(undefined4 *)(param_3 + iVar14 * 8);
        *(undefined4 *)((int)puVar10 + 4) = *(undefined4 *)(param_3 + 4 + iVar14 * 8);
        iVar14 = *param_5;
        *(undefined4 *)puVar16 = *(undefined4 *)(param_4 + iVar14 * 8);
        *(undefined4 *)((int)puVar16 + 4) = *(undefined4 *)(param_4 + 4 + iVar14 * 8);
        puVar10 = puVar9;
      } while (iVar13 < 3);
      param_5 = param_5 + 1;
      puVar16 = puVar16 + 1;
      local_38 = (double *)((int)local_38 + -1);
    } while (local_38 != (double *)0x0);
  }
  local_24 = (double *)(&DAT_36387cc0 + param_2);
  pdVar8 = (double *)(&DAT_36384260 + param_2 * 6);
  _DAT_36387b38 = 0.0;
  _DAT_36387b20 = 0.0;
  _DAT_36384418 = 0.0;
  _DAT_36384410 = 0.0;
  _DAT_36384408 = 0.0;
  iVar13 = param_2;
  pdVar7 = pdVar8;
  while( true ) {
    _DAT_36387b28 = _DAT_36387b38;
    _DAT_36387b10 = _DAT_36387b20;
    _DAT_363843e8 = _DAT_36384418;
    _DAT_363843e0 = _DAT_36384410;
    _DAT_363843d8 = _DAT_36384408;
    local_3c = (double *)(&DAT_36387cc0 + param_2);
    iVar14 = param_2;
    local_38 = pdVar8;
    while( true ) {
      _DAT_36387b30 = _DAT_36387b38;
      _DAT_36387b18 = _DAT_36387b20;
      _DAT_36384400 = _DAT_36384418;
      _DAT_363843f8 = _DAT_36384410;
      _DAT_363843f0 = _DAT_36384408;
      pdVar17 = (double *)(&DAT_36387cc0 + param_2);
      iVar11 = param_2;
      pdVar15 = pdVar8;
      while( true ) {
        dVar5 = (-(_DAT_36384408 * _DAT_36384408) - _DAT_36384410 * _DAT_36384410) -
                _DAT_36384418 * _DAT_36384418;
        if ((double)CONCAT44(_DAT_362afe9c,_DAT_362afe98) * dVar5 <= _DAT_363883e8 * _DAT_36387b20)
        {
          _DAT_362afe9c = DAT_36387b24;
          _DAT_362afe98 = DAT_36387b20;
          _DAT_363883e8 = dVar5;
          local_18[0] = iVar13;
          local_18[1] = iVar14;
          local_18[2] = iVar11;
        }
        iVar11 = iVar11 + -1;
        pdVar17 = pdVar17 + -1;
        if ((iVar11 < iVar14) || (*param_1 < 3)) break;
        _DAT_36384408 = _DAT_36384408 + pdVar15[-4];
        _DAT_36384410 = _DAT_36384410 + pdVar15[-3];
        _DAT_36384418 = _DAT_36384418 + pdVar15[-2];
        _DAT_36387b20 =
             ((_DAT_3624cdb0 - (_DAT_36387b38 + _DAT_36387b38)) - *pdVar17) * *pdVar17 +
             _DAT_36387b20;
        _DAT_36387b38 = _DAT_36387b38 + *pdVar17;
        pdVar15 = pdVar15 + -3;
      }
      iVar14 = iVar14 + -1;
      local_3c = local_3c + -1;
      if (iVar14 < iVar13) break;
      _DAT_36384408 = _DAT_363843f0 + local_38[-4];
      _DAT_36384410 = _DAT_363843f8 + local_38[-3];
      _DAT_36384418 = _DAT_36384400 + local_38[-2];
      _DAT_36387b20 =
           ((_DAT_3624cda0 - (_DAT_36387b30 + _DAT_36387b30)) - *local_3c) * *local_3c +
           _DAT_36387b18;
      _DAT_36387b38 = _DAT_36387b30 + *local_3c;
      local_38 = local_38 + -3;
    }
    iVar13 = iVar13 + -1;
    local_24 = local_24 + -1;
    if (iVar13 < 1) break;
    _DAT_36384408 = _DAT_363843d8 + pdVar7[-4];
    _DAT_36384410 = _DAT_363843e0 + pdVar7[-3];
    _DAT_36384418 = _DAT_363843e8 + pdVar7[-2];
    _DAT_36387b20 =
         ((_DAT_3624cdd0 - (_DAT_36387b28 + _DAT_36387b28)) - *local_24) * *local_24 + _DAT_36387b10
    ;
    _DAT_36387b38 = _DAT_36387b28 + *local_24;
    pdVar7 = pdVar7 + -3;
  }
  iVar13 = 0;
  local_38 = (double *)local_18;
  iVar14 = 0;
  local_3c = (double *)0x0;
  _DAT_36387b20 = _DAT_3624cda8;
  _DAT_36387b38 = _DAT_3624cda8;
  _DAT_36384418 = _DAT_3624cda8;
  _DAT_36384410 = _DAT_3624cda8;
  _DAT_36384408 = _DAT_3624cda8;
  do {
    iVar11 = *(int *)local_38;
    if (iVar14 < iVar11) {
      dVar5 = (double)iVar13;
      pdVar8 = (double *)(&DAT_36387cc0 + iVar14);
      iVar6 = iVar14 * 6;
      iVar12 = iVar11 - iVar14;
      iVar14 = iVar14 + iVar12;
      pdVar7 = (double *)(&DAT_36384260 + iVar6);
      do {
        dVar1 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        iVar12 = iVar12 + -1;
        _DAT_36387b38 = dVar5 * dVar1 + _DAT_36387b38;
        _DAT_36387b20 = dVar5 * dVar5 * dVar1 + _DAT_36387b20;
        _DAT_36384408 = dVar5 * pdVar7[-1] + _DAT_36384408;
        _DAT_36384410 = dVar5 * *pdVar7 + _DAT_36384410;
        _DAT_36384418 = dVar5 * pdVar7[1] + _DAT_36384418;
        pdVar7 = pdVar7 + 3;
      } while (iVar12 != 0);
    }
    local_3c = (double *)((int)local_3c + (uint)(iVar11 != param_2));
    iVar13 = iVar13 + 1;
    local_38 = (double *)((int)local_38 + 4);
  } while (iVar13 < 4);
  _DAT_36387b20 = _DAT_36387b20 - _DAT_36387b38 * _DAT_36387b38;
  dVar5 = -_DAT_36387b38;
  dVar1 = (double)(int)local_3c - _DAT_36387b38;
  fVar18 = (float10)_DAT_36384408;
  fVar2 = (float10)_DAT_36384408;
  fVar19 = (float10)_DAT_36384410;
  fVar3 = (float10)_DAT_36384410;
  fVar20 = (float10)_DAT_36384418;
  fVar4 = (float10)_DAT_36384418;
  pdVar8 = (double *)&DAT_36384408;
  do {
    pdVar7 = pdVar8 + 1;
    *(double *)(param_6 + -0x36384410 + (int)pdVar7) = (dVar5 * *pdVar8) / _DAT_36387b20;
    *(double *)(param_6 + -0x363843f8 + (int)pdVar7) = (dVar1 * *pdVar8) / _DAT_36387b20;
    *(undefined4 *)(param_7 + -0x36384410 + (int)pdVar7) = *(undefined4 *)pdVar8;
    *(undefined4 *)(param_7 + -0x3638440c + (int)pdVar7) = *(undefined4 *)((int)pdVar8 + 4);
    pdVar8 = pdVar7;
  } while ((int)pdVar7 < 0x36384420);
  iVar13 = 1;
  if ((char)((local_18[1] != local_18[2]) + (local_18[0] != local_18[1]) + (local_18[2] != param_2))
      != '\x01') {
    iVar13 = (int)local_3c;
  }
  *param_1 = iVar13;
  return ((-(fVar18 * fVar2) - fVar19 * fVar3) - fVar20 * fVar4) / (float10)_DAT_36387b20;
}

