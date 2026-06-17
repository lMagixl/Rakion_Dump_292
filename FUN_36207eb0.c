
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36207eb0(float *param_1)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float *local_1d8;
  int local_1d4 [11];
  uint local_1a8;
  int local_1a4 [5];
  float local_190 [5];
  int local_17c [5];
  float local_168 [90];
  
  iVar7 = 0;
  local_190[1] = 8.40779e-45;
  local_190[2] = 8.40779e-45;
  local_190[3] = 8.40779e-45;
  local_190[4] = 8.40779e-45;
  iVar11 = 0;
  iVar10 = 0;
  iVar8 = 0;
  local_190[0] = 1.12104e-44;
  local_17c[0] = 0;
  local_17c[1] = 0;
  local_17c[2] = 1;
  local_17c[3] = 0;
  local_17c[4] = 1;
  local_1a4[0] = 0;
  local_1a4[1] = 0;
  local_1a4[2] = 0;
  local_1a4[3] = 1;
  local_1a4[4] = 1;
  local_1d4[4] = 0;
  local_1d4[0] = 0;
  local_1d4[1] = 0;
  local_1d4[2] = 0;
  local_1d4[3] = 0;
  if (0 < (int)*param_1) {
    pdVar9 = (double *)&DAT_36387ed0;
    pfVar6 = param_1;
    do {
      pfVar6 = pfVar6 + 1;
      iVar11 = iVar11 + 1;
      *pdVar9 = (double)*pfVar6;
      pdVar9 = pdVar9 + 1;
      (&DAT_36387f50)[iVar10] = (double)*pfVar6;
      iVar10 = iVar10 + 1;
      if (*pfVar6 != (float)_DAT_3624cda8) {
        *(double *)(&DAT_36387fd0 + local_1d4[2] * 8) = (double)*pfVar6;
        local_1d4[2] = local_1d4[2] + 1;
      }
      if (*pfVar6 != (float)_DAT_3624cdd0) {
        *(double *)(&DAT_36388050 + local_1d4[3] * 8) = (double)*pfVar6;
        local_1d4[3] = local_1d4[3] + 1;
      }
      if ((*pfVar6 != (float)_DAT_3624cda8) && (*pfVar6 != (float)_DAT_3624cdd0)) {
        (&DAT_363880d0)[iVar7] = (double)*pfVar6;
        iVar7 = iVar7 + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)*param_1);
    local_1d4[4] = iVar7;
    local_1d4[1] = iVar10;
    local_1d4[0] = iVar11;
  }
  if ((param_1[0x11] == 0.0) || (local_1d4[5] = 1, local_1d4[0] == local_1d4[2])) {
    local_1d4[5] = 0;
  }
  if ((param_1[0x12] == 0.0) || (local_1d4[6] = 1, local_1d4[0] == local_1d4[3])) {
    local_1d4[6] = 0;
  }
  local_1d4[7] = 1;
  local_1d4[9] = (uint)(local_1d4[2] != local_1d4[1]);
  local_1d4[8] = 1;
  pdVar9 = (double *)&DAT_36387ed0;
  local_1d8 = local_168 + 10;
  iVar7 = 0;
  local_1d4[10] = (uint)(local_1d4[3] != local_1d4[1]);
  local_1a8 = (uint)(local_1d4[4] != local_1d4[1]);
  iVar8 = 0;
  do {
    if (*(int *)((int)local_1d4 + iVar7 + 0x1c) != 0) {
      piVar5 = (int *)((int)local_168 + iVar8);
      fVar12 = FUN_362081f0(*(int *)((int)local_190 + iVar7),*(int *)((int)local_1d4 + iVar7),pdVar9
                            ,piVar5,(int *)local_1d8);
      *(double *)((int)&DAT_36387d80 + iVar8) = (double)fVar12;
      *(undefined4 *)((int)local_1d4 + iVar7 + 0x1c) = 1;
      if ((local_1d4[5] != 0) && (*(int *)((int)local_17c + iVar7) == 0)) {
        if ((*piVar5 == 0) || (*(int *)((int)local_168 + iVar8 + 4) == 0)) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        *(undefined4 *)((int)local_1d4 + iVar7 + 0x1c) = uVar3;
      }
      if ((local_1d4[6] != 0) && (*(int *)((int)local_1a4 + iVar7) == 0)) {
        if ((*piVar5 == 1) || (*(int *)((int)local_168 + iVar8 + 4) == 1)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        puVar1 = (uint *)((int)local_1d4 + iVar7 + 0x1c);
        *puVar1 = *puVar1 & uVar4;
      }
    }
    pdVar9 = pdVar9 + 0x10;
    local_1d8 = local_1d8 + 0x10;
    iVar8 = iVar8 + 8;
    iVar7 = iVar7 + 4;
  } while ((int)pdVar9 < 0x36388150);
  iVar7 = 0;
  piVar5 = local_1d4 + 7;
  do {
    if (*piVar5 != 0) break;
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar7 < 5);
  iVar8 = iVar7 + 1;
  if (iVar8 < 5) {
    iVar10 = iVar7 * 8;
    piVar5 = local_1d4 + iVar7 + 8;
    do {
      if ((*piVar5 != 0) &&
         ((double)(&DAT_36387d80)[iVar8] < *(double *)((int)&DAT_36387d80 + iVar10))) {
        iVar7 = iVar8;
        iVar10 = iVar8 * 8;
      }
      iVar8 = iVar8 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar8 < 5);
  }
  fVar2 = local_168[iVar7 * 2];
  iVar8 = 0;
  param_1[0x13] = local_190[iVar7];
  param_1[0x15] = local_168[iVar7 * 2 + 1];
  iVar10 = 0;
  param_1[0x14] = fVar2;
  if (0 < (int)*param_1) {
    pfVar6 = param_1 + 0x16;
    do {
      if ((pfVar6[-0x15] == (float)_DAT_3624cda8) && (local_17c[iVar7] != 0)) {
        *pfVar6 = 8.40779e-45;
      }
      else if ((pfVar6[-0x15] == (float)_DAT_3624cdd0) && (local_1a4[iVar7] != 0)) {
        *pfVar6 = 9.80909e-45;
      }
      else {
        iVar11 = iVar7 * 0x10 + iVar8;
        iVar8 = iVar8 + 1;
        *pfVar6 = local_168[iVar11 + 10];
      }
      iVar10 = iVar10 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar10 < (int)*param_1);
  }
  return;
}

