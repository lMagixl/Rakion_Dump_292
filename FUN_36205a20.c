
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
FUN_36205a20(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,int param_7,
            int param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 *puVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  int *local_9c;
  double *local_6c;
  double *local_34;
  double *local_24;
  int local_18 [5];
  
  iVar23 = 0;
  if (0 < param_2) {
    puVar20 = &DAT_36383f48;
    puVar26 = &DAT_36388168;
    local_9c = (int *)param_2;
    do {
      iVar24 = 0;
      puVar21 = puVar20;
      do {
        puVar20 = puVar21 + 1;
        iVar25 = iVar24 + *param_5 * 3;
        iVar24 = iVar24 + 1;
        *(undefined4 *)puVar21 = *(undefined4 *)(param_3 + iVar25 * 8);
        *(undefined4 *)((int)puVar21 + 4) = *(undefined4 *)(param_3 + 4 + iVar25 * 8);
        iVar25 = *param_5;
        *(undefined4 *)puVar26 = *(undefined4 *)(param_4 + iVar25 * 8);
        *(undefined4 *)((int)puVar26 + 4) = *(undefined4 *)(param_4 + 4 + iVar25 * 8);
        puVar21 = puVar20;
      } while (iVar24 < 3);
      param_5 = param_5 + 1;
      puVar26 = puVar26 + 1;
      local_9c = (int *)((int)local_9c + -1);
    } while (local_9c != (int *)0x0);
  }
  local_6c = (double *)(&DAT_36388168 + param_2);
  _DAT_36387e50 = 0.0;
  _DAT_36387e48 = 0.0;
  _DAT_36387e40 = 0.0;
  _DAT_36388260 = 0.0;
  _DAT_36387e20 = 0.0;
  local_9c = (int *)param_2;
  pdVar19 = (double *)(&DAT_36383f50 + param_2 * 6);
  while( true ) {
    _DAT_36388250 = _DAT_36388260;
    _DAT_36387e38 = _DAT_36387e50;
    _DAT_36387e30 = _DAT_36387e48;
    _DAT_36387e28 = _DAT_36387e40;
    _DAT_36387e10 = _DAT_36387e20;
    local_24 = (double *)(&DAT_36388168 + param_2);
    iVar24 = param_2;
    local_34 = (double *)(&DAT_36383f50 + param_2 * 6);
    while( true ) {
      _DAT_36388258 = _DAT_36388260;
      _DAT_36387e18 = _DAT_36387e20;
      pdVar18 = (double *)(&DAT_36388168 + param_2);
      iVar25 = param_2;
      while( true ) {
        dVar6 = -_DAT_36388260;
        dVar7 = (double)iVar23;
        dVar1 = dVar7 - _DAT_36388260;
        dVar8 = dVar6 * dVar6 + _DAT_36387e20;
        dVar9 = dVar1 * dVar6 + _DAT_36387e20;
        dVar10 = dVar1 * dVar1 + _DAT_36387e20;
        dVar11 = dVar10 * dVar8;
        dVar7 = dVar7 * dVar7 * _DAT_36387e20 * dVar11 * dVar11;
        pdVar16 = (double *)&DAT_36387e58;
        dVar2 = _DAT_3624cda8;
        do {
          dVar3 = _DAT_36387e20 * *(double *)(param_6 + -0x36387e58 + (int)pdVar16);
          dVar12 = _DAT_36387e20 * *(double *)(param_6 + -0x36387e40 + (int)pdVar16);
          dVar13 = dVar3 - dVar6 * *pdVar16;
          dVar14 = dVar12 - dVar6 * *pdVar16;
          dVar4 = (dVar3 - dVar1 * *pdVar16) * dVar8;
          dVar12 = (dVar12 - dVar1 * *pdVar16) * dVar8;
          dVar3 = (ABS(dVar13) + dVar13 + (dVar14 - ABS(dVar14))) * _DAT_3624cd88 * dVar9;
          dVar12 = (ABS(dVar4 - dVar3) + dVar4 + (dVar12 - ABS(dVar12 - dVar3))) * _DAT_3624cd88;
          dVar3 = dVar12 * dVar9;
          dVar12 = dVar12 * dVar10;
          dVar3 = (ABS(dVar13 * dVar11 - dVar3) + dVar13 * dVar11 +
                  (dVar14 * dVar11 - ABS(dVar14 * dVar11 - dVar3))) * _DAT_3624cd88;
          dVar4 = dVar3 - dVar12;
          pdVar17 = pdVar16 + 1;
          dVar3 = dVar12 * dVar6 - dVar3 * dVar1;
          dVar2 = ((dVar3 * dVar3 + _DAT_36387e20 * dVar4 * dVar4) - *pdVar16 * *pdVar16 * dVar7) +
                  dVar2;
          pdVar16 = pdVar17;
        } while ((int)pdVar17 < 0x36387e70);
        dVar7 = _DAT_36387e20 * dVar7;
        if (_DAT_362afea0 * dVar2 <= _DAT_363883f0 * dVar7) {
          local_18[0] = (int)local_9c;
          _DAT_363883f0 = dVar2;
          local_18[1] = iVar24;
          local_18[2] = iVar25;
          _DAT_362afea0 = dVar7;
        }
        iVar25 = iVar25 + -1;
        pdVar18 = pdVar18 + -1;
        if ((iVar25 < iVar24) || (*param_1 < 3)) break;
        iVar23 = 3;
        _DAT_36387e20 =
             ((_DAT_3624cdb0 - (_DAT_36388260 + _DAT_36388260)) - *pdVar18) * *pdVar18 +
             _DAT_36387e20;
        _DAT_36388260 = _DAT_36388260 + *pdVar18;
      }
      iVar24 = iVar24 + -1;
      local_24 = local_24 + -1;
      if (iVar24 < (int)local_9c) break;
      _DAT_36387e40 = _DAT_36387e40 + local_34[-4];
      iVar23 = 2;
      _DAT_36387e48 = _DAT_36387e48 + local_34[-3];
      _DAT_36387e50 = _DAT_36387e50 + local_34[-2];
      _DAT_36387e20 =
           ((_DAT_3624cda0 - (_DAT_36388258 + _DAT_36388258)) - *local_24) * *local_24 +
           _DAT_36387e18;
      _DAT_36388260 = _DAT_36388258 + *local_24;
      local_34 = local_34 + -3;
    }
    local_9c = (int *)((int)local_9c + -1);
    local_6c = local_6c + -1;
    if ((int)local_9c < 1) break;
    _DAT_36387e40 = _DAT_36387e28 + pdVar19[-4];
    iVar23 = 1;
    _DAT_36387e48 = _DAT_36387e30 + pdVar19[-3];
    _DAT_36387e50 = _DAT_36387e38 + pdVar19[-2];
    _DAT_36387e20 =
         ((_DAT_3624cdd0 - (_DAT_36388250 + _DAT_36388250)) - *local_6c) * *local_6c + _DAT_36387e10
    ;
    _DAT_36388260 = _DAT_36388250 + *local_6c;
    pdVar19 = pdVar19 + -3;
  }
  iVar24 = 0;
  local_9c = local_18;
  iVar25 = 0;
  iVar23 = 0;
  _DAT_36387e20 = _DAT_3624cda8;
  _DAT_36388260 = _DAT_3624cda8;
  _DAT_36387e68 = _DAT_3624cda8;
  DAT_36387e60 = _DAT_3624cda8;
  _DAT_36387e58 = _DAT_3624cda8;
  do {
    iVar5 = *local_9c;
    if (iVar25 < iVar5) {
      dVar6 = (double)iVar24;
      pdVar19 = (double *)(&DAT_36388168 + iVar25);
      iVar15 = iVar25 * 6;
      iVar22 = iVar5 - iVar25;
      iVar25 = iVar25 + iVar22;
      pdVar18 = (double *)(&DAT_36383f50 + iVar15);
      do {
        dVar1 = *pdVar19;
        pdVar19 = pdVar19 + 1;
        iVar22 = iVar22 + -1;
        _DAT_36388260 = dVar6 * dVar1 + _DAT_36388260;
        _DAT_36387e20 = dVar6 * dVar6 * dVar1 + _DAT_36387e20;
        _DAT_36387e58 = dVar6 * pdVar18[-1] + _DAT_36387e58;
        DAT_36387e60 = dVar6 * *pdVar18 + DAT_36387e60;
        _DAT_36387e68 = dVar6 * pdVar18[1] + _DAT_36387e68;
        pdVar18 = pdVar18 + 3;
      } while (iVar22 != 0);
    }
    iVar23 = iVar23 + (uint)(iVar5 != param_2);
    iVar24 = iVar24 + 1;
    local_9c = local_9c + 1;
  } while (iVar24 < 4);
  _DAT_36387e20 = _DAT_36387e20 - _DAT_36388260 * _DAT_36388260;
  dVar6 = -_DAT_36388260;
  dVar7 = (double)iVar23;
  dVar1 = dVar7 - _DAT_36388260;
  dVar8 = dVar6 * dVar6 + _DAT_36387e20;
  dVar9 = dVar1 * dVar6 + _DAT_36387e20;
  dVar10 = dVar1 * dVar1 + _DAT_36387e20;
  dVar11 = dVar10 * dVar8;
  dVar7 = dVar7 * dVar7 * dVar11 * dVar11 * _DAT_36387e20;
  fVar27 = (float10)_DAT_3624cda8;
  pdVar19 = (double *)&DAT_36387e58;
  pdVar18 = (double *)(param_7 + 0x18);
  do {
    fVar28 = (float10)_DAT_36387e20 * (float10)*(double *)((int)pdVar19 + param_6 + -0x36387e58);
    dVar4 = _DAT_36387e20 * *(double *)((param_6 - param_7) + (int)pdVar18);
    fVar29 = (float10)dVar6 * (float10)*pdVar19;
    dVar2 = (double)(fVar28 - fVar29);
    dVar3 = (double)((float10)dVar4 - fVar29);
    fVar28 = (fVar28 - (float10)(dVar1 * *pdVar19)) * (float10)dVar8;
    fVar30 = ((float10)dVar4 - (float10)(dVar1 * *pdVar19)) * (float10)dVar8;
    fVar31 = (ABS((float10)dVar2) + (float10)dVar2 + ((float10)dVar3 - ABS((float10)dVar3))) *
             (float10)_DAT_3624cd88 * (float10)dVar9;
    fVar28 = (ABS(fVar28 - fVar31) + fVar28 + (fVar30 - ABS(fVar30 - fVar31))) *
             (float10)_DAT_3624cd88;
    dVar4 = (double)(fVar28 * (float10)dVar9);
    fVar28 = fVar28 * (float10)dVar10;
    fVar30 = (ABS((float10)(dVar2 * dVar11) - (float10)dVar4) + (float10)(dVar2 * dVar11) +
             ((float10)(dVar3 * dVar11) - ABS((float10)(dVar3 * dVar11) - (float10)dVar4))) *
             (float10)_DAT_3624cd88;
    pdVar16 = pdVar19 + 1;
    fVar31 = fVar28 * (float10)dVar6 - fVar30 * (float10)dVar1;
    fVar27 = ((fVar31 * fVar31 + (fVar30 - fVar28) * (fVar30 - fVar28) * (float10)_DAT_36387e20) -
             (float10)*pdVar19 * (float10)*pdVar19 * (float10)dVar7) + fVar27;
    pdVar18[-3] = (double)((fVar30 / (float10)dVar11 + (float10)(double)fVar29) /
                          (float10)_DAT_36387e20);
    *pdVar18 = (double)((fVar28 / (float10)dVar11 + (float10)dVar1 * (float10)*pdVar19) /
                       (float10)_DAT_36387e20);
    *(undefined4 *)((int)pdVar19 + param_8 + -0x36387e58) = *(undefined4 *)pdVar19;
    *(undefined4 *)((int)pdVar19 + param_8 + -0x36387e54) = *(undefined4 *)((int)pdVar19 + 4);
    pdVar19 = pdVar16;
    pdVar18 = pdVar18 + 1;
  } while ((int)pdVar16 < 0x36387e70);
  iVar24 = 1;
  if ((char)((local_18[1] != local_18[2]) + (local_18[2] != param_2) + (local_18[0] != local_18[1]))
      != '\x01') {
    iVar24 = iVar23;
  }
  *param_1 = iVar24;
  return fVar27 / ((float10)dVar7 * (float10)_DAT_36387e20);
}

