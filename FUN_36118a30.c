
/* WARNING: Removing unreachable block (ram,0x36118caa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_36118a30(CEntity *param_1,float *param_2,ulong *param_3,ulong *param_4,float *param_5,
            float *param_6,undefined4 *param_7)

{
  char cVar1;
  CShadingInfo *pCVar2;
  CTerrain *pCVar3;
  CLightSource *this;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  byte local_a3;
  byte local_a2;
  byte local_a1;
  float local_a0;
  uint local_9c;
  float local_98;
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
  byte local_6b;
  byte local_6a;
  byte local_69;
  float local_68;
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  ulong uStack_3c;
  ulong uStack_38;
  int local_34;
  Vector<float,3> local_30 [48];
  
  pCVar2 = *(CShadingInfo **)(param_1 + 0x80);
  if ((pCVar2 != (CShadingInfo *)0x0) && ((*(uint *)(param_1 + 0x10) & 0x20) == 0)) {
    if ((*(uint *)(param_1 + 0x10) & 0x400000) == 0) {
      CEntity::FindShadingInfo(param_1);
    }
    else {
      CShadingInfo::~CShadingInfo(pCVar2);
      operator_delete(pCVar2);
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
  }
  iVar4 = CListHead::IsEmpty((CListHead *)&DAT_362fcb64);
  if ((iVar4 == 0) && (DAT_362fcb64 != DAT_362fcb6c)) {
    iVar4 = FUN_3611fa60(0x362fcb64);
    FUN_36122380(&DAT_362fcb64);
    FUN_36122330(&DAT_362fcb64,iVar4);
  }
  _DAT_362fcb78 = 0;
  pCVar2 = *(CShadingInfo **)(param_1 + 0x80);
  if (pCVar2 != (CShadingInfo *)0x0) {
    pCVar3 = *(CTerrain **)(pCVar2 + 0xc);
    if (pCVar3 == (CTerrain *)0x0) {
      if (*(int **)(pCVar2 + 8) == (int *)0x0) {
        _DAT_362fcb78 = 0;
        return 0;
      }
      if (DAT_362fcbc8 != 0) {
        iVar4 = **(int **)(pCVar2 + 8);
        *param_7 = *(undefined4 *)(iVar4 + 4);
        param_7[1] = *(undefined4 *)(iVar4 + 8);
        param_7[2] = *(undefined4 *)(iVar4 + 0xc);
        param_7[3] = *(undefined4 *)(iVar4 + 0x10);
        iVar4 = *(int *)(*(int *)(param_1 + 0x80) + 8);
        if ((*(uint *)(iVar4 + 200) & 0x4000) != 0) {
          uVar5 = *(ulong *)(iVar4 + 0xcc);
          uVar6 = LerpColor(0,uVar5,0.25);
          *param_3 = uVar6;
          uVar5 = LerpColor(0,uVar5,0.33);
          *param_4 = uVar5;
          *param_5 = (float)(*(uint *)(*(int *)(*(int *)(param_1 + 0x80) + 8) + 0xcc) & 0xff) *
                     _DAT_362287a4;
          *param_6 = 1.0;
          param_6[1] = -1.0;
          param_6[2] = 1.0;
          return 1;
        }
        uVar9 = *(uint *)(*(int *)(iVar4 + 0x1ac) + 0x40);
        uVar12 = uVar9 >> 0x18;
        local_9c = uVar9 >> 0x10 & 0xff;
        local_64 = uVar9 >> 8 & 0xff;
        *param_5 = 0.0;
        piVar11 = *(int **)(iVar4 + 0x160);
        do {
          while( true ) {
            if (*piVar11 == 0) {
              local_78 = 0.0;
              local_74 = 0.0;
              local_a0 = 0.0;
              local_8c = 0.0;
              local_88 = 0.0;
              local_84 = 0.0;
              iVar13 = 0;
              iVar4 = FUN_3611f620(0x362fcb64);
              if (0 < iVar4) {
                do {
                  iVar4 = FUN_361200f0(&DAT_362fcb64,iVar13);
                  local_78 = local_78 + *(float *)(iVar4 + 0x14);
                  iVar13 = iVar13 + 1;
                  local_74 = local_74 + *(float *)(iVar4 + 0x18);
                  local_a0 = local_a0 + *(float *)(iVar4 + 0x1c);
                  local_90 = ABS(*(float *)(iVar4 + 0x1c) + *(float *)(iVar4 + 0x18) +
                                 *(float *)(iVar4 + 0x14)) * _DAT_36237a84;
                  local_98 = *(float *)(iVar4 + 4) * local_90;
                  local_94 = *(float *)(iVar4 + 8) * local_90;
                  local_90 = *(float *)(iVar4 + 0xc) * local_90;
                  local_8c = local_98 + local_8c;
                  local_88 = local_94 + local_88;
                  local_84 = local_90 + local_84;
                  local_54 = local_98;
                  local_50 = local_94;
                  local_4c = local_90;
                  iVar4 = FUN_3611f620(0x362fcb64);
                } while (iVar13 < iVar4);
              }
              fVar8 = SQRT(local_8c * local_8c + local_88 * local_88 + local_84 * local_84);
              if (fVar8 <= _DAT_362253e4) {
                local_54 = 0.0;
                local_50 = 0.0;
                local_4c = 0.0;
                local_8c = 0.0;
                local_88 = 0.0;
                local_84 = 0.0;
              }
              else {
                fVar8 = _DAT_36223384 / fVar8;
                local_8c = local_8c * fVar8;
                local_88 = local_88 * fVar8;
                local_84 = local_84 * fVar8;
              }
              local_80 = 0.0;
              local_68 = 0.0;
              local_70 = 0.0;
              iVar13 = 0;
              iVar4 = FUN_3611f620(0x362fcb64);
              if (0 < iVar4) {
                do {
                  iVar4 = FUN_361200f0(&DAT_362fcb64,iVar13);
                  fVar8 = local_8c * *(float *)(iVar4 + 4) +
                          local_88 * *(float *)(iVar4 + 8) + local_84 * *(float *)(iVar4 + 0xc);
                  if (fVar8 < _DAT_3622376c) {
                    fVar8 = _DAT_3622376c;
                  }
                  iVar13 = iVar13 + 1;
                  local_80 = fVar8 * *(float *)(iVar4 + 0x14) + local_80;
                  local_68 = fVar8 * *(float *)(iVar4 + 0x18) + local_68;
                  local_70 = fVar8 * *(float *)(iVar4 + 0x1c) + local_70;
                  iVar4 = FUN_3611f620(0x362fcb64);
                } while (iVar13 < iVar4);
              }
              cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0x80) + 8) + 0x18c);
              uVar9 = local_64;
              if (((cVar1 != '\0') &&
                  (piVar11 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x80)
                                                                          + 8) + 0x1ac) + 0x38) +
                                               0x14) + 0x668), piVar11 != (int *)0x0)) &&
                 (iVar4 = (**(code **)(*piVar11 + 0xd4))(cVar1,&local_54), uVar9 = local_64,
                 iVar4 != 0)) {
                iVar4 = *(int *)(param_1 + 0x80);
                local_7c = ((local_54 * *(float *)(iVar4 + 0x10) +
                            local_4c * *(float *)(iVar4 + 0x18) +
                            local_50 * *(float *)(iVar4 + 0x14)) - fStack_48) /
                           (fStack_44 - fStack_48);
                if (local_7c < _DAT_3622376c) {
                  local_7c = 0.0;
                }
                else if (local_7c < _DAT_36223384 == (local_7c == _DAT_36223384)) {
                  local_7c = 1.0;
                }
                uVar5 = LerpColor(uStack_3c,uStack_38,local_7c);
                uVar9 = uVar5 >> 8 & 0xff;
                uVar10 = uVar5 >> 0x10 & 0xff;
                if (iStack_40 == 0) {
                  uVar12 = uVar12 + (uVar5 >> 0x18);
                  local_9c = local_9c + uVar10;
                  uVar9 = local_64 + uVar9;
                }
                else {
                  uVar12 = uVar12 - (uVar5 >> 0x18);
                  local_9c = local_9c - uVar10;
                  uVar9 = local_64 - uVar9;
                }
              }
              if ((int)uVar12 < 0) {
                uVar12 = 0;
              }
              else if (0xff < (int)uVar12) {
                uVar12 = 0xff;
              }
              if ((int)local_9c < 0) {
                local_9c = 0;
              }
              else if (0xff < (int)local_9c) {
                local_9c = 0xff;
              }
              if ((int)uVar9 < 0) {
                uVar9 = 0;
              }
              else if (0xff < (int)uVar9) {
                uVar9 = 0xff;
              }
              local_78 = (float)((int)ROUND(local_78 - local_80) + uVar12);
              if ((int)local_78 < 0) {
                local_78 = 0.0;
              }
              else if (0xff < (int)local_78) {
                local_78 = 3.57331e-43;
              }
              local_74 = (float)((int)ROUND(local_74 - local_68) + local_9c);
              if ((int)local_74 < 0) {
                local_74 = 0.0;
              }
              else if (0xff < (int)local_74) {
                local_74 = 3.57331e-43;
              }
              local_a0 = (float)((int)ROUND(local_a0 - local_70) + uVar9);
              if ((int)local_a0 < 0) {
                local_a0 = 0.0;
              }
              else if (0xff < (int)local_a0) {
                local_a0 = 3.57331e-43;
              }
              iVar4 = (int)ROUND(local_80);
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              else if (0xff < iVar4) {
                iVar4 = 0xff;
              }
              local_9c = (uint)ROUND(local_68);
              if ((int)local_9c < 0) {
                iVar13 = 0;
              }
              else {
                iVar13 = local_9c;
                if (0xff < (int)local_9c) {
                  iVar13 = 0xff;
                }
              }
              local_68 = (float)(int)ROUND(local_70);
              if ((int)local_68 < 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (uint)local_68;
                if (0xff < (int)local_68) {
                  uVar9 = 0xff;
                }
              }
              *param_3 = ((uint)CONCAT11((char)iVar4,(char)iVar13) << 8 | uVar9 & 0xff) << 8;
              *param_4 = (uint)CONCAT21(CONCAT11(local_78._0_1_,local_74._0_1_),local_a0._0_1_) << 8
              ;
              uVar5 = MulColors(*(ulong *)(*(int *)(*(int *)(param_1 + 0x80) + 8) + 0xcc),
                                *(ulong *)(*(int *)(*(int *)(local_34 + 4) + 0xc) +
                                           (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x80) + 8) +
                                                          0x18a) * 0xc + 8));
              uVar6 = MulColors(*param_3,uVar5);
              *param_3 = uVar6;
              uVar5 = MulColors(*param_4,uVar5);
              *param_4 = uVar5;
              *param_6 = local_8c;
              param_6[1] = local_88;
              param_6[2] = local_84;
              return 1;
            }
            this = (CLightSource *)piVar11[5];
            CLightSource::GetLightColor(this,&local_a1,&local_a2,&local_a3);
            CLightSource::GetLightAmbient(this,&local_6a,&local_6b,&local_69);
            iVar4 = *(int *)(param_1 + 0x80);
            if ((*(uint *)(*(int *)(iVar4 + 8) + 200) & 0x1000000) != 0) {
              uVar12 = uVar12 + local_6a;
              local_9c = local_9c + local_6b;
              local_64 = local_64 + local_69;
            }
            if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) break;
            local_70 = CBrushShadowLayer::GetLightStrength
                                 ((CBrushShadowLayer *)(piVar11 + -1),*(long *)(iVar4 + 0x1c),
                                  *(long *)(iVar4 + 0x20),*(float *)(iVar4 + 0x24),
                                  *(float *)(iVar4 + 0x28));
            if (_DAT_362280f0 <= local_70) goto LAB_36118dff;
LAB_361190db:
            piVar11 = (int *)*piVar11;
          }
          local_70 = 1.0;
LAB_36118dff:
          iVar4 = *(int *)(this + 0xc);
          if (((byte)this[0x1c] & 1) == 0) {
            local_8c = *param_2 - *(float *)(iVar4 + 0x3c);
            local_88 = param_2[1] - *(float *)(iVar4 + 0x40);
            local_84 = param_2[2] - *(float *)(iVar4 + 0x44);
            local_7c = SQRT(local_8c * local_8c + local_88 * local_88 + local_84 * local_84);
            local_60 = local_8c;
            local_5c = local_88;
            local_58 = local_84;
            if (*(float *)(this + 0x24) < local_7c) goto LAB_361190db;
            if (*(float *)(this + 0x20) <= local_7c) {
              local_80 = (*(float *)(this + 0x24) - local_7c) /
                         (*(float *)(this + 0x24) - *(float *)(this + 0x20));
            }
            else {
              local_80 = 1.0;
            }
          }
          else {
            local_80 = 1.0;
            AnglesToDirectionVector((Vector<float,3> *)(iVar4 + 0x48),(Vector<float,3> *)&local_8c);
            if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x80) + 8) + 200) & 0x10000) == 0) {
              local_a3 = 0;
              local_a2 = 0;
              local_a1 = 0;
            }
            local_7c = 1.0;
          }
          puVar7 = (undefined4 *)FUN_36122a80(&DAT_362fcb64);
          fVar8 = _DAT_362253e4;
          *puVar7 = this;
          if (local_7c <= fVar8) {
            local_54 = 0.0;
            puVar7[1] = 0;
            local_50 = 0.0;
            local_4c = 0.0;
            puVar7[2] = 0;
            fVar8 = 0.0;
          }
          else {
            fVar8 = _DAT_36223384 / local_7c;
            local_98 = local_8c * fVar8;
            puVar7[1] = local_98;
            local_94 = local_88 * fVar8;
            puVar7[2] = local_94;
            fVar8 = local_84 * fVar8;
            local_90 = fVar8;
          }
          puVar7[3] = fVar8;
          if (((byte)this[0x1c] & 0x10) != 0) {
            iVar4 = local_a1 - uVar12;
            if (iVar4 < 0) {
              local_a1 = 0;
            }
            else if (iVar4 < 0x100) {
              local_a1 = (byte)iVar4;
            }
            else {
              local_a1 = 0xff;
            }
            iVar4 = local_a2 - local_9c;
            if (iVar4 < 0) {
              local_a2 = 0;
            }
            else if (iVar4 < 0x100) {
              local_a2 = (byte)iVar4;
            }
            else {
              local_a2 = 0xff;
            }
            iVar4 = local_a3 - local_64;
            if (iVar4 < 0) {
              local_a3 = 0;
            }
            else if (iVar4 < 0x100) {
              local_a3 = (byte)iVar4;
            }
            else {
              local_a3 = 0xff;
            }
          }
          fVar8 = (float)((uint)local_a1 + (uint)local_a2 + (uint)local_a3) * _DAT_36237a88 *
                  local_70;
          puVar7[4] = fVar8;
          *param_5 = fVar8 + *param_5;
          if (((byte)this[0x1c] & 8) == 0) {
            puVar7[5] = (float)local_a1 * local_80;
            puVar7[6] = (float)local_a2 * local_80;
            local_a0 = (float)(uint)local_a3;
            puVar7[7] = (float)(int)local_a0 * local_80;
            goto LAB_361190db;
          }
          puVar7[5] = (float)(int)-(uint)local_a1 * local_80;
          puVar7[6] = (float)(int)-(uint)local_a2 * local_80;
          local_a0 = (float)-(uint)local_a3;
          puVar7[7] = (float)(int)local_a0 * local_80;
          piVar11 = (int *)*piVar11;
        } while( true );
      }
    }
    else if (DAT_362fcbc8 != 0) {
      uVar5 = TR_GetShadeColor(pCVar3,pCVar2);
      uVar6 = MulColors(uVar5,0xd8d8d8ff);
      *param_3 = uVar6;
      uVar5 = MulColors(uVar5,0xb2b2b2ff);
      *param_4 = uVar5;
      local_98 = 1.0;
      *param_6 = 1.0;
      local_94 = -1.0;
      param_6[1] = -1.0;
      local_90 = 1.0;
      param_6[2] = 1.0;
      *param_5 = 0.5;
      TR_GetMatrixFromEntity((float *)local_30,pCVar3);
      puVar7 = (undefined4 *)TR_GetPlaneFromPoint((CTerrain *)&local_54,(float *)pCVar3,local_30);
      *param_7 = *puVar7;
      param_7[1] = puVar7[1];
      param_7[2] = puVar7[2];
      param_7[3] = puVar7[3];
      return 1;
    }
    *param_3 = 0;
    *param_4 = 0x7f7f7f00;
    *param_6 = 1.0;
    param_6[1] = -1.0;
    param_6[2] = 1.0;
  }
  return 0;
}

