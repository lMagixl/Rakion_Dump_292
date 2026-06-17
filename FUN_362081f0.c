
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_362081f0(int param_1,int param_2,double *param_3,int *param_4,int *param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double *pdVar24;
  double *pdVar25;
  int local_114;
  int *local_f4;
  uint uStack_b4;
  int local_90 [8];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  int local_48 [8];
  int aiStack_28 [9];
  
  local_f4 = (int *)0x40;
  if (param_2 == 0) {
    return (float10)_DAT_3624cda8;
  }
  _DAT_36387ae8 = (double)param_2;
  _DAT_36383d98 = _DAT_3624cdd0 / _DAT_36387ae8;
  _DAT_36386008 = *param_3;
  DAT_36386218 = _DAT_36386008;
  DAT_36386220 = _DAT_36386008;
  *param_5 = 0;
  if (1 < param_2) {
    iVar22 = param_2 + -1;
    pdVar25 = param_3;
    do {
      pdVar25 = pdVar25 + 1;
      if (*pdVar25 < DAT_36386218) {
        DAT_36386218 = *pdVar25;
      }
      if (DAT_36386220 < *pdVar25) {
        DAT_36386220 = *pdVar25;
      }
      _DAT_36386008 = _DAT_36386008 + *pdVar25;
      iVar22 = iVar22 + -1;
      *param_5 = 0;
    } while (iVar22 != 0);
  }
  _DAT_36386008 = _DAT_36386008 * _DAT_36383d98;
  if (0 < param_2) {
    pdVar25 = (double *)&DAT_36386010;
    iVar22 = param_2;
    do {
      iVar22 = iVar22 + -1;
      *pdVar25 = *(double *)((int)(param_3 + -0x6c70c02) + (int)pdVar25) - _DAT_36386008;
      pdVar25 = pdVar25 + 1;
    } while (iVar22 != 0);
  }
  DAT_36386218 = DAT_36386218 - _DAT_36386008;
  iVar22 = param_1 + -1;
  DAT_36386220 = DAT_36386220 - _DAT_36386008;
  do {
    bVar17 = true;
    local_114 = 0;
    if (0 < iVar22) {
      dVar5 = DAT_36386220 - DAT_36386218;
      piVar18 = local_90;
      for (iVar20 = iVar22; pdVar25 = (double *)&DAT_36387aa8, iVar20 != 0; iVar20 = iVar20 + -1) {
        *piVar18 = 0;
        piVar18 = piVar18 + 1;
      }
      do {
        dVar6 = (double)local_114;
        local_114 = local_114 + 1;
        *pdVar25 = (dVar6 + _DAT_3624cd88) * (dVar5 / (double)iVar22) + DAT_36386218;
        pdVar25 = pdVar25 + 1;
      } while (local_114 < iVar22);
    }
    local_90[param_1 + -1] = 0;
    if (0 < param_2) {
      pdVar25 = (double *)&DAT_36386010;
      piVar18 = param_5;
      iVar20 = param_2;
      do {
        iVar21 = 0;
        if (0 < iVar22) {
          pdVar24 = (double *)&DAT_36387aa8;
          do {
            if (*pdVar25 < *pdVar24) break;
            iVar21 = iVar21 + 1;
            pdVar24 = pdVar24 + 1;
          } while (iVar21 < iVar22);
        }
        iVar23 = local_90[iVar21];
        iVar1 = *piVar18;
        *piVar18 = iVar21;
        local_90[iVar21] = iVar23 + 1;
        bVar17 = (bool)(bVar17 & iVar1 == iVar21);
        pdVar25 = pdVar25 + 1;
        piVar18 = piVar18 + 1;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    iVar20 = 0;
    local_114 = 0;
    if (0 < param_1) {
      piVar18 = local_90;
      iVar21 = param_1;
      do {
        iVar20 = iVar20 + (uint)(*piVar18 != 0);
        piVar18 = piVar18 + 1;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
      local_114 = iVar20;
      if (iVar20 == 1) goto LAB_36208adc;
    }
    _DAT_36387ae0 = 0.0;
    _DAT_36387d48 = 0.0;
    _DAT_36387d78 = 0.0;
    if (0 < param_2) {
      piVar18 = param_5;
      pdVar25 = (double *)&DAT_36386010;
      iVar20 = param_2;
      do {
        iVar20 = iVar20 + -1;
        _DAT_36387d78 = (double)*piVar18 * *pdVar25 + _DAT_36387d78;
        _DAT_36387d48 = (double)*piVar18 + _DAT_36387d48;
        _DAT_36387ae0 = (double)*piVar18 * (double)*piVar18 + _DAT_36387ae0;
        piVar18 = piVar18 + 1;
        pdVar25 = pdVar25 + 1;
      } while (iVar20 != 0);
    }
    _DAT_36387d48 = _DAT_36387d48 * _DAT_36383d98;
    _DAT_36387ae0 = _DAT_36387ae0 - _DAT_36387d48 * _DAT_36387d48 * _DAT_36387ae8;
    dVar5 = -_DAT_36387d48;
    dVar13 = (double)param_1 - _DAT_3624cdd0;
    dVar11 = dVar13 - _DAT_36387d48;
    dVar7 = _DAT_36387ae8 * dVar5 * dVar5 + _DAT_36387ae0;
    dVar2 = _DAT_36387ae8 * dVar11 * dVar5 + _DAT_36387ae0;
    dVar3 = _DAT_36387ae8 * dVar11 * dVar11 + _DAT_36387ae0;
    dVar4 = dVar3 * dVar7;
    local_68 = dVar13 * dVar13;
    dVar15 = local_68 * _DAT_36387ae0 * dVar4 * dVar4;
    local_70 = _DAT_3624cdd0 - _DAT_36386008;
    dVar6 = _DAT_36387d78 * dVar5;
    dVar12 = _DAT_36387d78 * dVar11;
    dVar10 = -(_DAT_36387ae0 * _DAT_36386008) - dVar6;
    dVar14 = local_70 * _DAT_36387ae0 - dVar6;
    dVar8 = (-(_DAT_36387ae0 * _DAT_36386008) - dVar12) * dVar7;
    dVar7 = (local_70 * _DAT_36387ae0 - dVar12) * dVar7;
    dVar9 = (ABS(dVar10) + dVar10 + (dVar14 - ABS(dVar14))) * _DAT_3624cd88 * dVar2;
    _DAT_36383f20 = DAT_36386218._0_4_;
    _DAT_36383f24 = DAT_36386218._4_4_;
    _DAT_36383f28 = DAT_36386220._0_4_;
    _DAT_36383f2c = DAT_36386220._4_4_;
    dVar7 = (ABS(dVar8 - dVar9) + dVar8 + (dVar7 - ABS(dVar7 - dVar9))) * _DAT_3624cd88;
    dVar2 = dVar7 * dVar2;
    dVar7 = dVar7 * dVar3;
    dVar2 = (ABS(dVar10 * dVar4 - dVar2) + dVar10 * dVar4 +
            (dVar14 * dVar4 - ABS(dVar14 * dVar4 - dVar2))) * _DAT_3624cd88;
    dVar5 = dVar7 * dVar5 - dVar2 * dVar11;
    dVar5 = (_DAT_36387ae8 * dVar5 * dVar5 + _DAT_36387ae0 * (dVar2 - dVar7) * (dVar2 - dVar7)) -
            _DAT_36387d78 * _DAT_36387d78 * dVar15;
    dVar15 = _DAT_36387ae0 * dVar15;
    DAT_36386218 = (dVar2 / dVar4 + dVar6) / _DAT_36387ae0;
    DAT_36386220 = (dVar7 / dVar4 + dVar12) / _DAT_36387ae0;
    _DAT_363840c8 = dVar15;
    _DAT_36388150 = dVar5;
    if (local_f4 == (int *)0x0) goto LAB_36208adc;
    if (bVar17) {
      if (0 < param_1) {
        piVar18 = local_48;
        for (iVar20 = param_1; iVar20 != 0; iVar20 = iVar20 + -1) {
          *piVar18 = -1;
          piVar18 = piVar18 + 1;
        }
      }
      iVar20 = 0;
      if (0 < param_2) {
        pdVar25 = (double *)&DAT_36386010;
        piVar18 = param_5;
        do {
          iVar21 = *piVar18;
          if (local_48[iVar21] == -1) {
            aiStack_28[iVar21] = iVar20;
            local_48[iVar21] = iVar20;
          }
          else {
            if (*pdVar25 < (double)(&DAT_36386010)[local_48[iVar21]]) {
              local_48[iVar21] = iVar20;
            }
            if ((double)(&DAT_36386010)[aiStack_28[iVar21]] < *pdVar25) {
              aiStack_28[iVar21] = iVar20;
            }
          }
          iVar20 = iVar20 + 1;
          piVar18 = piVar18 + 1;
          pdVar25 = pdVar25 + 1;
        } while (iVar20 < param_2);
      }
      iVar20 = 0;
      local_50 = _DAT_36387ae0 + _DAT_3624cdd0;
      do {
        uStack_b4 = 0x3ff00000;
        if (iVar20 != 0) {
          uStack_b4 = 0xbff00000;
        }
        dVar6 = _DAT_36383d98 * (double)((ulonglong)uStack_b4 << 0x20) + _DAT_36387d48;
        dVar2 = _DAT_36387d48 * (double)((ulonglong)uStack_b4 << 0x20);
        local_58 = ((_DAT_36387ae0 + _DAT_3624cdd0) - (dVar2 + dVar2)) - _DAT_36383d98;
        if (iVar20 < iVar22 + iVar20) {
          piVar18 = local_90 + iVar20;
          iVar21 = iVar20;
          do {
            if ((*piVar18 != 0) && ((1 < *piVar18 || (2 < local_114)))) {
              dVar7 = (double)((ulonglong)uStack_b4 << 0x20) *
                      (double)(&DAT_36386010)[aiStack_28[iVar21 + iVar20 * -8]] + _DAT_36387d78;
              dVar2 = (double)iVar21 * (double)((ulonglong)uStack_b4 << 0x20);
              dVar2 = dVar2 + dVar2 + local_58;
              dVar3 = -dVar6;
              dVar4 = dVar13 - dVar6;
              dVar8 = dVar3 * dVar3 * _DAT_36387ae8 + dVar2;
              dVar10 = dVar4 * dVar3 * _DAT_36387ae8 + dVar2;
              dVar16 = dVar4 * dVar4 * _DAT_36387ae8 + dVar2;
              dVar9 = dVar16 * dVar8;
              _DAT_363840c8 = local_68 * dVar9 * dVar9 * dVar2;
              dVar12 = -(dVar2 * _DAT_36386008) - dVar3 * dVar7;
              dVar14 = local_70 * dVar2 - dVar3 * dVar7;
              local_60 = (-(dVar2 * _DAT_36386008) - dVar4 * dVar7) * dVar8;
              dVar8 = (local_70 * dVar2 - dVar4 * dVar7) * dVar8;
              dVar11 = (ABS(dVar12) + dVar12 + (dVar14 - ABS(dVar14))) * _DAT_3624cd88 * dVar10;
              dVar8 = (ABS(local_60 - dVar11) + local_60 + (dVar8 - ABS(dVar8 - dVar11))) *
                      _DAT_3624cd88;
              dVar10 = dVar8 * dVar10;
              dVar8 = dVar8 * dVar16;
              dVar10 = (ABS(dVar12 * dVar9 - dVar10) + dVar12 * dVar9 +
                       (dVar14 * dVar9 - ABS(dVar14 * dVar9 - dVar10))) * _DAT_3624cd88;
              dVar11 = dVar8 * dVar3 - dVar10 * dVar4;
              _DAT_36388150 =
                   ((dVar10 - dVar8) * (dVar10 - dVar8) * dVar2 + dVar11 * dVar11 * _DAT_36387ae8) -
                   _DAT_363840c8 * dVar7 * dVar7;
              _DAT_363840c8 = _DAT_363840c8 * dVar2;
              if (_DAT_36388150 * dVar15 < _DAT_363840c8 * dVar5) {
                DAT_36386218 = (dVar3 * dVar7 + dVar10 / dVar9) / dVar2;
                DAT_36386220 = (dVar4 * dVar7 + dVar8 / dVar9) / dVar2;
                goto LAB_3620831f;
              }
            }
            iVar21 = iVar21 + 1;
            piVar18 = piVar18 + 1;
          } while (iVar21 < iVar20 + -1 + param_1);
        }
        iVar20 = iVar20 + 1;
        _DAT_363840c8 = dVar15;
        _DAT_36388150 = dVar5;
      } while (iVar20 < 2);
LAB_36208adc:
      piVar18 = local_90;
      pdVar25 = &DAT_36386218;
      do {
        floor((_DAT_36386008 + *pdVar25) * _DAT_3624cf88 + _DAT_3624cd88);
        iVar20 = ftol();
        *piVar18 = iVar20;
        if (iVar20 < 0) {
          iVar20 = 0;
        }
        else if (0xff < iVar20) {
          iVar20 = 0xff;
        }
        *piVar18 = iVar20;
        pdVar25 = pdVar25 + 1;
        piVar18 = piVar18 + 1;
      } while ((int)pdVar25 < 0x36386228);
      iVar20 = 2;
      if (2 < param_1) {
        iVar21 = param_1 + -2;
        iVar23 = iVar21 / 2;
        piVar18 = local_90 + 2;
        do {
          iVar1 = iVar20 + -1;
          iVar19 = iVar21 * local_90[0];
          iVar20 = iVar20 + 1;
          iVar21 = iVar21 + -1;
          *piVar18 = (iVar19 + iVar23 + iVar1 * local_90[1]) / iVar22;
          piVar18 = piVar18 + 1;
        } while (iVar20 < param_1);
      }
      *param_4 = local_90[0];
      param_4[1] = local_90[1];
      _DAT_36388248 = 0.0;
      if (0 < param_2) {
        local_f4 = param_5;
        local_114 = param_2;
        do {
          iVar20 = 1;
          iVar22 = 0;
          if (1 < param_1) {
            iVar21 = 0;
            do {
              if (ABS((double)local_90[iVar20] - *param_3 * _DAT_3624cf88) <
                  ABS((double)*(int *)((int)local_90 + iVar21) - *param_3 * _DAT_3624cf88)) {
                iVar22 = iVar20;
                iVar21 = iVar20 * 4;
              }
              iVar20 = iVar20 + 1;
            } while (iVar20 < param_1);
          }
          iVar20 = local_90[iVar22];
          *local_f4 = iVar22;
          local_f4 = local_f4 + 1;
          local_114 = local_114 + -1;
          dVar5 = (double)iVar20 - *param_3 * _DAT_3624cf88;
          _DAT_36388248 = dVar5 * dVar5 + _DAT_36388248;
          param_3 = param_3 + 1;
        } while (local_114 != 0);
      }
      return (float10)_DAT_36388248;
    }
LAB_3620831f:
    local_f4 = (int *)((int)local_f4 + -1);
  } while( true );
}

