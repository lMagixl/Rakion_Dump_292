
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36099c10(byte param_1)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  short *local_18;
  short *local_14;
  short *local_10;
  int local_c;
  
  bVar7 = param_1;
  iVar13 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar8 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar13 + 0x218) = *puVar8;
    *(undefined4 *)(iVar13 + 0x21c) = puVar8[1];
  }
  psVar1 = *(short **)(DAT_362c9c80 + 100);
  psVar2 = *(short **)(DAT_362c9c80 + 0x68);
  local_14 = (short *)(_DAT_362c9c6c + -2);
  iVar13 = DAT_362c9c70 + 1;
  iVar11 = DAT_362c9c70;
  local_10 = (short *)DAT_362c9c70;
  if (0 < (int)local_14) {
    do {
      iVar11 = (int)local_10;
      if (0 < (int)local_10) {
        psVar12 = psVar2 + iVar13 + 1;
        do {
          iVar11 = ((int)psVar2[iVar13 - iVar11] + (int)psVar2[iVar11 + iVar13] + (int)psVar12[-2] +
                    (int)*psVar12 >> 1) - (int)psVar1[iVar13];
          psVar12 = psVar12 + 1;
          psVar1[iVar13] = (short)iVar11 - (short)(iVar11 >> (param_1 & 0x1f));
          iVar13 = iVar13 + 1;
          local_10 = (short *)((int)local_10 + -1);
          iVar11 = DAT_362c9c70;
        } while (local_10 != (short *)0x0);
      }
      local_14 = (short *)((int)local_14 + -1);
      local_10 = (short *)iVar11;
    } while (local_14 != (short *)0x0);
  }
  local_14 = (short *)(iVar11 + -2);
  if (0 < (int)local_14) {
    _param_1 = psVar2 + (_DAT_362c9c6c + -1) * iVar11 + 1;
    local_18 = psVar2 + iVar11 + 1;
    psVar14 = psVar2;
    psVar12 = psVar1;
    do {
      psVar12 = psVar12 + 1;
      iVar13 = ((int)psVar14[2] + (int)*_param_1 + (int)*psVar14 + (int)*local_18 >> 1) -
               (int)*psVar12;
      psVar14 = psVar14 + 1;
      *psVar12 = (short)iVar13 - (short)(iVar13 >> (bVar7 & 0x1f));
      _param_1 = _param_1 + 1;
      local_18 = local_18 + 1;
      local_14 = (short *)((int)local_14 + -1);
      iVar11 = DAT_362c9c70;
    } while (local_14 != (short *)0x0);
  }
  local_c = iVar11 + -2;
  iVar13 = (_DAT_362c9c6c + -1) * iVar11;
  if (0 < local_c) {
    _param_1 = psVar2 + (_DAT_362c9c6c + -2) * iVar11 + 1;
    local_14 = psVar2 + iVar13;
    psVar12 = psVar1 + iVar13 + 1;
    local_10 = psVar2 + iVar13 + 2;
    local_18 = psVar2;
    do {
      local_18 = local_18 + 1;
      iVar13 = ((int)*local_10 + (int)*local_18 + (int)*local_14 + (int)*_param_1 >> 1) -
               (int)*psVar12;
      *psVar12 = (short)iVar13 - (short)(iVar13 >> (bVar7 & 0x1f));
      _param_1 = _param_1 + 1;
      local_14 = local_14 + 1;
      local_10 = local_10 + 1;
      psVar12 = psVar12 + 1;
      local_c = local_c + -1;
      iVar11 = DAT_362c9c70;
    } while (local_c != 0);
  }
  iVar13 = ((int)psVar2[(_DAT_362c9c6c + -1) * iVar11] + (int)psVar2[iVar11 + -1] + (int)psVar2[1] +
            (int)psVar2[iVar11] >> 1) - (int)*psVar1;
  *psVar1 = (short)iVar13 - (short)(iVar13 >> (bVar7 & 0x1f));
  iVar13 = ((int)psVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] + (int)psVar2[DAT_362c9c70 * 2 + -1] +
            (int)psVar2[DAT_362c9c70 + -2] + (int)*psVar2 >> 1) - (int)psVar1[DAT_362c9c70 + -1];
  psVar1[DAT_362c9c70 + -1] = (short)iVar13 - (short)(iVar13 >> (bVar7 & 0x1f));
  iVar11 = (_DAT_362c9c6c + -1) * DAT_362c9c70;
  iVar13 = ((int)psVar2[(_DAT_362c9c6c + -2) * DAT_362c9c70] +
            (int)psVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] + (int)psVar2[iVar11 + 1] + (int)*psVar2
           >> 1) - (int)psVar1[iVar11];
  psVar1[iVar11] = (short)iVar13 - (short)(iVar13 >> (bVar7 & 0x1f));
  iVar13 = DAT_362c9c80;
  iVar15 = _DAT_362c9c6c * DAT_362c9c70;
  iVar11 = ((int)psVar2[iVar15 + -2] + (int)psVar2[DAT_362c9c70 + -1] +
            (int)(psVar2 + (_DAT_362c9c6c + -1) * DAT_362c9c70)[-1] +
            (int)psVar2[(_DAT_362c9c6c + -1) * DAT_362c9c70] >> 1) - (int)psVar1[iVar15 + -1];
  psVar1[iVar15 + -1] = (short)iVar11 - (short)(iVar11 >> (bVar7 & 0x1f));
  uVar3 = *(undefined4 *)(iVar13 + 100);
  *(undefined4 *)(iVar13 + 100) = *(undefined4 *)(iVar13 + 0x68);
  *(undefined4 *)(iVar13 + 0x68) = uVar3;
  iVar13 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar4 = *puVar9;
    uVar5 = puVar9[1];
    uVar6 = *(uint *)(iVar13 + 0x220);
    uVar10 = uVar4 - *(uint *)(iVar13 + 0x218);
    *(uint *)(iVar13 + 0x220) = uVar6 + uVar10;
    *(uint *)(iVar13 + 0x224) =
         *(int *)(iVar13 + 0x224) +
         ((uVar5 - *(int *)(iVar13 + 0x21c)) - (uint)(uVar4 < *(uint *)(iVar13 + 0x218))) +
         (uint)CARRY4(uVar6,uVar10);
    *(undefined4 *)(iVar13 + 0x218) = 0xffffffff;
    *(undefined4 *)(iVar13 + 0x21c) = 0xffffffff;
  }
  return;
}

