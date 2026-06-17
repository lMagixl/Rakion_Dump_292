
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_AddSimpleShadow_View(class CModelInstance &,float,class Plane<float,3> const &)
    */

void __cdecl RM_AddSimpleShadow_View(CModelInstance *param_1,float param_2,Plane<float,3> *param_3)

{
  float fVar1;
  void *this;
  float *pfVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  uint *local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60 [3];
  float local_54;
  float local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x16afc0  2903
                       ?RM_AddSimpleShadow_View@@YAXAAVCModelInstance@@MABV?$Plane@M$02@@@Z */
  if ((_DAT_362280f0 <= param_2) && (DAT_362fe940 == &DAT_362fe5f4)) {
    local_c0 = fRam362fe61c;
    local_bc = fRam362fe620;
    local_b8 = fRam362fe624;
    if (_DAT_362280f0 <=
        (fRam362fe61c * *(float *)param_3 +
        fRam362fe624 * *(float *)(param_3 + 8) + fRam362fe620 * *(float *)(param_3 + 4)) -
        *(float *)(param_3 + 0xc)) {
      FUN_36091930(local_48,&local_a8,(undefined4 *)(param_1 + 0x60));
      local_24[0] = local_48[0];
      local_24[3] = local_48[1];
      local_24[1] = local_48[3];
      local_24[2] = (float)local_30;
      local_c = local_48[2];
      local_14 = local_38;
      local_10 = local_2c;
      local_8 = local_34;
      local_4 = local_28;
      pfVar8 = local_24;
      pfVar2 = local_48;
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar2 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar2 = pfVar2 + 1;
      }
      pfVar8 = local_48;
      puVar4 = local_60;
      this = (void *)FUN_3616f0b0(param_3,&local_70,&local_a8);
      FUN_36059090(this,puVar4,pfVar8);
      local_70 = 0.0;
      local_6c = 0.0;
      local_68 = 0.0;
      FUN_3605fbc0(local_60,&local_a8,&local_70);
      FUN_36162620(&local_a8,(float *)&DAT_362fe148);
      fVar1 = local_a0 * _DAT_3623cd2c;
      if (local_a0 * _DAT_3623cd2c < _DAT_362280f0) {
        fVar1 = _DAT_362280f0;
      }
      local_54 = fVar1 + local_54;
      local_88 = 3e+38;
      local_7c = -3e+38;
      local_84 = 3e+38;
      local_78 = -3e+38;
      local_80 = 3e+38;
      local_74 = -3e+38;
      CModelInstance::GetCurrentColisionBox(param_1,(AABBox<float,3> *)&local_88);
      FUN_360de4f0(&local_88,*(float *)(param_1 + 0x90),*(float *)(param_1 + 0x94),
                   *(float *)(param_1 + 0x98));
      local_b4 = local_88 * _DAT_36231e44;
      local_b0 = local_84 * _DAT_36231e44;
      local_ac = local_80 * _DAT_36231e44;
      local_d4 = local_7c * _DAT_36231e44;
      local_d0 = local_78 * _DAT_36231e44;
      local_cc = local_74 * _DAT_36231e44;
      local_c0 = local_d4;
      local_bc = local_d0;
      local_b8 = local_cc;
      local_94 = local_b4;
      local_90 = local_b0;
      local_8c = local_ac;
      FUN_3605fbc0(local_60,&local_70,&local_b4);
      local_b4 = local_94;
      local_b0 = local_90;
      local_ac = local_b8;
      FUN_3605fbc0(local_60,&local_d4,&local_b4);
      local_a8 = local_c0;
      local_a4 = local_90;
      local_a0 = local_8c;
      FUN_3605fbc0(local_60,&local_b4,&local_a8);
      local_a8 = local_c0;
      local_a4 = local_90;
      local_a0 = local_b8;
      FUN_3605fbc0(local_60,&local_c0,&local_a8);
      FUN_36162620(&local_70,(float *)&DAT_362fe118);
      FUN_36162620(&local_d4,(float *)&DAT_362fe118);
      FUN_36162620(&local_b4,(float *)&DAT_362fe118);
      FUN_36162620(&local_c0,(float *)&DAT_362fe118);
      local_c4 = 0x437f0000;
      local_c8 = (uint)ROUND(param_2 * 255.0);
      uVar10 = (local_c8 << 8 | local_c8) << 8 | local_c8;
      pfVar2 = (float *)FUN_36062560(&DAT_362c54d8,4);
      puVar3 = (uint *)FUN_36062630(&DAT_362c54f8,4);
      local_98 = puVar3;
      puVar4 = (undefined4 *)FUN_360627d0(&DAT_362c5508,4);
      *pfVar2 = local_70;
      pfVar8 = pfVar2 + 2;
      pfVar2[1] = local_6c;
      *pfVar8 = local_68;
      pfVar2[6] = local_c0;
      pfVar2[7] = local_bc;
      pfVar2[8] = local_b8;
      if ((DAT_362fe1b4 & 0x10) == 0) {
        pfVar2[3] = local_d4;
        pfVar2[4] = local_d0;
        pfVar2[5] = local_cc;
        pfVar2[9] = local_b4;
        local_cc = local_ac;
        local_d0 = local_b0;
      }
      else {
        pfVar2[3] = local_b4;
        pfVar2[4] = local_b0;
        pfVar2[5] = local_ac;
        pfVar2[9] = local_d4;
      }
      pfVar2[10] = local_d0;
      pfVar2[0xb] = local_cc;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0x3f800000;
      puVar4[4] = 0x3f800000;
      puVar4[5] = 0x3f800000;
      puVar4[6] = 0x3f800000;
      puVar4[7] = 0;
      *puVar3 = uVar10;
      puVar3[1] = uVar10;
      puVar3[2] = uVar10;
      puVar3[3] = uVar10;
      if ((DAT_362fe1b4 & 2) != 0) {
        pbVar7 = (byte *)((int)puVar3 + 2);
        local_c4 = 4;
        pfVar2 = pfVar8;
        do {
          iVar6 = (int)ROUND((float)DAT_362c3b34 *
                             (_DAT_362c3be8 * *pfVar2 +
                              _DAT_362c3be4 * pfVar2[-1] + _DAT_362c3be0 * pfVar2[-2] +
                             _DAT_362c3b24) * DAT_362c3b20);
          if (iVar6 < 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = DAT_362c3b34 + -1;
            if (iVar6 <= DAT_362c3b34 + -1) {
              iVar5 = iVar6;
            }
          }
          uVar10 = (uint)ROUND((float)DAT_362c3b38 * -(DAT_362c3b1c * *pfVar2) * _DAT_36228810 -
                               _DAT_3622880c);
          iVar6 = (int)uVar10 >> 8;
          local_c8 = DAT_362c3b38 + -1;
          if (iVar6 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = local_c8;
            if (iVar6 <= (int)local_c8) {
              iVar9 = iVar6;
            }
          }
          iVar6 = iVar6 + 1;
          if (iVar6 < 0) {
            local_c8 = 0;
          }
          else if (iVar6 <= (int)local_c8) {
            local_c8 = iVar6;
          }
          uVar10 = uVar10 & 0xff;
          uVar10 = (((uint)*(byte *)(iVar9 + iVar5 * DAT_362c3b38 + DAT_362c3b44) * (uVar10 ^ 0xff)
                    + *(byte *)(local_c8 + iVar5 * DAT_362c3b38 + DAT_362c3b44) * uVar10) *
                    DAT_362c3b28 ^ 0xff0000) >> 0x10;
          pbVar7[-2] = (byte)(pbVar7[-2] * uVar10 >> 8);
          pbVar7[-1] = (byte)(pbVar7[-1] * uVar10 >> 8);
          *pbVar7 = (byte)(*pbVar7 * uVar10 >> 8);
          pfVar2 = pfVar2 + 3;
          pbVar7 = pbVar7 + 4;
          local_c4 = local_c4 + -1;
          puVar3 = local_98;
        } while (local_c4 != 0);
      }
      if ((DAT_362fe1b4 & 4) != 0) {
        pbVar7 = (byte *)((int)puVar3 + 2);
        local_c4 = 4;
        do {
          uVar10 = (uint)ROUND((_DAT_362c3b5c - *pfVar8) * DAT_362c3b58 * (float)DAT_362c3b4c *
                               _DAT_36228814 - _DAT_3622880c);
          iVar5 = (int)uVar10 >> 8;
          iVar6 = DAT_362c3b4c + -1;
          if (iVar5 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar6;
            if (iVar5 <= iVar6) {
              iVar9 = iVar5;
            }
          }
          iVar5 = iVar5 + 1;
          if (iVar5 < 0) {
            iVar6 = 0;
          }
          else if (iVar5 <= iVar6) {
            iVar6 = iVar5;
          }
          uVar10 = uVar10 & 0xff;
          uVar10 = (((uint)*(byte *)(DAT_362c3b54 + iVar9) * (uVar10 ^ 0xff) +
                    *(byte *)(iVar6 + DAT_362c3b54) * uVar10) * DAT_362c3b60 ^ 0xff0000) >> 0x10;
          pbVar7[-2] = (byte)(pbVar7[-2] * uVar10 >> 8);
          pbVar7[-1] = (byte)(pbVar7[-1] * uVar10 >> 8);
          *pbVar7 = (byte)(*pbVar7 * uVar10 >> 8);
          pfVar8 = pfVar8 + 3;
          pbVar7 = pbVar7 + 4;
          local_c4 = local_c4 + -1;
        } while (local_c4 != 0);
      }
    }
  }
  return;
}

