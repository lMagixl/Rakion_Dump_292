
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_AddOneShadowOnPlane(class Plane<float,3> const &,class Vector<float,3>,class
   Vector<float,3>,class Vector<float,3>,float,int,float) */

void __cdecl
RM_AddOneShadowOnPlane
          (float *param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
          float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
          int param_12,float param_13)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  uint uVar14;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  uint local_40;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0x166730  2902
                       ?RM_AddOneShadowOnPlane@@YAXABV?$Plane@M$02@@V?$Vector@M$02@@11MHM@Z */
  local_64 = *(float *)(DAT_362fe940 + 0x28);
  local_60 = *(float *)(DAT_362fe940 + 0x2c);
  local_5c = *(float *)(DAT_362fe940 + 0x30);
  if ((local_64 * *param_1 + local_5c * param_1[2] + local_60 * param_1[1]) - param_1[3] <
      _DAT_362280f0) {
    return;
  }
  local_54 = *param_1;
  local_50 = param_1[1];
  local_4c = param_1[2];
  local_58 = param_1[3] + _DAT_362280f0;
  if (param_12 == 0) {
    pfVar3 = (float *)pwGetDirectionProjection
                                ((Vector<float,3> *)&local_64,(Vector<float,3> *)&param_5,
                                 (Vector<float,3> *)&param_2,(float)&local_54);
    fVar13 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
    pfVar3 = (float *)pwGetDirectionProjection
                                ((Vector<float,3> *)&local_7c,(Vector<float,3> *)&param_8,
                                 (Vector<float,3> *)&param_2,(float)&local_54);
    local_64 = *pfVar3;
    local_60 = pfVar3[1];
    local_5c = pfVar3[2];
  }
  else {
    pfVar3 = (float *)pwGetPointProjection
                                ((Vector<float,3> *)&local_64,(Vector<float,3> *)&param_5,
                                 (Vector<float,3> *)&param_2,(float)&local_54);
    fVar13 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar11 = pfVar3[2];
    pfVar3 = (float *)pwGetPointProjection
                                ((Vector<float,3> *)&local_7c,(Vector<float,3> *)&param_8,
                                 (Vector<float,3> *)&param_2,(float)&local_54);
    local_64 = *pfVar3;
    local_60 = pfVar3[1];
    local_5c = pfVar3[2];
  }
  local_54 = fVar13 - param_5;
  local_50 = fVar10 - param_6;
  local_4c = fVar11 - param_7;
  if (local_54 * (_DAT_36223384 / param_2) < _DAT_3622376c) {
    return;
  }
  if ((local_64 - param_8) * (_DAT_36223384 / param_2) < _DAT_3622376c) {
    return;
  }
  local_70 = fVar13 - param_5;
  local_6c = fVar10 - param_6;
  local_68 = fVar11 - param_7;
  local_7c = local_64 - param_8;
  local_78 = local_60 - param_9;
  local_74 = local_5c - param_10;
  param_13 = (_DAT_3623ccb8 -
             (SQRT(local_70 * local_70 + local_6c * local_6c + local_68 * local_68) +
             SQRT(local_7c * local_7c + local_78 * local_78 + local_74 * local_74)) * _DAT_36227cf0)
             * param_13 * _DAT_3623cd18;
  if (param_13 < _DAT_3622376c) {
    param_13 = 0.0;
  }
  FUN_36006680(&local_34,0xc,4,&LAB_3600aa30);
  local_88 = *param_1;
  local_84 = param_1[1];
  local_70 = fVar13 - local_64;
  local_80 = param_1[2];
  local_6c = fVar10 - local_60;
  local_68 = fVar11 - local_5c;
  if (_DAT_36228818 <= SQRT(local_70 * local_70 + local_6c * local_6c + local_68 * local_68)) {
    local_7c = fVar13 - local_64;
    local_78 = fVar10 - local_60;
    local_74 = fVar11 - local_5c;
    fVar1 = SQRT(local_7c * local_7c + local_78 * local_78 + local_74 * local_74);
    fVar2 = _DAT_3622376c;
    if ((float)_DAT_36223438 <= fVar1) {
      fVar2 = _DAT_36223384 / fVar1;
    }
    local_74 = local_74 * fVar2;
    local_78 = local_78 * fVar2;
    local_7c = local_7c * fVar2;
    local_70 = local_7c;
    local_6c = local_78;
    local_68 = local_74;
    goto LAB_36166d58;
  }
  if (local_88 <= _DAT_36228818) {
    if (_DAT_36228818 < local_84) {
      local_7c = 1.0;
      local_74 = 1.0;
      local_78 = (_DAT_36227d20 / local_84) * (local_80 + local_88);
      goto LAB_36166bc2;
    }
    if (_DAT_36228818 < local_80) {
      local_7c = 1.0;
      local_74 = (_DAT_36227d20 / local_80) * (local_84 + local_88);
      goto LAB_36166bba;
    }
  }
  else {
    local_74 = 1.0;
    local_7c = -((local_80 + local_84) / local_88);
LAB_36166bba:
    local_78 = 1.0;
LAB_36166bc2:
    local_70 = local_7c;
    local_6c = local_78;
    local_68 = local_74;
  }
  fVar1 = SQRT(local_70 * local_70 + local_6c * local_6c + local_68 * local_68);
  if ((float)_DAT_36223438 <= fVar1) {
    fVar1 = _DAT_36223384 / fVar1;
    local_70 = local_70 * fVar1;
    local_6c = local_6c * fVar1;
    local_68 = local_68 * fVar1;
  }
  else {
    local_70 = local_70 * _DAT_3622376c;
    local_6c = local_6c * _DAT_3622376c;
    local_68 = local_68 * _DAT_3622376c;
  }
