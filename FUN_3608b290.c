
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_3608b290(int param_1,int param_2,int param_3,float *param_4,float *param_5,float *param_6,
            int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  float *pfVar21;
  float local_58;
  float *local_54;
  float *local_50;
  float local_4c;
  int local_48;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_28;
  float *local_1c;
  
  iVar10 = DAT_362c561c;
  pfVar11 = param_4;
  if (param_5[1] < param_4[1]) {
    pfVar11 = param_5;
    param_5 = param_4;
  }
  pfVar12 = pfVar11;
  if (param_6[1] < pfVar11[1]) {
    pfVar12 = param_6;
    param_6 = pfVar11;
  }
  pfVar11 = param_6;
  pfVar21 = param_5;
  if (param_6[1] < param_5[1]) {
    pfVar11 = param_5;
    pfVar21 = param_6;
  }
  fVar1 = pfVar21[1] - pfVar12[1];
  if (pfVar11[1] - pfVar12[1] != _DAT_3622376c) {
    fVar3 = _DAT_3622376c;
    if (fVar1 != _DAT_3622376c) {
      fVar3 = _DAT_36223384 / fVar1;
    }
    fVar4 = _DAT_3622376c;
    if (pfVar11[1] - pfVar21[1] != _DAT_3622376c) {
      fVar4 = _DAT_36223384 / (pfVar11[1] - pfVar21[1]);
    }
    local_48 = 1;
    fVar5 = _DAT_36223384 / (pfVar11[1] - pfVar12[1]);
    fVar3 = fVar3 * (*pfVar21 - *pfVar12);
    fVar4 = fVar4 * (*pfVar11 - *pfVar21);
    fVar6 = fVar5 * (*pfVar11 - *pfVar12);
    local_34 = (fVar6 * fVar1 + *pfVar12) - *pfVar21;
    if (_DAT_3622376c < local_34) {
      local_48 = -1;
    }
    local_28 = (int)ROUND(pfVar12[1] + _DAT_36227cf0);
    param_4 = (float *)(int)ROUND(pfVar21[1] + _DAT_36227cf0);
    iVar18 = (int)ROUND(pfVar11[1] + _DAT_36227cf0);
    if ((-1 < iVar18) && (local_28 < param_3)) {
      if (local_28 < 0) {
        local_28 = 0;
      }
      if (param_3 < iVar18) {
        iVar18 = param_3;
      }
      if ((int)param_4 < 0) {
        param_4 = (float *)0x0;
      }
      if (param_3 < (int)param_4) {
        param_4 = (float *)param_3;
      }
      iVar7 = param_2 * 0x800;
      fVar2 = (float)local_28 - pfVar12[1];
      pfVar19 = (float *)((int)ROUND((fVar2 * fVar6 + *pfVar12) * _DAT_3622dd1c) + iVar7 * local_28)
      ;
      local_40 = iVar7 * local_28 + (int)ROUND((fVar2 * fVar3 + *pfVar12) * _DAT_3622dd1c);
      iVar20 = iVar7 * (int)param_4 +
               (int)ROUND((((float)(int)param_4 - pfVar21[1]) * fVar4 + *pfVar21) * _DAT_3622dd1c);
      iVar15 = (int)ROUND(fVar6 * _DAT_3622dd1c) + iVar7;
      iVar16 = (int)ROUND(fVar3 * _DAT_3622dd1c) + iVar7;
      iVar7 = (int)ROUND(fVar4 * _DAT_3622dd1c) + iVar7;
      iVar18 = iVar18 - (int)param_4;
      param_5 = (float *)((int)param_4 - local_28);
      if ((DAT_362c5620 == 0) || (param_7 == 0)) {
        if (0 < (int)param_5) {
          do {
            iVar9 = (int)pfVar19 >> 0xb;
            uVar8 = iVar9 - (local_40 >> 0xb);
            uVar17 = (int)uVar8 >> 0x1f;
            iVar10 = (uVar8 ^ uVar17) - uVar17;
            if (local_48 == -1) {
              iVar9 = iVar9 + -1;
            }
            if (0 < iVar10) {
              _DAT_362c9680 = 1;
              puVar14 = (undefined1 *)(iVar9 + param_1);
              do {
                *puVar14 = 0;
                puVar14 = puVar14 + local_48;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            local_40 = local_40 + iVar16;
            pfVar19 = (float *)((int)pfVar19 + iVar15);
            param_5 = (float *)((int)param_5 + -1);
          } while (param_5 != (float *)0x0);
        }
        if (0 < iVar18) {
          do {
            iVar16 = (int)pfVar19 >> 0xb;
            uVar8 = iVar16 - (iVar20 >> 0xb);
            uVar17 = (int)uVar8 >> 0x1f;
            iVar10 = (uVar8 ^ uVar17) - uVar17;
            if (0 < iVar10) {
              _DAT_362c9680 = 1;
            }
            if (local_48 == -1) {
              iVar16 = iVar16 + -1;
            }
            if (0 < iVar10) {
              puVar14 = (undefined1 *)(iVar16 + param_1);
              do {
                *puVar14 = 0;
                puVar14 = puVar14 + local_48;
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
            pfVar19 = (float *)((int)pfVar19 + iVar15);
            iVar20 = iVar20 + iVar7;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
          return;
        }
      }
      else {
        fVar3 = fVar5 * (pfVar11[2] - pfVar12[2]);
        fVar4 = fVar5 * (pfVar11[3] - pfVar12[3]);
        fVar5 = fVar5 * (pfVar11[4] - pfVar12[4]);
        local_34 = _DAT_36223384 / local_34;
        local_3c = ((fVar3 * fVar1 + pfVar12[2]) - pfVar21[2]) * local_34;
        local_38 = ((fVar4 * fVar1 + pfVar12[3]) - pfVar21[3]) * local_34;
        local_34 = ((fVar5 * fVar1 + pfVar12[4]) - pfVar21[4]) * local_34;
        if (local_48 == -1) {
          local_3c = -local_3c;
          local_38 = -local_38;
          local_34 = -local_34;
        }
        local_54 = (float *)(fVar3 * fVar2 + pfVar12[2]);
        local_50 = (float *)(fVar4 * fVar2 + pfVar12[3]);
        local_4c = fVar5 * fVar2 + pfVar12[4];
        param_4 = pfVar19;
        local_1c = param_5;
        if (0 < (int)param_5) {
          do {
            iVar13 = (int)param_4 >> 0xb;
            uVar8 = iVar13 - (local_40 >> 0xb);
            uVar17 = (int)uVar8 >> 0x1f;
            iVar9 = (uVar8 ^ uVar17) - uVar17;
            if (iVar9 != 0) {
              param_5 = local_54;
              param_6 = local_50;
              local_58 = local_4c;
              if (local_48 == -1) {
                iVar13 = iVar13 + -1;
              }
              if (0 < iVar9) {
                uVar8 = DAT_362c5618 - 1;
                _DAT_362c9680 = 1;
                puVar14 = (undefined1 *)(iVar13 + param_1);
                do {
                  if (0x7f000000 <
                      (*(uint *)(DAT_362c5620 +
                                ((uVar8 & (int)ROUND((_DAT_36223384 / (float)param_5) * local_58)) *
                                 iVar10 + (iVar10 - 1U &
                                          (int)ROUND((_DAT_36223384 / (float)param_5) *
                                                     (float)param_6))) * 4) & 0xff000000)) {
                    *puVar14 = 0;
                  }
                  param_5 = (float *)((float)param_5 + local_3c);
                  puVar14 = puVar14 + local_48;
                  iVar9 = iVar9 + -1;
                  param_6 = (float *)((float)param_6 + local_38);
                  local_58 = local_58 + local_34;
                } while (iVar9 != 0);
              }
            }
            local_54 = (float *)((float)local_54 + fVar3);
            param_4 = (float *)((int)param_4 + iVar15);
            local_50 = (float *)((float)local_50 + fVar4);
            local_40 = local_40 + iVar16;
            local_1c = (float *)((int)local_1c + -1);
            local_4c = local_4c + fVar5;
          } while (local_1c != (float *)0x0);
        }
        local_1c = (float *)iVar18;
        if (0 < iVar18) {
          do {
            iVar16 = (int)param_4 >> 0xb;
            uVar8 = iVar16 - (iVar20 >> 0xb);
            uVar17 = (int)uVar8 >> 0x1f;
            iVar18 = (uVar8 ^ uVar17) - uVar17;
            if (iVar18 != 0) {
              param_5 = local_54;
              param_6 = local_50;
              local_58 = local_4c;
              if (local_48 == -1) {
                iVar16 = iVar16 + -1;
              }
              if (0 < iVar18) {
                uVar8 = DAT_362c5618 - 1;
                _DAT_362c9680 = 1;
                puVar14 = (undefined1 *)(iVar16 + param_1);
                do {
                  if (0x7f000000 <
                      (*(uint *)(DAT_362c5620 +
                                ((uVar8 & (int)ROUND((_DAT_36223384 / (float)param_5) * local_58)) *
                                 iVar10 + (iVar10 - 1U &
                                          (int)ROUND((_DAT_36223384 / (float)param_5) *
                                                     (float)param_6))) * 4) & 0xff000000)) {
                    *puVar14 = 0;
                  }
                  param_5 = (float *)((float)param_5 + local_3c);
                  puVar14 = puVar14 + local_48;
                  iVar18 = iVar18 + -1;
                  param_6 = (float *)((float)param_6 + local_38);
                  local_58 = local_58 + local_34;
                } while (iVar18 != 0);
              }
            }
            local_54 = (float *)((float)local_54 + fVar3);
            param_4 = (float *)((int)param_4 + iVar15);
            iVar20 = iVar20 + iVar7;
            local_50 = (float *)((float)local_50 + fVar4);
            local_1c = (float *)((int)local_1c + -1);
            local_4c = local_4c + fVar5;
          } while (local_1c != (float *)0x0);
        }
      }
    }
    return;
  }
  return;
}

