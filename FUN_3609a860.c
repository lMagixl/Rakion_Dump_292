
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3609a860(byte *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte in_AL;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  int local_1c;
  byte *local_18;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  
  iVar14 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar14 + 0x218) = *puVar6;
    *(undefined4 *)(iVar14 + 0x21c) = puVar6[1];
  }
  pcVar1 = *(char **)(DAT_362c9c80 + 100);
  pbVar2 = *(byte **)(DAT_362c9c80 + 0x68);
  if (param_1 == (byte *)0x0) {
    local_18 = (byte *)0x1;
    iVar14 = DAT_362c9c70;
    iVar10 = _DAT_362c9c6c;
    iVar11 = DAT_362c9c70;
    if (1 < _DAT_362c9c6c + -1) {
      do {
        local_1c = 0;
        if (0 < iVar14) {
          do {
            uVar9 = ((uint)pbVar2[iVar11 - iVar14] + (uint)pbVar2[iVar11 + -1] +
                     (uint)pbVar2[iVar14 + iVar11] + (uint)pbVar2[iVar11 + 1] >> 2) +
                    (uint)pbVar2[iVar11] >> 1;
            pcVar1[iVar11] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
            iVar11 = iVar11 + 1;
            local_1c = local_1c + 1;
            iVar14 = DAT_362c9c70;
            iVar10 = _DAT_362c9c6c;
          } while (local_1c < DAT_362c9c70);
        }
        local_18 = (byte *)((int)local_18 + 1);
      } while ((int)local_18 < iVar10 + -1);
    }
    local_10 = (byte *)(iVar14 + -2);
    if (0 < (int)local_10) {
      param_1 = pbVar2 + (iVar10 + -1) * iVar14 + 1;
      local_14 = pbVar2 + iVar14 + 1;
      pbVar12 = pbVar2;
      local_c = (byte *)pcVar1;
      do {
        local_c = local_c + 1;
        uVar9 = ((uint)pbVar12[2] + (uint)*pbVar12 + (uint)*param_1 + (uint)*local_14 >> 2) +
                (uint)pbVar12[1] >> 1;
        *local_c = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
        param_1 = param_1 + 1;
        local_14 = local_14 + 1;
        pbVar12 = pbVar12 + 1;
        local_10 = (byte *)((int)local_10 + -1);
        iVar14 = DAT_362c9c70;
      } while (local_10 != (byte *)0x0);
    }
    local_1c = iVar14 + -2;
    iVar10 = (_DAT_362c9c6c + -1) * iVar14;
    if (0 < local_1c) {
      local_10 = pbVar2 + iVar10;
      pcVar13 = pcVar1 + iVar10 + 1;
      local_c = pbVar2 + iVar10 + 2;
      local_14 = pbVar2 + (_DAT_362c9c6c + -2) * iVar14 + 1;
      local_18 = pbVar2;
      do {
        local_18 = local_18 + 1;
        uVar9 = ((uint)*local_c + (uint)*local_18 + (uint)*local_10 + (uint)*local_14 >> 2) +
                (uint)(byte)pcVar13[(int)pbVar2 - (int)pcVar1] >> 1;
        local_14 = local_14 + 1;
        *pcVar13 = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
        local_10 = local_10 + 1;
        local_c = local_c + 1;
        pcVar13 = pcVar13 + 1;
        local_1c = local_1c + -1;
        iVar14 = DAT_362c9c70;
      } while (local_1c != 0);
    }
    uVar9 = ((uint)pbVar2[(_DAT_362c9c6c + -1) * iVar14] + (uint)pbVar2[iVar14 + -1] +
             (uint)pbVar2[1] + (uint)pbVar2[iVar14] >> 2) + (uint)*pbVar2 >> 1;
    *pcVar1 = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
    uVar9 = ((uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] + (uint)pbVar2[DAT_362c9c70 * 2 + -1] +
             (uint)pbVar2[DAT_362c9c70 + -2] + (uint)*pbVar2 >> 2) + (uint)pbVar2[DAT_362c9c70 + -1]
            >> 1;
    pcVar1[DAT_362c9c70 + -1] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
    iVar14 = (_DAT_362c9c6c + -1) * DAT_362c9c70;
    uVar9 = ((uint)pbVar2[(_DAT_362c9c6c + -2) * DAT_362c9c70] +
             (uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] + (uint)pbVar2[iVar14 + 1] +
             (uint)*pbVar2 >> 2) + (uint)pbVar2[iVar14] >> 1;
    pcVar1[iVar14] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
    iVar14 = _DAT_362c9c6c * DAT_362c9c70;
    uVar9 = ((uint)pbVar2[DAT_362c9c70 + -1] + (uint)pbVar2[iVar14 + -2] +
             (uint)(pbVar2 + (_DAT_362c9c6c + -1) * DAT_362c9c70)[-1] +
             (uint)pbVar2[(_DAT_362c9c6c + -1) * DAT_362c9c70] >> 2) + (uint)pbVar2[iVar14 + -1];
  }
  else {
    if ((param_1 != (byte *)0x1) && (param_1 != (byte *)0x2)) {
      if ((param_1 == (byte *)0x3) || (param_1 == (byte *)0x4)) {
        local_14 = (byte *)DAT_362c9c70;
        local_18 = (byte *)0x1;
        iVar14 = DAT_362c9c70;
        iVar10 = _DAT_362c9c6c;
        iVar11 = DAT_362c9c70;
        if (1 < _DAT_362c9c6c + -1) {
          do {
            local_1c = 0;
            if (0 < iVar11) {
              do {
                uVar9 = ((uint)pbVar2[iVar14 - iVar11] + (uint)pbVar2[iVar14 + -1] +
                         (uint)pbVar2[iVar14 + 1] + (uint)pbVar2[iVar14 + iVar11] >> 2) +
                        (uint)pbVar2[iVar14] >> 1;
                pcVar1[iVar14 + iVar11] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
                iVar14 = (int)local_14 + 1;
                local_1c = local_1c + 1;
                iVar10 = _DAT_362c9c6c;
                iVar11 = DAT_362c9c70;
                local_14 = (byte *)iVar14;
              } while (local_1c < DAT_362c9c70);
            }
            local_18 = (byte *)((int)local_18 + 1);
          } while ((int)local_18 < iVar10 + -1);
        }
        if (param_1 == (byte *)0x4) {
          local_14 = (byte *)(iVar11 + -2);
          if (0 < (int)local_14) {
            local_c = pbVar2 + (iVar10 + -1) * iVar11 + 1;
            local_10 = (byte *)(pcVar1 + iVar11 + 1);
            pbVar12 = pbVar2;
            do {
              uVar9 = ((uint)local_10[(int)pbVar2 - (int)pcVar1] + (uint)*pbVar12 + (uint)pbVar12[2]
                       + (uint)*local_c >> 2) + (uint)pbVar12[1] >> 1;
              local_c = local_c + 1;
              *local_10 = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
              local_10 = local_10 + 1;
              local_14 = (byte *)((int)local_14 + -1);
              iVar10 = _DAT_362c9c6c;
              iVar11 = DAT_362c9c70;
              pbVar12 = pbVar12 + 1;
            } while (local_14 != (byte *)0x0);
          }
          local_1c = iVar11 + -2;
          iVar14 = (iVar10 + -1) * iVar11;
          if (0 < local_1c) {
            local_c = pbVar2 + (iVar10 + -2) * iVar11 + 1;
            local_18 = pbVar2 + iVar14 + 1;
            local_10 = pbVar2 + iVar14;
            local_14 = pbVar2 + iVar14 + 2;
            pcVar13 = pcVar1;
            do {
              pcVar13 = pcVar13 + 1;
              uVar9 = ((uint)(byte)pcVar13[(int)pbVar2 - (int)pcVar1] + (uint)*local_10 +
                       (uint)*local_c + (uint)*local_14 >> 2) + (uint)*local_18 >> 1;
              local_c = local_c + 1;
              *pcVar13 = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
              local_10 = local_10 + 1;
              local_14 = local_14 + 1;
              local_18 = local_18 + 1;
              local_1c = local_1c + -1;
              iVar11 = DAT_362c9c70;
            } while (local_1c != 0);
          }
          uVar9 = ((uint)pbVar2[(_DAT_362c9c6c + -1) * iVar11] + (uint)pbVar2[iVar11 + -1] +
                   (uint)pbVar2[1] + (uint)pbVar2[iVar11] >> 2) + (uint)*pbVar2 >> 1;
          pcVar1[iVar11] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
          uVar9 = ((uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] +
                   (uint)pbVar2[DAT_362c9c70 * 2 + -1] + (uint)pbVar2[DAT_362c9c70 + -2] +
                   (uint)*pbVar2 >> 2) + (uint)pbVar2[DAT_362c9c70 + -1] >> 1;
          pcVar1[DAT_362c9c70 * 2 + -1] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
          uVar9 = ((uint)pbVar2[(_DAT_362c9c6c + -2) * DAT_362c9c70] +
                   (uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] +
                   (uint)(pbVar2 + (_DAT_362c9c6c + -1) * DAT_362c9c70)[1] + (uint)*pbVar2 >> 2) +
                  (uint)pbVar2[(_DAT_362c9c6c + -1) * DAT_362c9c70] >> 1;
          *pcVar1 = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
          uVar9 = ((uint)pbVar2[DAT_362c9c70 + -1] + (uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -2]
                   + (uint)(pbVar2 + (_DAT_362c9c6c + -1) * DAT_362c9c70)[-1] +
                   (uint)pbVar2[(_DAT_362c9c6c + -1) * DAT_362c9c70] >> 2) +
                  (uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] >> 1;
          pcVar1[DAT_362c9c70 + -1] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
        }
      }
      goto LAB_3609b1a7;
    }
    local_18 = (byte *)0x1;
    iVar14 = DAT_362c9c70;
    iVar10 = DAT_362c9c70;
    if (1 < _DAT_362c9c6c + -1) {
      do {
        local_1c = 0;
        if (0 < iVar14) {
          do {
            uVar9 = ((uint)pbVar2[iVar10 + -1] + (uint)pbVar2[iVar14 + iVar10] +
                     (uint)pbVar2[iVar10 + 1] + (uint)pbVar2[iVar10 - iVar14] >> 2) +
                    (uint)pbVar2[iVar10] >> 1;
            pcVar1[iVar10 - iVar14] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
            iVar10 = iVar10 + 1;
            local_1c = local_1c + 1;
            iVar14 = DAT_362c9c70;
          } while (local_1c < DAT_362c9c70);
        }
        local_18 = (byte *)((int)local_18 + 1);
      } while ((int)local_18 < _DAT_362c9c6c + -1);
    }
    if (param_1 != (byte *)0x2) goto LAB_3609b1a7;
    local_14 = (byte *)(iVar14 + -2);
    if (0 < (int)local_14) {
      local_c = (byte *)(pcVar1 + (_DAT_362c9c6c + -1) * iVar14 + 1);
      local_10 = pbVar2 + iVar14 + 1;
      pbVar12 = pbVar2;
      do {
        uVar9 = ((uint)local_c[(int)pbVar2 - (int)pcVar1] + (uint)*pbVar12 + (uint)pbVar12[2] +
                 (uint)*local_10 >> 2) + (uint)pbVar12[1] >> 1;
        *local_c = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
        local_c = local_c + 1;
        local_10 = local_10 + 1;
        local_14 = (byte *)((int)local_14 + -1);
        iVar14 = DAT_362c9c70;
        pbVar12 = pbVar12 + 1;
      } while (local_14 != (byte *)0x0);
    }
    local_1c = iVar14 + -2;
    iVar10 = (_DAT_362c9c6c + -1) * iVar14;
    if (0 < local_1c) {
      local_18 = pbVar2 + iVar10 + 1;
      local_10 = pbVar2 + iVar10;
      pcVar13 = pcVar1 + (_DAT_362c9c6c + -2) * iVar14 + 1;
      local_14 = pbVar2 + iVar10 + 2;
      local_c = pbVar2;
      do {
        local_c = local_c + 1;
        uVar9 = ((uint)(byte)pcVar13[(int)pbVar2 - (int)pcVar1] + (uint)*local_10 + (uint)*local_14
                 + (uint)*local_c >> 2) + (uint)*local_18 >> 1;
        *pcVar13 = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
        pcVar13 = pcVar13 + 1;
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
        iVar14 = DAT_362c9c70;
      } while (local_1c != 0);
    }
    iVar10 = (_DAT_362c9c6c + -1) * iVar14;
    uVar9 = ((uint)pbVar2[iVar10] + (uint)pbVar2[iVar14 + -1] + (uint)pbVar2[1] +
             (uint)pbVar2[iVar14] >> 2) + (uint)*pbVar2 >> 1;
    pcVar1[iVar10] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
    uVar9 = ((uint)pbVar2[DAT_362c9c70 * 2 + -1] + (uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] +
             (uint)pbVar2[DAT_362c9c70 + -2] + (uint)*pbVar2 >> 2) + (uint)pbVar2[DAT_362c9c70 + -1]
            >> 1;
    pcVar1[_DAT_362c9c6c * DAT_362c9c70 + -1] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
    iVar14 = (_DAT_362c9c6c + -1) * DAT_362c9c70;
    iVar10 = (_DAT_362c9c6c + -2) * DAT_362c9c70;
    uVar9 = ((uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -1] + (uint)pbVar2[iVar10] +
             (uint)pbVar2[iVar14 + 1] + (uint)*pbVar2 >> 2) + (uint)pbVar2[iVar14] >> 1;
    pcVar1[iVar10] = (char)uVar9 - (char)(uVar9 >> (in_AL & 0x1f));
    iVar14 = (_DAT_362c9c6c + -1) * DAT_362c9c70;
    uVar9 = ((uint)pbVar2[DAT_362c9c70 + -1] + (uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -2] +
             (uint)pbVar2[iVar14 + -1] + (uint)pbVar2[iVar14] >> 2) +
            (uint)pbVar2[_DAT_362c9c6c * DAT_362c9c70 + -1];
  }
  pcVar1[iVar14 + -1] = (char)(uVar9 >> 1) - (char)((uVar9 >> 1) >> (in_AL & 0x1f));
LAB_3609b1a7:
  iVar14 = DAT_362c9c80;
  uVar3 = *(undefined4 *)(DAT_362c9c80 + 100);
  *(undefined4 *)(DAT_362c9c80 + 100) = *(undefined4 *)(DAT_362c9c80 + 0x68);
  *(undefined4 *)(iVar14 + 0x68) = uVar3;
  iVar14 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar9 = *puVar7;
    uVar4 = puVar7[1];
    uVar5 = *(uint *)(iVar14 + 0x220);
    uVar8 = uVar9 - *(uint *)(iVar14 + 0x218);
    *(uint *)(iVar14 + 0x220) = uVar5 + uVar8;
    *(uint *)(iVar14 + 0x224) =
         *(int *)(iVar14 + 0x224) +
         ((uVar4 - *(int *)(iVar14 + 0x21c)) - (uint)(uVar9 < *(uint *)(iVar14 + 0x218))) +
         (uint)CARRY4(uVar5,uVar8);
    *(undefined4 *)(iVar14 + 0x218) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x21c) = 0xffffffff;
  }
  return;
}