LAB_36166d58:
  fVar1 = SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
  fVar2 = _DAT_3622376c;
  if ((float)_DAT_36223438 <= fVar1) {
    fVar2 = _DAT_36223384 / fVar1;
  }
  local_80 = local_80 * fVar2;
  local_84 = local_84 * fVar2;
  local_88 = local_88 * fVar2;
  local_7c = local_80 * local_6c - local_84 * local_68;
  local_78 = local_88 * local_68 - local_80 * local_70;
  local_74 = local_84 * local_70 - local_88 * local_6c;
  local_34 = (local_7c + local_70) * param_11 + fVar13;
  local_30 = (local_78 + local_6c) * param_11 + fVar10;
  local_2c = (local_74 + local_68) * param_11 + fVar11;
  local_28 = (local_70 - local_7c) * param_11 + fVar13;
  local_24 = (local_6c - local_78) * param_11 + fVar10;
  local_20 = (local_68 - local_74) * param_11 + fVar11;
  local_1c = (-local_70 - local_7c) * param_11 + local_64;
  local_18 = (-local_6c - local_78) * param_11 + local_60;
  local_14 = (-local_68 - local_74) * param_11 + local_5c;
  local_54 = (local_7c + -local_70) * param_11;
  local_50 = (local_78 + -local_6c) * param_11;
  local_4c = (local_74 + -local_68) * param_11;
  local_64 = local_54 + local_64;
  local_60 = local_50 + local_60;
  local_5c = local_4c + local_5c;
  local_70 = -local_70 - local_7c;
  local_6c = -local_6c - local_78;
  local_68 = -local_68 - local_74;
  local_10 = local_64;
  local_c = local_60;
  local_8 = local_5c;
  FUN_36162620(&local_34,(float *)&DAT_362fe0e8);
  FUN_36162620(&local_28,(float *)&DAT_362fe0e8);
  FUN_36162620(&local_1c,(float *)&DAT_362fe0e8);
  FUN_36162620(&local_10,(float *)&DAT_362fe0e8);
  local_44 = 0x437f0000;
  local_40 = (uint)ROUND(param_13 * 255.0);
  uVar14 = (local_40 << 8 | local_40) << 8 | local_40;
  pfVar4 = (float *)FUN_36062560(&DAT_362c54d8,4);
  puVar5 = (uint *)FUN_36062630(&DAT_362c54f8,4);
  puVar6 = (undefined4 *)FUN_360627d0(&DAT_362c5508,4);
  *pfVar4 = local_34;
  pfVar4[1] = local_30;
  pfVar4[2] = local_2c;
  pfVar3 = pfVar4 + 2;
  pfVar4[3] = local_28;
  pfVar4[4] = local_24;
  pfVar4[5] = local_20;
  pfVar4[6] = local_1c;
  pfVar4[7] = local_18;
  pfVar4[8] = local_14;
  pfVar4[9] = local_10;
  pfVar4[10] = local_c;
  pfVar4[0xb] = local_8;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0x3f800000;
  puVar6[4] = 0x3f800000;
  puVar6[5] = 0x3f800000;
  puVar6[6] = 0x3f800000;
  puVar6[7] = 0;
  *puVar5 = uVar14;
  puVar5[1] = uVar14;
  puVar5[2] = uVar14;
  puVar5[3] = uVar14;
  if ((DAT_362fe1b4 & 2) != 0) {
    pbVar9 = (byte *)((int)puVar5 + 2);
    local_44 = 4;
    pfVar4 = pfVar3;
    do {
      iVar7 = (int)ROUND((float)DAT_362c3b34 *
                         (_DAT_362c3be8 * *pfVar4 +
                          _DAT_362c3be4 * pfVar4[-1] + _DAT_362c3be0 * pfVar4[-2] + _DAT_362c3b24) *
                         DAT_362c3b20);
      if (iVar7 < 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = DAT_362c3b34 + -1;
        if (iVar7 <= DAT_362c3b34 + -1) {
          iVar8 = iVar7;
        }
      }
      uVar14 = (uint)ROUND((float)DAT_362c3b38 * -(DAT_362c3b1c * *pfVar4) * _DAT_36228810 -
                           _DAT_3622880c);
      iVar7 = (int)uVar14 >> 8;
      local_48 = DAT_362c3b38 + -1;
      if (iVar7 < 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = local_48;
        if (iVar7 <= local_48) {
          iVar12 = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
      if (iVar7 < 0) {
        local_48 = 0;
      }
      else if (iVar7 <= local_48) {
        local_48 = iVar7;
      }
      uVar14 = uVar14 & 0xff;
      uVar14 = (((uint)*(byte *)(iVar12 + iVar8 * DAT_362c3b38 + DAT_362c3b44) * (uVar14 ^ 0xff) +
                *(byte *)(local_48 + iVar8 * DAT_362c3b38 + DAT_362c3b44) * uVar14) * DAT_362c3b28 ^
               0xff0000) >> 0x10;
      pbVar9[-2] = (byte)(pbVar9[-2] * uVar14 >> 8);
      pbVar9[-1] = (byte)(pbVar9[-1] * uVar14 >> 8);
      *pbVar9 = (byte)(*pbVar9 * uVar14 >> 8);
      pfVar4 = pfVar4 + 3;
      pbVar9 = pbVar9 + 4;
      local_44 = local_44 + -1;
    } while (local_44 != 0);
  }
  if ((DAT_362fe1b4 & 4) == 0) {
    return;
  }
  pbVar9 = (byte *)((int)puVar5 + 2);
  local_44 = 4;
  do {
    uVar14 = (uint)ROUND((_DAT_362c3b5c - *pfVar3) * DAT_362c3b58 * (float)DAT_362c3b4c *
                         _DAT_36228814 - _DAT_3622880c);
    iVar8 = (int)uVar14 >> 8;
    iVar7 = DAT_362c3b4c + -1;
    if (iVar8 < 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = iVar7;
      if (iVar8 <= iVar7) {
        iVar12 = iVar8;
      }
    }
    iVar8 = iVar8 + 1;
    if (iVar8 < 0) {
      iVar7 = 0;
    }
    else if (iVar8 <= iVar7) {
      iVar7 = iVar8;
    }
    uVar14 = uVar14 & 0xff;
    uVar14 = (((uint)*(byte *)(DAT_362c3b54 + iVar12) * (uVar14 ^ 0xff) +
              *(byte *)(iVar7 + DAT_362c3b54) * uVar14) * DAT_362c3b60 ^ 0xff0000) >> 0x10;
    pbVar9[-2] = (byte)(pbVar9[-2] * uVar14 >> 8);
    pbVar9[-1] = (byte)(pbVar9[-1] * uVar14 >> 8);
    *pbVar9 = (byte)(*pbVar9 * uVar14 >> 8);
    pfVar3 = pfVar3 + 3;
    pbVar9 = pbVar9 + 4;
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  return;
}

