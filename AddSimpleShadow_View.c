
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CModelObject::AddSimpleShadow_View(class CRenderModel &,float,class
   Plane<float,3> const &) */

void __thiscall
CModelObject::AddSimpleShadow_View
          (CModelObject *this,CRenderModel *param_1,float param_2,Plane<float,3> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *this_00;
  float *pfVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  int local_8c;
  int local_88;
  float local_84;
  float local_80;
  float local_7c;
  uint local_78;
  uint *local_74;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_5c [3];
  float local_50;
  float local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24 [9];
  
                    /* 0xc5020  1015
                       ?AddSimpleShadow_View@CModelObject@@AAEXAAVCRenderModel@@MABV?$Plane@M$02@@@Z
                        */
  local_9c = *(float *)(DAT_362cabb8 + 0x28);
  local_98 = *(float *)(DAT_362cabb8 + 0x2c);
  local_94 = *(float *)(DAT_362cabb8 + 0x30);
  if (_DAT_362280f0 <=
      (local_9c * *(float *)param_3 +
      local_94 * *(float *)(param_3 + 8) + local_98 * *(float *)(param_3 + 4)) -
      *(float *)(param_3 + 0xc)) {
    local_48[0] = *(float *)(param_1 + 0x40);
    local_48[2] = (float)*(undefined4 *)(param_1 + 0x58);
    local_48[1] = (float)*(undefined4 *)(param_1 + 0x4c);
    local_38 = *(undefined4 *)(param_1 + 0x50);
    local_48[3] = (float)*(undefined4 *)(param_1 + 0x44);
    local_30 = *(undefined4 *)(param_1 + 0x48);
    local_34 = *(undefined4 *)(param_1 + 0x5c);
    local_28 = *(undefined4 *)(param_1 + 0x60);
    local_2c = *(undefined4 *)(param_1 + 0x54);
    pfVar9 = local_48;
    pfVar4 = local_24;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar4 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar4 = pfVar4 + 1;
    }
    local_b4 = -*(float *)(param_1 + 0x34);
    local_b0 = -*(float *)(param_1 + 0x38);
    local_ac = -*(float *)(param_1 + 0x3c);
    pfVar9 = local_24;
    puVar6 = local_5c;
    local_84 = local_b4;
    local_80 = local_b0;
    local_7c = local_ac;
    this_00 = (void *)FUN_36058f40(param_3,&local_9c,&local_84);
    FUN_36059090(this_00,puVar6,pfVar9);
    local_84 = 0.0;
    local_80 = 0.0;
    local_7c = 0.0;
    FUN_3605fbc0(local_5c,&local_a8,&local_84);
    local_9c = local_a8 * *(float *)(param_1 + 0x70) +
               local_a0 * *(float *)(param_1 + 0x78) + local_a4 * *(float *)(param_1 + 0x74);
    local_98 = local_a0 * *(float *)(param_1 + 0x84) +
               local_a4 * *(float *)(param_1 + 0x80) + local_a8 * *(float *)(param_1 + 0x7c);
    local_94 = local_a0 * *(float *)(param_1 + 0x90) +
               local_a4 * *(float *)(param_1 + 0x8c) + local_a8 * *(float *)(param_1 + 0x88);
    fVar1 = (local_94 + *(float *)(param_1 + 0x6c)) * _DAT_36231e48;
    if (fVar1 < _DAT_362280f0) {
      fVar1 = _DAT_362280f0;
    }
    local_50 = fVar1 + local_50;
    local_b4 = *(float *)(param_1 + 0xac) * _DAT_36231e44;
    local_b0 = *(float *)(param_1 + 0xb0) * _DAT_36231e44;
    local_ac = *(float *)(param_1 + 0xb4) * _DAT_36231e44;
    local_c0 = *(float *)(param_1 + 0xb8) * _DAT_36231e44;
    local_bc = *(float *)(param_1 + 0xbc) * _DAT_36231e44;
    local_b8 = *(float *)(param_1 + 0xc0) * _DAT_36231e44;
    local_a8 = local_c0;
    local_a0 = local_b8;
    if (((byte)param_1[0xc4] & 8) != 0) {
      local_b4 = local_b4 + local_b4;
      local_b0 = local_b0 + local_b0;
      local_ac = local_ac + local_ac;
      local_a8 = local_c0 + local_c0;
      local_a0 = local_b8 + local_b8;
    }
    local_84 = local_b4;
    local_80 = local_b0;
    local_7c = local_ac;
    local_a4 = local_bc;
    FUN_3605fbc0(local_5c,&local_c0,&local_84);
    fVar1 = local_c0 * *(float *)(param_1 + 0x7c);
    fVar2 = local_c0 * *(float *)(param_1 + 0x88);
    fVar3 = local_bc * *(float *)(param_1 + 0x8c);
    local_c0 = local_c0 * *(float *)(param_1 + 0x70) +
               local_b8 * *(float *)(param_1 + 0x78) + local_bc * *(float *)(param_1 + 0x74) +
               *(float *)(param_1 + 100);
    local_bc = local_b8 * *(float *)(param_1 + 0x84) + local_bc * *(float *)(param_1 + 0x80) + fVar1
               + *(float *)(param_1 + 0x68);
    local_9c = local_b4;
    local_b8 = local_b8 * *(float *)(param_1 + 0x90) + fVar3 + fVar2 + *(float *)(param_1 + 0x6c);
    local_98 = local_b0;
    local_94 = local_a0;
    local_84 = local_c0;
    local_80 = local_bc;
    local_7c = local_b8;
    FUN_3605fbc0(local_5c,&local_c0,&local_9c);
    fVar1 = local_c0 * *(float *)(param_1 + 0x7c);
    fVar2 = local_c0 * *(float *)(param_1 + 0x88);
    fVar3 = local_bc * *(float *)(param_1 + 0x8c);
    local_c0 = local_c0 * *(float *)(param_1 + 0x70) +
               local_b8 * *(float *)(param_1 + 0x78) + local_bc * *(float *)(param_1 + 0x74) +
               *(float *)(param_1 + 100);
    local_bc = local_b8 * *(float *)(param_1 + 0x84) + local_bc * *(float *)(param_1 + 0x80) + fVar1
               + *(float *)(param_1 + 0x68);
    local_9c = local_a8;
    local_b8 = local_b8 * *(float *)(param_1 + 0x90) + fVar3 + fVar2 + *(float *)(param_1 + 0x6c);
    local_98 = local_b0;
    local_94 = local_ac;
    local_6c = local_c0;
    local_68 = local_bc;
    local_64 = local_b8;
    FUN_3605fbc0(local_5c,&local_c0,&local_9c);
    fVar1 = local_c0 * *(float *)(param_1 + 0x88);
    local_9c = local_c0 * *(float *)(param_1 + 0x70) +
               local_b8 * *(float *)(param_1 + 0x78) + local_bc * *(float *)(param_1 + 0x74) +
               *(float *)(param_1 + 100);
    local_98 = local_b8 * *(float *)(param_1 + 0x84) +
               local_bc * *(float *)(param_1 + 0x80) + local_c0 * *(float *)(param_1 + 0x7c) +
               *(float *)(param_1 + 0x68);
    local_c0 = local_a8;
    local_94 = local_b8 * *(float *)(param_1 + 0x90) + local_bc * *(float *)(param_1 + 0x8c) + fVar1
               + *(float *)(param_1 + 0x6c);
    local_bc = local_b0;
    local_b8 = local_a0;
    FUN_3605fbc0(local_5c,&local_a8,&local_c0);
    local_8c = 0x437f0000;
    local_b4 = local_a8 * *(float *)(param_1 + 0x70) +
               local_a0 * *(float *)(param_1 + 0x78) + local_a4 * *(float *)(param_1 + 0x74);
    local_b0 = local_a0 * *(float *)(param_1 + 0x84) +
               local_a4 * *(float *)(param_1 + 0x80) + local_a8 * *(float *)(param_1 + 0x7c);
    local_ac = local_a0 * *(float *)(param_1 + 0x90) +
               local_a4 * *(float *)(param_1 + 0x8c) + local_a8 * *(float *)(param_1 + 0x88);
    local_c0 = local_b4 + *(float *)(param_1 + 100);
    local_bc = local_b0 + *(float *)(param_1 + 0x68);
    local_b8 = local_ac + *(float *)(param_1 + 0x6c);
    local_78 = (uint)ROUND(param_2 * 255.0);
    uVar10 = (local_78 << 8 | local_78) << 8 | local_78;
    local_a8 = local_c0;
    local_a4 = local_bc;
    local_a0 = local_b8;
    pfVar4 = (float *)FUN_36062560(&DAT_362c54d8,4);
    puVar5 = (uint *)FUN_36062630(&DAT_362c54f8,4);
    local_74 = puVar5;
    puVar6 = (undefined4 *)FUN_360627d0(&DAT_362c5508,4);
    pfVar4[1] = local_80;
    *pfVar4 = local_84;
    pfVar9 = pfVar4 + 2;
    *pfVar9 = local_7c;
    pfVar4[6] = local_a8;
    pfVar4[7] = local_a4;
    pfVar4[8] = local_a0;
    if (((byte)param_1[0xc4] & 0x10) == 0) {
      pfVar4[3] = local_6c;
      pfVar4[4] = local_68;
      pfVar4[5] = local_64;
      pfVar4[9] = local_9c;
      pfVar4[10] = local_98;
      local_64 = local_94;
    }
    else {
      pfVar4[3] = local_9c;
      pfVar4[4] = local_98;
      pfVar4[5] = local_94;
      pfVar4[9] = local_6c;
      pfVar4[10] = local_68;
    }
    pfVar4[0xb] = local_64;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0x3f800000;
    puVar6[4] = 0x3f800000;
    puVar6[5] = 0x3f800000;
    puVar6[6] = 0x3f800000;
    puVar6[7] = 0;
    *puVar5 = uVar10;
    puVar5[1] = uVar10;
    puVar5[2] = uVar10;
    puVar5[3] = uVar10;
    if (((byte)param_1[0xc4] & 2) != 0) {
      pbVar11 = (byte *)((int)puVar5 + 2);
      local_8c = 4;
      pfVar4 = pfVar9;
      do {
        iVar7 = (int)ROUND((float)DAT_362c3b34 *
                           (_DAT_362c3be8 * *pfVar4 +
                            _DAT_362c3be4 * pfVar4[-1] + _DAT_362c3be0 * pfVar4[-2] + _DAT_362c3b24)
                           * DAT_362c3b20);
        if (iVar7 < 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = DAT_362c3b34 + -1;
          if (iVar7 <= DAT_362c3b34 + -1) {
            iVar12 = iVar7;
          }
        }
        uVar10 = (uint)ROUND((float)DAT_362c3b38 * -(DAT_362c3b1c * *pfVar4) * _DAT_36228810 -
                             _DAT_3622880c);
        iVar7 = (int)uVar10 >> 8;
        local_88 = DAT_362c3b38 + -1;
        if (iVar7 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = local_88;
          if (iVar7 <= local_88) {
            iVar8 = iVar7;
          }
        }
        iVar7 = iVar7 + 1;
        if (iVar7 < 0) {
          local_88 = 0;
        }
        else if (iVar7 <= local_88) {
          local_88 = iVar7;
        }
        uVar10 = uVar10 & 0xff;
        uVar10 = (((uint)*(byte *)(DAT_362c3b44 + iVar8 + iVar12 * DAT_362c3b38) * (uVar10 ^ 0xff) +
                  *(byte *)(DAT_362c3b44 + local_88 + iVar12 * DAT_362c3b38) * uVar10) *
                  DAT_362c3b28 ^ 0xff0000) >> 0x10;
        pbVar11[-2] = (byte)(pbVar11[-2] * uVar10 >> 8);
        *pbVar11 = (byte)(*pbVar11 * uVar10 >> 8);
        pbVar11[-1] = (byte)(pbVar11[-1] * uVar10 >> 8);
        pfVar4 = pfVar4 + 3;
        pbVar11 = pbVar11 + 4;
        local_8c = local_8c + -1;
        puVar5 = local_74;
      } while (local_8c != 0);
    }
    if (((byte)param_1[0xc4] & 4) != 0) {
      pbVar11 = (byte *)((int)puVar5 + 2);
      local_8c = 4;
      do {
        uVar10 = (uint)ROUND((_DAT_362c3b5c - *pfVar9) * DAT_362c3b58 * (float)DAT_362c3b4c *
                             _DAT_36228814 - _DAT_3622880c);
        iVar7 = (int)uVar10 >> 8;
        iVar12 = DAT_362c3b4c + -1;
        if (iVar7 < 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar12;
          if (iVar7 <= iVar12) {
            iVar8 = iVar7;
          }
        }
        iVar7 = iVar7 + 1;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        else if (iVar12 < iVar7) {
          iVar7 = iVar12;
        }
        uVar10 = uVar10 & 0xff;
        uVar10 = (((uint)*(byte *)(iVar8 + DAT_362c3b54) * (uVar10 ^ 0xff) +
                  *(byte *)(iVar7 + DAT_362c3b54) * uVar10) * DAT_362c3b60 ^ 0xff0000) >> 0x10;
        pbVar11[-2] = (byte)(pbVar11[-2] * uVar10 >> 8);
        pbVar11[-1] = (byte)(pbVar11[-1] * uVar10 >> 8);
        *pbVar11 = (byte)(*pbVar11 * uVar10 >> 8);
        pfVar9 = pfVar9 + 3;
        pbVar11 = pbVar11 + 4;
        local_8c = local_8c + -1;
      } while (local_8c != 0);
    }
  }
  return;
}

