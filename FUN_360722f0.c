
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360722f0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float local_84;
  float local_6c;
  float local_68;
  float local_60;
  float local_54;
  float local_4c;
  int local_48;
  float local_40;
  float local_3c;
  char local_2c;
  int local_28;
  char local_4;
  
  if (DAT_362cce78 == 0) {
    if (DAT_362a4190 == 0) {
      return;
    }
  }
  else {
    DAT_362a4190 = 1;
  }
  DAT_362c3b14 = 1;
  puVar19 = &DAT_362c3b6c;
  for (iVar15 = 0xf; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar19 = *param_1;
    param_1 = param_1 + 1;
    puVar19 = puVar19 + 1;
  }
  _DAT_362c3bd4 = -DAT_362c3b6c;
  _DAT_362c3bd8 = -DAT_362c3b70;
  _DAT_362c3bdc = -DAT_362c3b74;
  _DAT_362c3bbc = *param_2;
  _DAT_362c3bc0 = param_2[1];
  _DAT_362c3bc4 = param_2[2];
  _DAT_362c3bc8 = -param_3[6];
  _DAT_362c3bcc = -param_3[7];
  _DAT_362c3bd0 = -param_3[8];
  _DAT_362c3b18 =
       _DAT_362c3bbc * -DAT_362c3b6c + _DAT_362c3bc0 * -DAT_362c3b70 + _DAT_362c3bc4 * -DAT_362c3b74
  ;
  _DAT_362c3be0 = _DAT_362c3bd4 * *param_3 + _DAT_362c3bdc * param_3[2] + _DAT_362c3bd8 * param_3[1]
  ;
  _DAT_362c3be4 =
       _DAT_362c3bdc * param_3[5] + _DAT_362c3bd8 * param_3[4] + _DAT_362c3bd4 * param_3[3];
  _DAT_362c3be8 =
       _DAT_362c3bdc * param_3[8] + _DAT_362c3bd8 * param_3[7] + _DAT_362c3bd4 * param_3[6];
  DAT_362c3b1c = _DAT_36223384 / DAT_362c3b88;
  DAT_362c3b20 = _DAT_36223384 / (DAT_362c3b84 - _DAT_362c3b78);
  _DAT_362c3b24 = DAT_362c3b84 + _DAT_362c3b18;
  if (DAT_362a4070 < 4) {
    DAT_362a4070 = 4;
  }
  else if (8 < DAT_362a4070) {
    DAT_362a4070 = 8;
  }
  iVar11 = 1 << ((byte)DAT_362a4070 & 0x1f);
  iVar15 = DAT_362c3b90;
  if (iVar11 < DAT_362c3b90) {
    iVar15 = iVar11;
  }
  iVar18 = DAT_362c3b8c;
  if (iVar11 < DAT_362c3b8c) {
    iVar18 = iVar11;
  }
  local_28 = 1;
  if ((DAT_362c3b34 == iVar15) && (DAT_362c3b38 == iVar18)) {
    if (DAT_362c3b44 != (byte *)0x0) goto LAB_360725c7;
  }
  else if (DAT_362c3b44 != (byte *)0x0) {
    FreeMemory(DAT_362c3b44);
    DAT_362c3b44 = (byte *)0x0;
  }
  DAT_362c3b44 = AllocMemory(iVar18 * iVar15 * 5);
  _DAT_362c3ba8 = 0;
  _DAT_362c3bac = 0;
  _DAT_362c3bb8 = 0;
  _DAT_362c3bb4 = 0;
  local_28 = 0;
  DAT_362c3b34 = iVar15;
  DAT_362c3b38 = iVar18;
LAB_360725c7:
  iVar14 = DAT_362c3ba0;
  fVar10 = DAT_362c3b9c;
  iVar11 = DAT_362c3b98;
  fVar9 = DAT_362c3b88;
  fVar8 = DAT_362c3b84;
  fVar7 = DAT_362c3b80;
  fVar6 = DAT_362c3b7c;
  fVar1 = DAT_362c3b80 - DAT_362c3b7c;
  iVar20 = 0;
  DAT_362c3b28 = DAT_362c3b94 & 0xff;
  fVar4 = -_DAT_362c3b18;
  local_48 = 0;
  if (0 < iVar15) {
    fVar3 = _DAT_362c3b78 - DAT_362c3b84;
    fVar5 = fVar4 - _DAT_362253e4;
    do {
      fVar2 = ((float)local_48 / (float)iVar15) * fVar3 + fVar8;
      local_68 = fVar2;
      local_54 = fVar4;
      if ((fVar5 <= fVar2) && (local_68 = fVar4, local_54 = fVar2, fVar2 <= fVar4 + _DAT_362253e4))
      {
        local_68 = fVar5;
        local_54 = fVar2 + _DAT_362253e4;
      }
      fVar2 = _DAT_36223384 / (local_54 - local_68);
      fVar21 = ((float10)fVar7 - (float10)local_68) * (float10)fVar2;
      if (fVar21 < (float10)_DAT_3622376c) {
        fVar21 = (float10)_DAT_3622376c;
      }
      else if (fVar21 < (float10)_DAT_36223384 == (fVar21 == (float10)_DAT_36223384)) {
        fVar21 = (float10)_DAT_36223384;
      }
      fVar22 = ((float10)fVar6 - (float10)local_68) * (float10)fVar2;
      if (fVar22 < (float10)_DAT_3622376c) {
        fVar22 = (float10)_DAT_3622376c;
      }
      else if (fVar22 < (float10)_DAT_36223384 == (fVar22 == (float10)_DAT_36223384)) {
        fVar22 = (float10)_DAT_36223384;
      }
      fVar21 = fVar21 - fVar22;
      if (fVar21 < (float10)_DAT_3622376c) {
        fVar21 = (float10)_DAT_3622376c;
      }
      else if (fVar21 < (float10)_DAT_36223384 == (fVar21 == (float10)_DAT_36223384)) {
        fVar21 = (float10)_DAT_36223384;
      }
      if (iVar14 != 0) {
        local_68 = local_68 - fVar6;
        fVar2 = _DAT_3622376c;
        if ((_DAT_3622376c <= local_68) &&
           (fVar2 = local_68, local_68 < fVar1 == (local_68 == fVar1))) {
          fVar2 = fVar1;
        }
        fVar22 = (float10)local_54 - (float10)fVar6;
        if (fVar22 < (float10)_DAT_3622376c) {
          fVar22 = (float10)_DAT_3622376c;
        }
        else if (fVar22 < (float10)fVar1 == (fVar22 == (float10)fVar1)) {
          fVar22 = (float10)fVar1;
        }
        local_60 = _DAT_362c3ba4 * (fVar1 - fVar2);
        fVar22 = ((float10)fVar1 - fVar22) * (float10)_DAT_362c3ba4;
        if (iVar14 == 1) {
          fVar22 = (fVar22 + (float10)local_60) * (float10)_DAT_36227cf0;
        }
        else {
          fVar24 = fVar22 - (float10)_DAT_362253e4;
          local_4c = local_60;
          if ((float10)(float)fVar24 <= (float10)local_60) {
            if ((float10)local_60 <= fVar22 + (float10)_DAT_362253e4) {
              fVar22 = (float10)local_60 + (float10)_DAT_362253e4;
              local_4c = (float)fVar24;
              goto LAB_36072882;
            }
            local_4c = (float)fVar22;
          }
          else {
LAB_36072882:
            local_60 = (float)fVar22;
          }
          fVar22 = ROUND((float10)1.4426950408889634 * -(float10)local_60);
          fVar24 = (float10)f2xm1((float10)1.4426950408889634 * -(float10)local_60 - fVar22);
          fVar22 = (float10)fscale((float10)1 + fVar24,fVar22);
          fVar24 = ROUND((float10)1.4426950408889634 * -(float10)local_4c);
          fVar23 = (float10)f2xm1((float10)1.4426950408889634 * -(float10)local_4c - fVar24);
          fVar24 = (float10)fscale((float10)1 + fVar23,fVar24);
          fVar22 = (fVar22 - fVar24) / ((float10)local_60 - (float10)local_4c) +
                   (float10)_DAT_36223384;
        }
        if (fVar22 < (float10)_DAT_3622376c) {
          fVar22 = (float10)_DAT_3622376c;
        }
        else if (fVar22 < (float10)_DAT_36223384 == (fVar22 == (float10)_DAT_36223384)) {
          fVar22 = (float10)_DAT_36223384;
        }
        fVar21 = fVar22 * fVar21;
      }
      if (iVar11 == 0) {
        local_6c = 0.0;
        fVar22 = (float10)_DAT_36223774;
        iVar12 = iVar20;
        iVar16 = iVar18;
        if (0 < iVar18) {
          do {
            iVar13 = (int)ROUND(local_6c);
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            else if (0xff < iVar13) {
              iVar13 = 0xff;
            }
            local_6c = (float)((fVar21 / (float10)iVar18) * (float10)fVar10 * (float10)fVar9 *
                              fVar22) + local_6c;
            DAT_362c3b44[iVar12] = (byte)iVar13;
            iVar16 = iVar16 + -1;
            iVar12 = iVar12 + 1;
          } while (iVar16 != 0);
        }
      }
      else if (iVar11 == 1) {
        local_3c = 255.0;
        fVar22 = (float10)1.4426950408889634 *
                 -((fVar21 / (float10)iVar18) * (float10)fVar10 * (float10)fVar9);
        fVar21 = ROUND(fVar22);
        fVar22 = (float10)f2xm1(fVar22 - fVar21);
        fVar21 = (float10)fscale((float10)1 + fVar22,fVar21);
        iVar12 = iVar20;
        iVar16 = iVar18;
        if (0 < iVar18) {
          do {
            local_2c = (char)(int)ROUND(local_3c);
            local_3c = (float)fVar21 * local_3c;
            DAT_362c3b44[iVar12] = -local_2c - 1;
            iVar16 = iVar16 + -1;
            iVar12 = iVar12 + 1;
          } while (iVar16 != 0);
        }
      }
      else if (iVar11 == 2) {
        local_40 = 255.0;
        fVar21 = (fVar21 / (float10)iVar18) * (float10)fVar10 * (float10)fVar9;
        fVar21 = fVar21 * fVar21;
        fVar24 = (float10)1.4426950408889634 * -fVar21;
        fVar22 = ROUND(fVar24);
        fVar24 = (float10)f2xm1(fVar24 - fVar22);
        fVar22 = (float10)fscale((float10)1 + fVar24,fVar22);
        local_84 = (float)fVar22;
        fVar22 = (float10)1.4426950408889634 * fVar21 * (float10)_DAT_36228838;
        fVar21 = ROUND(fVar22);
        fVar22 = (float10)f2xm1(fVar22 - fVar21);
        fVar21 = (float10)fscale((float10)1 + fVar22,fVar21);
        iVar12 = iVar20;
        iVar16 = iVar18;
        if (0 < iVar18) {
          do {
            fVar2 = ROUND(local_40);
            local_40 = local_84 * local_40;
            local_4 = (char)(int)fVar2;
            DAT_362c3b44[iVar12] = -local_4 - 1;
            local_84 = (float)fVar21 * local_84;
            iVar16 = iVar16 + -1;
            iVar12 = iVar12 + 1;
          } while (iVar16 != 0);
        }
      }
      local_48 = local_48 + 1;
      iVar20 = iVar20 + iVar18;
    } while (local_48 < iVar15);
  }
  pbVar17 = DAT_362c3b44 + iVar18 + -1;
  _DAT_362c3b3c = -3e+38;
  _DAT_362c3b40 = 3e+38;
  if (*pbVar17 == 0) {
    iVar11 = 0;
    if (0 < iVar15) {
      do {
        if ((*pbVar17 * DAT_362c3b28 & 0xffffff00) != 0) break;
        iVar11 = iVar11 + 1;
        pbVar17 = pbVar17 + iVar18;
      } while (iVar11 < iVar15);
      if (0 < iVar11) {
        _DAT_362c3b3c = (float)(iVar11 + -1) / (float)(iVar15 + -1);
      }
    }
  }
  else {
    iVar11 = iVar15 + -1;
    iVar14 = iVar11;
    if (0 < iVar11) {
      pbVar17 = DAT_362c3b44 + iVar15 * iVar18 + -1;
      do {
        if ((*pbVar17 * DAT_362c3b28 & 0xffffff00) != 0) break;
        iVar14 = iVar14 + -1;
        pbVar17 = pbVar17 + -iVar18;
      } while (0 < iVar14);
    }
    if (iVar14 < iVar11) {
      _DAT_362c3b40 = (float)(iVar14 + 1) / (float)iVar11;
    }
  }
  _DAT_362c3bb0 = 1;
  iVar15 = FUN_36071f30(DAT_362c3b44,DAT_362c3b38 * DAT_362c3b34);
  if (DAT_362c3b30 != iVar15) {
    local_28 = 0;
    DAT_362c3b30 = iVar15;
  }
  (*DAT_362c4680)(0x52,0x52);
  FUN_3607b9d0((undefined4 *)&DAT_362c3b2c,(int *)&DAT_362c3ba8);
  FUN_3607bbd0((int)(DAT_362c3b44 + DAT_362c3b38 * DAT_362c3b34),DAT_362c3b38,DAT_362c3b34,iVar15,
               local_28);
  return;
}

