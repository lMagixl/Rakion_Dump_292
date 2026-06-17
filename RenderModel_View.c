
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CModelObject::RenderModel_View(class CRenderModel &) */

void __thiscall CModelObject::RenderModel_View(CModelObject *this,CRenderModel *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  float fVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  float fVar8;
  float fVar9;
  undefined1 uVar10;
  float *pfVar11;
  uint *puVar12;
  undefined4 *puVar13;
  long lVar14;
  CRenderModel *pCVar15;
  int iVar16;
  byte bVar17;
  undefined1 uVar18;
  int iVar19;
  int extraout_ECX;
  float *extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar20;
  float fVar21;
  int iVar22;
  undefined1 uVar23;
  byte bVar24;
  int extraout_EDX;
  float fVar25;
  uint uVar26;
  uint uVar27;
  ushort *puVar28;
  uint uVar29;
  CTextureData *pCVar30;
  int iVar31;
  CTextureData *pCVar32;
  int iVar33;
  float *pfVar34;
  undefined8 uVar35;
  ushort extraout_ST1h;
  unkbyte10 in_ST3;
  undefined8 uVar36;
  unkbyte10 in_ST4;
  ushort uVar37;
  undefined4 uVar38;
  float local_a4 [4];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [4];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CTextureData *local_5c;
  float local_58;
  float local_54;
  CModelObject *local_50;
  float local_4c;
  undefined4 local_48;
  float *local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  CRenderModel *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  int local_14;
  CTextureData *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0xc2d40  3149  ?RenderModel_View@CModelObject@@AAEXAAVCRenderModel@@@Z */
  DAT_362cba5c = *(int *)(_pGfx + 0xa38);
  if (DAT_362cba5c == -1) {
    return;
  }
  local_50 = this;
  if ((((*(uint *)(param_1 + 0xc4) & 0x200) == 0) || (DAT_362c540c != 0)) &&
     (iVar31 = *(int *)(_pGfx + 0xaf4), 0 < iVar31)) {
    if (DAT_362c53f4 != 0) {
      (*DAT_362c46bc)();
      goto LAB_360c2dca;
    }
    if (*(int *)(param_1 + 0x1c) <= iVar31) {
      iVar31 = *(int *)(param_1 + 0x1c);
    }
    if (0 < iVar31) {
      FUN_3607c020(iVar31,DAT_362a40b4);
      (*DAT_362c46bc)();
      goto LAB_360c2dca;
    }
  }
  (*DAT_362c46c0)();
LAB_360c2dca:
  if (((byte)param_1[0xc4] & 0x10) == 0) {
    uVar38 = 0x41;
  }
  else {
    uVar38 = 0x40;
  }
  (*DAT_362c4658)(uVar38);
  local_14 = *(int *)(param_1 + 4);
  iVar31 = *(int *)param_1;
  _DAT_362cbb8c = -*(float *)(DAT_362cabb8 + 0x110);
  _DAT_362cbb90 = -*(float *)(DAT_362cabb8 + 0x114);
  local_c = (float *)(DAT_362cabb8 + 0xf8);
  _DAT_362cbb94 = -*(float *)(DAT_362cabb8 + 0x118);
  local_2c = param_1 + 0x40;
  local_80[0] = *(float *)(param_1 + 0x40);
  local_80[1] = *(float *)(param_1 + 0x4c);
  local_80[2] = *(float *)(param_1 + 0x58);
  local_80[3] = *(float *)(param_1 + 0x44);
  local_70 = *(float *)(param_1 + 0x50);
  local_6c = *(float *)(param_1 + 0x5c);
  local_68 = *(float *)(param_1 + 0x48);
  local_64 = *(float *)(param_1 + 0x54);
  local_60 = *(float *)(param_1 + 0x60);
  pfVar11 = local_80;
  pfVar34 = local_a4;
  for (iVar19 = 9; iVar19 != 0; iVar19 = iVar19 + -1) {
    *pfVar34 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar34 = pfVar34 + 1;
  }
  local_40 = local_a4[0] * _DAT_362cbb8c + local_a4[1] * _DAT_362cbb90 + local_a4[2] * _DAT_362cbb94
  ;
  local_3c = local_a4[3] * _DAT_362cbb8c + local_94 * _DAT_362cbb90 + local_90 * _DAT_362cbb94;
  local_38 = local_8c * _DAT_362cbb8c + local_88 * _DAT_362cbb90 + local_84 * _DAT_362cbb94;
  _DAT_362cbb98 = local_40;
  _DAT_362cbb9c = local_3c;
  _DAT_362cbba0 = local_38;
  *(float *)(DAT_362bef74 + 0x264) =
       (float)*(int *)(iVar31 + 0x124) + *(float *)(DAT_362bef74 + 0x264);
  *(float *)(DAT_362bef74 + 0x250) =
       (float)*(int *)(local_14 + 0x4c) + *(float *)(DAT_362bef74 + 0x250);
  DAT_362cba68 = *(int *)(local_14 + 0x28);
  DAT_362cba6c = *(int *)(local_14 + 0x2c);
  FUN_36062560(&DAT_362cbaac,DAT_362cba68);
  FUN_360627d0(&DAT_362cbabc,DAT_362cba68);
  FUN_36062630(&DAT_362cbadc,DAT_362cba68 + 1);
  DAT_362cbae4 = DAT_362cbae4 + -1;
  FUN_36084390(&DAT_362cbacc,DAT_362cba68);
  FUN_360627d0(&DAT_362cbaec,DAT_362cba68);
  FUN_36091ac0(&DAT_362cbafc,DAT_362cba68);
  FUN_360c5e60(&DAT_362cbb0c,DAT_362cba68);
  FUN_36091ac0(&DAT_362cbb1c,DAT_362cba68);
  FUN_36062560(&DAT_362cbb2c,DAT_362cba6c);
  FUN_360627d0(&DAT_362cbb4c,DAT_362cba6c);
  FUN_36062630(&DAT_362cbb5c,DAT_362cba6c);
  if (DAT_362c44d0 != 0) {
    FUN_36084390(&DAT_362cbb3c,DAT_362cba6c);
  }
  if ((DAT_362a4104 == 0) || (local_30 = 1, *(int *)(_pGfx + 0xadc) < 2)) {
    local_30 = 0;
  }
  uVar26 = *(uint *)(param_1 + 0xe0);
  uVar29 = *(uint *)(param_1 + 0xe4);
  uVar27 = (uint)(local_30 == 0);
  local_8 = (CTextureData *)(0x18 - uVar27);
  DAT_362cba74 = (uVar26 & 0xff000000) >> ((byte)local_8 & 0x1f);
  local_28 = (float)(0x10 - uVar27);
  DAT_362cba78 = (uVar26 & 0xff0000) >> (SUB41(local_28,0) & 0x1f);
  bVar17 = 8 - (local_30 == 0);
  DAT_362cba7c = (uVar26 & 0xff00) >> (bVar17 & 0x1f);
  DAT_362cba80 = (uVar29 & 0xff000000) >> ((byte)local_8 & 0x1f);
  DAT_362cba84 = (uVar29 & 0xff0000) >> (SUB41(local_28,0) & 0x1f);
  DAT_362cba88 = (uVar29 & 0xff00) >> (bVar17 & 0x1f);
  if (local_30 != 0) {
    if (0x7f < (int)DAT_362cba80) {
      DAT_362cba80 = 0x7f;
    }
    if (0x7f < (int)DAT_362cba84) {
      DAT_362cba84 = 0x7f;
    }
    if (0x7f < (int)DAT_362cba88) {
      DAT_362cba88 = 0x7f;
    }
  }
  DAT_362cba64 = *(undefined4 *)(local_50 + 0x90);
  DAT_362cba58 = (uint)(param_1[200] != (CRenderModel)0xff);
  DAT_362cba54 = *(uint *)(local_14 + 0x48);
  iVar31 = 0;
  if (DAT_362cba58 != 0) {
    DAT_362cba54 = DAT_362cba54 & 0xfdffffff | 0x4000000;
  }
  DAT_362cba48 = DAT_362cbab0;
  DAT_362cba44 = DAT_362cbad0;
  DAT_362cba4c = DAT_362cbae0;
  if ((DAT_362c44d0 == 0) && ((DAT_362cba54 & 0x14) == 0)) {
    iVar19 = 0;
  }
  else {
    iVar19 = 1;
  }
  FUN_360c1190(iVar19);
  pfVar11 = DAT_362cbb10;
  DAT_362cba40 = DAT_362cbac0;
  DAT_362cba38 = DAT_362cbb00;
  DAT_362cba3c = DAT_362cbaf0;
  DAT_362cba34 = DAT_362cbb10;
  DAT_362cba30 = DAT_362cbb20;
  if (((byte)param_1[0xc4] & 4) != 0) {
    _DAT_362cba20 =
         (*(float *)(param_1 + 0x3c) - *(float *)(DAT_362cabb8 + 0x48)) * _DAT_362cbb94 +
         (*(float *)(param_1 + 0x38) - *(float *)(DAT_362cabb8 + 0x44)) * _DAT_362cbb90 +
         (*(float *)(param_1 + 0x34) - *(float *)(DAT_362cabb8 + 0x40)) * _DAT_362cbb8c +
         -DAT_362c3afc;
    if ((DAT_362cba68 < 0xd) || (iVar19 = FUN_360c0fb0((float *)(param_1 + 0xac)), iVar19 != 0)) {
      if ((DAT_362cba54 & 0x2000000) == 0) {
        if ((DAT_362cba54 & 0x4000000) == 0) {
          iVar31 = 0;
          if (0 < DAT_362cba68) {
            local_10 = (CTextureData *)0x0;
            do {
              local_44 = pfVar11;
              FUN_360c0750((float *)(local_10 + DAT_362cba48),pfVar11);
              local_8 = (CTextureData *)
                        ((float)DAT_362c3b4c * *extraout_ECX_00 * _DAT_36228814 - _DAT_3622880c);
              local_28 = (float)(int)ROUND((float)local_8);
              fVar21 = (float)((int)local_28 >> 8);
              local_1c = (float)(DAT_362c3b4c + -1);
              if ((int)fVar21 < 0) {
                fVar25 = 0.0;
              }
              else {
                fVar25 = local_1c;
                if ((int)fVar21 <= (int)local_1c) {
                  fVar25 = fVar21;
                }
              }
              fVar21 = (float)((int)fVar21 + 1);
              if ((int)fVar21 < 0) {
                local_1c = 0.0;
              }
              else if ((int)local_1c < (int)fVar21) {
              }
              else {
                local_1c = fVar21;
              }
              *(byte *)(DAT_362cba30 + iVar31) =
                   ~(byte)(((uint)*(byte *)((int)fVar25 + DAT_362c3b54) *
                            ((uint)local_28 & 0xff ^ 0xff) +
                           (uint)*(byte *)((int)local_1c + DAT_362c3b54) * ((uint)local_28 & 0xff))
                           * DAT_362c3b60 >> 0x10);
              iVar31 = iVar31 + 1;
              pfVar11 = local_44 + 1;
              local_44 = pfVar11;
              local_10 = local_10 + 0xc;
            } while (iVar31 < DAT_362cba68);
          }
        }
        else if (0 < DAT_362cba68) {
          local_18 = (CTextureData *)0x0;
          do {
            FUN_360c0750((float *)((int)local_18 + DAT_362cba48),&local_1c);
            local_8 = (CTextureData *)
                      ((float)DAT_362c3b4c * local_1c * _DAT_36228814 - _DAT_3622880c);
            local_28 = (float)(int)ROUND((float)local_8);
            pCVar30 = (CTextureData *)((int)local_28 >> 8);
            local_10 = (CTextureData *)(DAT_362c3b4c + -1);
            if ((int)pCVar30 < 0) {
              pCVar32 = (CTextureData *)0x0;
            }
            else {
              pCVar32 = local_10;
              if ((int)pCVar30 <= (int)local_10) {
                pCVar32 = pCVar30;
              }
            }
            pCVar30 = pCVar30 + 1;
            if ((int)pCVar30 < 0) {
              local_10 = (CTextureData *)0x0;
            }
            else if ((int)local_10 < (int)pCVar30) {
            }
            else {
              local_10 = pCVar30;
            }
            *(byte *)(DAT_362cba30 + iVar31) =
                 ~(byte)(((uint)(byte)pCVar32[DAT_362c3b54] * ((uint)local_28 & 0xff ^ 0xff) +
                         (uint)(byte)local_10[DAT_362c3b54] * ((uint)local_28 & 0xff)) *
                         DAT_362c3b60 >> 0x10);
            iVar31 = iVar31 + 1;
            local_18 = (CTextureData *)((int)local_18 + 0xc);
          } while (iVar31 < DAT_362cba68);
        }
      }
      else if (0 < DAT_362cba68) {
        iVar19 = 0;
        do {
          FUN_360c0750((float *)(DAT_362cba48 + iVar19),pfVar11);
          iVar31 = iVar31 + 1;
          pfVar11 = (float *)(extraout_ECX + 4);
          iVar19 = extraout_EDX + 0xc;
        } while (iVar31 < DAT_362cba68);
      }
    }
    else {
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffb;
    }
  }
  if (((byte)param_1[0xc4] & 2) != 0) {
    local_a4[0] = *(float *)(param_1 + 0x70);
    local_a4[1] = (float)*(undefined4 *)(param_1 + 0x7c);
    local_a4[2] = (float)*(undefined4 *)(param_1 + 0x88);
    local_a4[3] = (float)*(undefined4 *)(param_1 + 0x74);
    local_94 = (float)*(undefined4 *)(param_1 + 0x80);
    local_90 = (float)*(undefined4 *)(param_1 + 0x8c);
    local_8c = (float)*(undefined4 *)(param_1 + 0x78);
    local_88 = (float)*(undefined4 *)(param_1 + 0x84);
    local_84 = (float)*(undefined4 *)(param_1 + 0x90);
    pfVar11 = local_a4;
    pfVar34 = local_80;
    for (iVar31 = 9; iVar31 != 0; iVar31 = iVar31 + -1) {
      *pfVar34 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar34 = pfVar34 + 1;
    }
    _DAT_362cbbc0 = (local_80[1] + local_80[0]) * _DAT_3622376c - local_80[2] * _DAT_36223384;
    local_40 = _DAT_362cbbc0;
    _DAT_362cbbc4 = (local_70 + local_80[3]) * _DAT_3622376c - local_6c * _DAT_36223384;
    local_3c = _DAT_362cbbc4;
    _DAT_362cbbc8 = (local_64 + local_68) * _DAT_3622376c - local_60 * _DAT_36223384;
    local_38 = _DAT_362cbbc8;
    local_a4[0] = *local_c;
    local_a4[1] = local_c[3];
    local_a4[2] = local_c[6];
    local_a4[3] = local_c[1];
    local_94 = local_c[4];
    local_90 = local_c[7];
    local_8c = local_c[2];
    local_84 = local_c[8];
    local_88 = local_c[5];
    pfVar11 = local_a4;
    pfVar34 = local_80;
    for (iVar31 = 9; iVar31 != 0; iVar31 = iVar31 + -1) {
      *pfVar34 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar34 = pfVar34 + 1;
    }
    local_a4[0] = local_80[2] * *(float *)(param_1 + 0x88) +
                  local_80[1] * *(float *)(param_1 + 0x7c) +
                  local_80[0] * *(float *)(param_1 + 0x70);
    local_a4[1] = local_80[2] * *(float *)(param_1 + 0x8c) +
                  local_80[1] * *(float *)(param_1 + 0x80) +
                  local_80[0] * *(float *)(param_1 + 0x74);
    local_a4[2] = local_80[2] * *(float *)(param_1 + 0x90) +
                  local_80[1] * *(float *)(param_1 + 0x84) +
                  local_80[0] * *(float *)(param_1 + 0x78);
    local_a4[3] = local_6c * *(float *)(param_1 + 0x88) +
                  local_70 * *(float *)(param_1 + 0x7c) + local_80[3] * *(float *)(param_1 + 0x70);
    local_94 = local_6c * *(float *)(param_1 + 0x8c) +
               local_70 * *(float *)(param_1 + 0x80) + local_80[3] * *(float *)(param_1 + 0x74);
    local_90 = local_6c * *(float *)(param_1 + 0x90) +
               local_70 * *(float *)(param_1 + 0x84) + local_80[3] * *(float *)(param_1 + 0x78);
    local_8c = local_60 * *(float *)(param_1 + 0x88) +
               local_64 * *(float *)(param_1 + 0x7c) + local_68 * *(float *)(param_1 + 0x70);
    local_88 = local_60 * *(float *)(param_1 + 0x8c) +
               local_64 * *(float *)(param_1 + 0x80) + local_68 * *(float *)(param_1 + 0x74);
    local_84 = local_60 * *(float *)(param_1 + 0x90) +
               local_64 * *(float *)(param_1 + 0x84) + local_68 * *(float *)(param_1 + 0x78);
    pfVar11 = local_a4;
    pfVar34 = local_80;
    for (iVar31 = 9; iVar31 != 0; iVar31 = iVar31 + -1) {
      *pfVar34 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar34 = pfVar34 + 1;
    }
    local_a4[0] = local_80[0];
    local_a4[1] = local_80[3];
    local_a4[3] = local_80[1];
    local_a4[2] = local_68;
    local_90 = local_64;
    local_94 = local_70;
    local_88 = local_6c;
    local_8c = local_80[2];
    local_84 = local_60;
    pfVar11 = local_a4;
    pfVar34 = local_80;
    for (iVar31 = 9; iVar31 != 0; iVar31 = iVar31 + -1) {
      *pfVar34 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar34 = pfVar34 + 1;
    }
    _DAT_362cbbcc =
         local_80[0] * _DAT_362c3bd4 + local_80[1] * _DAT_362c3bd8 + local_80[2] * _DAT_362c3bdc;
    _DAT_362cbbd0 =
         local_80[3] * _DAT_362c3bd4 + local_70 * _DAT_362c3bd8 + local_6c * _DAT_362c3bdc;
    _DAT_362cbbd4 = local_68 * _DAT_362c3bd4 + local_64 * _DAT_362c3bd8 + local_60 * _DAT_362c3bdc;
    _DAT_362cba28 =
         (*(float *)(param_1 + 0x3c) - *(float *)(DAT_362cabb8 + 0x48)) * _DAT_362cbb94 +
         (*(float *)(param_1 + 0x38) - *(float *)(DAT_362cabb8 + 0x44)) * _DAT_362cbb90 +
         (*(float *)(param_1 + 0x34) - *(float *)(DAT_362cabb8 + 0x40)) * _DAT_362cbb8c;
    _DAT_362cba24 =
         _DAT_362c3bd4 * *(float *)(param_1 + 0x34) +
         _DAT_362c3bd8 * *(float *)(param_1 + 0x38) + _DAT_362c3bdc * *(float *)(param_1 + 0x3c) +
         DAT_362c3b84;
    local_40 = _DAT_362cbbcc;
    local_3c = _DAT_362cbbd0;
    local_38 = _DAT_362cbbd4;
    if ((DAT_362cba68 < 0x11) || (iVar31 = FUN_360c0d40((float *)(param_1 + 0xac)), iVar31 != 0)) {
      if ((DAT_362cba54 & 0x2000000) == 0) {
        local_44 = (float *)0x0;
        if ((DAT_362cba54 & 0x4000000) == 0) {
          if (0 < DAT_362cba68) {
            local_18 = (CTextureData *)0x0;
            pfVar11 = DAT_362cba3c;
            do {
              FUN_360c06e0((float *)(DAT_362cba48 + (int)local_18),pfVar11);
              local_28 = (float)(int)ROUND((float)DAT_362c3b34 * pfVar11[1]);
              if ((int)local_28 < 0) {
                fVar21 = 0.0;
              }
              else {
                fVar21 = local_28;
                if ((int)(DAT_362c3b34 - 1U) < (int)local_28) {
                  fVar21 = (float)(DAT_362c3b34 - 1U);
                }
              }
              local_8 = (CTextureData *)
                        ((float)DAT_362c3b38 * *pfVar11 * _DAT_36228810 - _DAT_3622880c);
              local_c = (float *)(int)ROUND((float)local_8);
              pCVar30 = (CTextureData *)((int)local_c >> 8);
              local_10 = (CTextureData *)(DAT_362c3b38 + -1);
              if ((int)pCVar30 < 0) {
                pCVar32 = (CTextureData *)0x0;
              }
              else {
                pCVar32 = local_10;
                if ((int)pCVar30 <= (int)local_10) {
                  pCVar32 = pCVar30;
                }
              }
              pCVar30 = pCVar30 + 1;
              if ((int)pCVar30 < 0) {
                local_10 = (CTextureData *)0x0;
              }
              else if ((int)pCVar30 <= (int)local_10) {
                local_10 = pCVar30;
              }
              *(byte *)(DAT_362cba38 + (int)local_44) =
                   ~(byte)(((uint)(byte)pCVar32[DAT_362c3b44 + DAT_362c3b38 * (int)fVar21] *
                            ((uint)local_c & 0xff ^ 0xff) +
                           (uint)(byte)local_10[DAT_362c3b44 + DAT_362c3b38 * (int)fVar21] *
                           ((uint)local_c & 0xff)) * DAT_362c3b28 >> 0x10);
              local_44 = (float *)((int)local_44 + 1);
              local_18 = (CTextureData *)((int)local_18 + 0xc);
              pfVar11 = pfVar11 + 2;
            } while ((int)local_44 < DAT_362cba68);
          }
        }
        else if (0 < DAT_362cba68) {
          local_1c = 0.0;
          do {
            FUN_360c06e0((float *)(DAT_362cba48 + (int)local_1c),&local_58);
            local_28 = (float)(int)ROUND((float)DAT_362c3b34 * local_54);
            if ((int)local_28 < 0) {
              fVar21 = 0.0;
            }
            else {
              fVar21 = local_28;
              if ((int)(DAT_362c3b34 - 1U) < (int)local_28) {
                fVar21 = (float)(DAT_362c3b34 - 1U);
              }
            }
            local_8 = (CTextureData *)
                      ((float)DAT_362c3b38 * local_58 * _DAT_36228810 - _DAT_3622880c);
            local_c = (float *)(int)ROUND((float)local_8);
            iVar19 = (int)local_c >> 8;
            iVar31 = DAT_362c3b38 + -1;
            if (iVar19 < 0) {
              iVar22 = 0;
            }
            else {
              iVar22 = iVar31;
              if (iVar19 <= iVar31) {
                iVar22 = iVar19;
              }
            }
            iVar19 = iVar19 + 1;
            if (iVar19 < 0) {
              iVar31 = 0;
            }
            else if (iVar19 <= iVar31) {
              iVar31 = iVar19;
            }
            *(byte *)(DAT_362cba38 + (int)local_44) =
                 ~(byte)(((uint)*(byte *)(DAT_362c3b38 * (int)fVar21 + iVar22 + DAT_362c3b44) *
                          ((uint)local_c & 0xff ^ 0xff) +
                         (uint)*(byte *)(DAT_362c3b38 * (int)fVar21 + iVar31 + DAT_362c3b44) *
                         ((uint)local_c & 0xff)) * DAT_362c3b28 >> 0x10);
            local_44 = (float *)((int)local_44 + 1);
            local_1c = (float)((int)local_1c + 0xc);
          } while ((int)local_44 < DAT_362cba68);
        }
      }
      else if (0 < DAT_362cba68) {
        iVar31 = 0;
        pfVar11 = DAT_362cba3c;
        do {
          uVar36 = FUN_360c06e0((float *)(DAT_362cba48 + iVar31),pfVar11);
          pfVar11 = (float *)((int)uVar36 + 8);
          iVar31 = extraout_ECX_01 + 0xc;
        } while ((int)((ulonglong)uVar36 >> 0x20) + 1 < DAT_362cba68);
      }
    }
    else {
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffd;
    }
  }
  iVar31 = DAT_362bef7c;
  if ((*(uint *)(DAT_362bef7c + 0x88) & *(uint *)(DAT_362bef7c + 0x8c)) == 0xffffffff) {
    local_44 = (float *)0x0;
  }
  else {
    local_44 = (float *)0x1;
    if (1 < _iStatsMode) {
      puVar12 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar26 = *puVar12;
      uVar29 = puVar12[1];
      uVar20 = uVar26 - *(uint *)(iVar31 + 0x88);
      uVar27 = *(uint *)(iVar31 + 0x90);
      *(uint *)(iVar31 + 0x90) = uVar27 + uVar20;
      *(uint *)(iVar31 + 0x94) =
           *(int *)(iVar31 + 0x94) +
           ((uVar29 - *(int *)(iVar31 + 0x8c)) - (uint)(uVar26 < *(uint *)(iVar31 + 0x88))) +
           (uint)CARRY4(uVar27,uVar20);
      *(undefined4 *)(iVar31 + 0x88) = 0xffffffff;
      *(undefined4 *)(iVar31 + 0x8c) = 0xffffffff;
    }
  }
  iVar31 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar13 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar31 + 0xb0) = *puVar13;
    *(undefined4 *)(iVar31 + 0xb4) = puVar13[1];
  }
  local_58 = 0.0;
  if (0 < *(int *)(local_14 + 0x20)) {
    local_1c = 0.0;
    do {
      iVar22 = DAT_362cba48;
      iVar31 = *(int *)(local_14 + 0x24);
      local_20 = *(float *)(iVar31 + 0x68 + (int)local_1c);
      iVar19 = *(int *)(iVar31 + (int)local_1c + 100);
      if (((*(byte *)(iVar31 + 0x48 + (int)local_1c) & 8) != 0) || (local_20 == 0.0)) break;
      puVar28 = (ushort *)(*(int *)(local_14 + 0x3c) + iVar19 * 2);
      local_28 = (float)(iVar19 * 0xc);
      local_8 = (CTextureData *)(DAT_362cbb30 + (int)local_28);
      fVar21 = local_20;
      puVar13 = (undefined4 *)local_8;
      DAT_362cba2c = puVar28;
      do {
        uVar36 = *(undefined8 *)(iVar22 + 4 + (uint)*puVar28 * 0xc);
        *puVar13 = *(undefined4 *)(iVar22 + (uint)*puVar28 * 0xc);
        *(undefined8 *)(puVar13 + 1) = uVar36;
        puVar28 = puVar28 + 1;
        puVar13 = puVar13 + 3;
        fVar21 = (float)((int)fVar21 + -1);
      } while (fVar21 != 0.0);
      if (DAT_362c44d0 != 0) {
        local_8 = (CTextureData *)((int)local_28 + DAT_362cbb40);
        iVar31 = 0;
        if (3 < (int)local_20) {
          pfVar11 = (float *)((int)local_8 + 8);
          do {
            uVar26 = (uint)DAT_362cba2c[iVar31];
            pfVar11[-2] = DAT_362cba44[uVar26 * 3];
            pfVar11[-1] = DAT_362cba44[uVar26 * 3 + 1];
            *pfVar11 = DAT_362cba44[uVar26 * 3 + 2];
            uVar26 = (uint)DAT_362cba2c[iVar31 + 1];
            pfVar11[1] = DAT_362cba44[uVar26 * 3];
            pfVar11[2] = DAT_362cba44[uVar26 * 3 + 1];
            pfVar11[3] = DAT_362cba44[uVar26 * 3 + 2];
            uVar26 = (uint)DAT_362cba2c[iVar31 + 2];
            pfVar11[4] = DAT_362cba44[uVar26 * 3];
            pfVar11[5] = DAT_362cba44[uVar26 * 3 + 1];
            pfVar11[6] = DAT_362cba44[uVar26 * 3 + 2];
            uVar26 = (uint)DAT_362cba2c[iVar31 + 3];
            pfVar11[7] = DAT_362cba44[uVar26 * 3];
            pfVar11[8] = DAT_362cba44[uVar26 * 3 + 1];
            pfVar11[9] = DAT_362cba44[uVar26 * 3 + 2];
            iVar31 = iVar31 + 4;
            pfVar11 = pfVar11 + 0xc;
          } while (iVar31 < (int)local_20 + -3);
        }
        if (iVar31 < (int)local_20) {
          pfVar11 = (float *)((int)local_8 + (iVar31 * 3 + 2) * 4);
          do {
            uVar26 = (uint)DAT_362cba2c[iVar31];
            pfVar11[-2] = DAT_362cba44[uVar26 * 3];
            pfVar11[-1] = DAT_362cba44[uVar26 * 3 + 1];
            *pfVar11 = DAT_362cba44[uVar26 * 3 + 2];
            iVar31 = iVar31 + 1;
            pfVar11 = pfVar11 + 3;
          } while (iVar31 < (int)local_20);
        }
      }
      local_58 = (float)((int)local_58 + 1);
      local_1c = (float)((int)local_1c + 0x70);
    } while ((int)local_58 < *(int *)(local_14 + 0x20));
  }
  (*DAT_362c45f8)();
  (*DAT_362c4690)(DAT_362cbb30,DAT_362cba6c);
  if (DAT_362c44d0 != 0) {
    (*DAT_362c4694)(DAT_362cbb40);
  }
  if (DAT_362c4d5c != 0) {
    (*DAT_362c46b8)();
  }
  _DAT_362cbba4 = *(float *)(param_1 + 0x28);
  _DAT_362cbba8 = *(float *)(param_1 + 0x2c);
  _DAT_362cbbac = *(float *)(param_1 + 0x30);
  (*DAT_362c4680)(0x51,0x51);
  if (((*(uint *)(param_1 + 8) & 8) == 0) && (*(int *)(local_50 + 0x38) != 0)) {
    DAT_362cba70 = 0;
  }
  else {
    DAT_362cba70 = 1;
  }
  local_54 = (float)(*(uint *)(param_1 + 8) & 0x88);
  if ((local_54 == 0.0) || (local_1c = 1.4013e-45, DAT_362cba70 != 0)) {
    local_1c = 0.0;
  }
  local_8 = *(CTextureData **)(local_50 + 0x38);
  if (local_8 == (CTextureData *)0x0) {
    local_24 = 1.0;
    local_4c = 1.0;
  }
  else {
    local_24 = _DAT_36223384 / (float)*(int *)(local_8 + 0x20);
    local_4c = _DAT_36223384 / (float)*(int *)(local_8 + 0x24);
  }
  uVar26 = *(uint *)(*(int *)param_1 + 0x12c0);
  FUN_360605c0(&local_c,*(uint *)(param_1 + 200));
  FUN_360605c0(&local_48,uVar26);
  uVar26 = ((uint)local_c & 0xff) * (local_48 & 0xff);
  uVar29 = uVar26 >> 8;
  local_18 = (CTextureData *)
             CONCAT31(CONCAT12((char)((uint)(local_c._2_2_ >> 8) * (uint)(local_48._2_2_ >> 8) >> 8)
                               ,CONCAT11((char)((local_c._2_2_ & 0xff) * (local_48._2_2_ & 0xff) >>
                                               8),(char)(((uint)local_c >> 8 & 0xff) *
                                                         (local_48 >> 8 & 0xff) >> 8))),
                      (char)(uVar26 >> 8));
  local_3c = 0.0;
  if (0 < *(int *)(local_14 + 0x20)) {
    local_c = (float *)0x0;
    while( true ) {
      iVar31 = *(int *)(local_14 + 0x24);
      local_20 = *(float *)(iVar31 + 0x68 + (int)local_c);
      iVar19 = *(int *)(iVar31 + 100 + (int)local_c);
      local_48 = iVar31 + (int)local_c;
      if (((*(byte *)(local_48 + 0x48) & 8) != 0) || (local_20 == 0.0)) break;
      DAT_362cba2c = (ushort *)(*(int *)(local_14 + 0x3c) + iVar19 * 2);
      local_5c = (CTextureData *)(*(int *)(local_14 + 0x44) + iVar19 * 8);
      local_34 = (CTextureData *)(DAT_362cbb50 + iVar19 * 8);
      DAT_362cba50 = DAT_362cbb60 + iVar19 * 4;
      FUN_360605c0(&local_28,*(uint *)(local_48 + 0x30));
      uVar10 = (undefined1)(((uint)local_28 >> 8 & 0xff) * ((uint)local_18 >> 8 & 0xff) >> 8);
      uVar23 = (undefined1)((local_28._2_2_ & 0xff) * ((uint)local_18 >> 0x10 & 0xff) >> 8);
      bVar17 = (byte)(((uint)local_28 & 0xff) * uVar29 >> 8);
      uVar18 = (undefined1)((uint)(local_28._2_2_ >> 8) * ((uint)local_18 >> 0x18) >> 8);
      local_10 = (CTextureData *)CONCAT13(uVar18,CONCAT21(CONCAT11(uVar23,uVar10),bVar17));
      pCVar30 = local_5c;
      pCVar32 = local_34;
      for (uVar26 = (uint)local_20 >> 1; uVar26 != 0; uVar26 = uVar26 - 1) {
        fVar21 = *(float *)(pCVar30 + 8);
        fVar25 = *(float *)(pCVar30 + 4);
        fVar3 = *(float *)(pCVar30 + 0xc);
        *(float *)pCVar32 = *(float *)pCVar30 * local_24;
        *(float *)(pCVar32 + 4) = fVar25 * local_4c;
        *(float *)(pCVar32 + 8) = fVar21 * local_24;
        *(float *)(pCVar32 + 0xc) = fVar3 * local_4c;
        pCVar30 = pCVar30 + 0x10;
        pCVar32 = pCVar32 + 0x10;
        in_ST4 = in_ST3;
      }
      if (((uint)local_20 & 1) != 0) {
        fVar21 = *(float *)(pCVar30 + 4);
        *(float *)pCVar32 = *(float *)pCVar30 * local_24;
        *(float *)(pCVar32 + 4) = fVar21 * local_4c;
      }
      iVar19 = DAT_362cba50;
      iVar31 = DAT_362cba4c;
      puVar28 = DAT_362cba2c;
      if (*(int *)(local_48 + 0x4c) == 0) {
        local_34 = local_10;
        if (local_30 != 0) {
          local_34._2_2_ = (undefined2)((uint)local_10 >> 0x10);
          local_34 = (CTextureData *)
                     (CONCAT22(local_34._2_2_,
                               CONCAT11((char)(uint3)((uint)local_10 >> 9),bVar17 >> 1)) &
                     0xffff7fff);
          uVar26 = (uint)local_34 >> 0x10;
          local_34._0_3_ = CONCAT12((byte)uVar26 >> 1,(undefined2)local_34);
        }
        iVar31 = 0;
        if (0 < (int)local_20) {
          do {
            *(CTextureData **)(DAT_362cba50 + iVar31 * 4) = local_34;
            iVar31 = iVar31 + 1;
          } while (iVar31 < (int)local_20);
        }
      }
      else {
        uVar37 = (ushort)((unkuint10)in_ST4 >> 0x40);
        uVar36 = psllw((longlong)
                       CONCAT82(CONCAT71((uint7)(uint6)(CONCAT55((uint5)CONCAT31((uint3)uVar37 << 8,
                                                                                 uVar18) << 8,
                                                                 CONCAT14(uVar23,local_10)) >> 0x20)
                                         << 8,uVar10),(ushort)bVar17),7);
        uVar36 = CONCAT26((short)((ulonglong)uVar36 >> 0x30) +
                          (short)((ulonglong)DAT_36231e20 >> 0x30),
                          CONCAT24((short)((ulonglong)uVar36 >> 0x20) +
                                   (short)((ulonglong)DAT_36231e20 >> 0x20),
                                   CONCAT22((short)((ulonglong)uVar36 >> 0x10) +
                                            (short)((ulonglong)DAT_36231e20 >> 0x10),
                                            (short)uVar36 + (short)DAT_36231e20)));
        in_ST4 = CONCAT28(uVar37,uVar36);
        iVar22 = 0;
        do {
          uVar38 = *(undefined4 *)(iVar31 + (uint)puVar28[iVar22] * 4);
          uVar35 = psllw((ulonglong)
                         CONCAT82(CONCAT71((uint7)(uint6)(CONCAT55((uint5)CONCAT31((uint3)
                                                  extraout_ST1h << 8,(char)((uint)uVar38 >> 0x18))
                                                  << 8,CONCAT14((char)((uint)uVar38 >> 0x10),uVar38)
                                                  ) >> 0x20) << 8,(char)((uint)uVar38 >> 8)),
                                  (ushort)(byte)uVar38) | _DAT_36231e28,1);
          uVar35 = pmulhw(uVar35,uVar36);
          sVar4 = (short)uVar35;
          sVar5 = (short)((ulonglong)uVar35 >> 0x10);
          sVar6 = (short)((ulonglong)uVar35 >> 0x20);
          sVar7 = (short)((ulonglong)uVar35 >> 0x30);
          *(uint *)(iVar19 + iVar22 * 4) =
               CONCAT13((0 < sVar7) * (sVar7 < 0x100) * (char)((ulonglong)uVar35 >> 0x30) -
                        (0xff < sVar7),
                        CONCAT12((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar35 >> 0x20) -
                                 (0xff < sVar6),
                                 CONCAT11((0 < sVar5) * (sVar5 < 0x100) *
                                          (char)((ulonglong)uVar35 >> 0x10) - (0xff < sVar5),
                                          (0 < sVar4) * (sVar4 < 0x100) * (char)uVar35 -
                                          (0xff < sVar4))));
          iVar22 = iVar22 + 1;
          local_5c = local_10;
        } while (iVar22 < (int)local_20);
      }
      if (((*(uint *)(local_48 + 0x48) & 0x4000) == 0) || (DAT_362cba58 != 0)) {
        if (((byte)param_1[0xc4] & 4) != 0) {
          if (*(int *)(local_48 + 0x50) == 5) {
            FUN_360c08f0(DAT_362cba30);
          }
          else {
            FUN_360c08b0();
          }
        }
        if (((byte)param_1[0xc4] & 2) != 0) {
          if (*(int *)(local_48 + 0x50) == 5) {
            FUN_360c08f0(DAT_362cba38);
          }
          else {
            FUN_360c08b0();
          }
        }
      }
      local_3c = (float)((int)local_3c + 1);
      local_c = local_c + 0x1c;
      if (*(int *)(local_14 + 0x20) <= (int)local_3c) break;
      uVar29 = (uint)local_18 & 0xff;
    }
  }
  pCVar30 = local_8;
  uVar26 = local_30;
  if ((local_54 == 0.0) && (DAT_362cba5c == 0)) {
    FUN_3607acb0();
    FUN_360c2420((int)param_1);
    FUN_360c25e0((int)param_1);
    (*DAT_362c464c)(0x2b);
    (*DAT_362c4654)(0x3f);
    FUN_360c0960();
  }
  else {
    if (((DAT_362cba54 & 0x20) != 0) || (local_8 == (CTextureData *)0x0)) {
      if (local_30 != 0) {
        (*DAT_362c4684)(2);
      }
      if ((pCVar30 == (CTextureData *)0x0) ||
         (lVar14 = CAnimObject::GetFrame((CAnimObject *)(local_50 + 0x24)), DAT_362cba70 != 0)) {
        (*DAT_362c4634)();
      }
      else {
        CTextureData::SetAsCurrent(pCVar30,lVar14,0);
      }
      (*DAT_362c469c)(DAT_362cbb50,0);
      (*DAT_362c46a0)(DAT_362cbb60);
      FUN_360c22b0((int)param_1,1,0x20);
      FUN_360c22b0((int)param_1,0,0x20);
      if (uVar26 != 0) {
        (*DAT_362c4684)(1);
      }
    }
    if ((DAT_362cba54 & 0x2000000) == 0) {
      uVar38 = 0x2b;
    }
    else {
      uVar38 = 0x2c;
    }
    (*DAT_362c464c)(uVar38);
    (*DAT_362c461c)();
    (*DAT_362c4628)();
    (*DAT_362c4600)();
    local_18 = *(CTextureData **)(local_50 + 0x80);
    iVar31 = local_14;
    if (((((DAT_362cba54 & 0x1040) != 0) && (DAT_362a40f8 != 0)) &&
        (local_18 != (CTextureData *)0x0)) &&
       ((0xc0 < (*(uint *)(param_1 + 200) & 0xff) && (local_1c != 0.0)))) {
      local_54 = *(float *)(*(int *)param_1 + 0x12cc);
      local_10 = (CTextureData *)
                 ((uint)local_54 >> 0x18 | ((uint)local_54 & 0xff0000) >> 8 |
                  ((uint)local_54 & 0xff00) << 8 | (int)local_54 << 0x18);
      local_24 = _DAT_36223384 / (float)*(int *)(local_18 + 0x20);
      local_4c = _DAT_36223384 / (float)*(int *)(local_18 + 0x24);
      if ((*(byte *)(*(int *)param_1 + 0x1260) & 0x20) == 0) {
        local_c = *(float **)(local_50 + 0x8c);
        local_28 = *(float *)(local_50 + 0x88);
        local_8 = *(CTextureData **)(local_50 + 0x84);
        fVar21 = SQRT((float)local_c * (float)local_c +
                      local_28 * local_28 + (float)local_8 * (float)local_8) * _DAT_36231e40;
        local_24 = local_24 * fVar21;
        local_4c = fVar21 * local_4c;
      }
      local_3c = 0.0;
      if (0 < *(int *)(local_14 + 0x20)) {
        local_30 = 0;
        do {
          iVar19 = *(int *)(iVar31 + 0x24);
          local_20 = *(float *)(iVar19 + 0x68 + local_30);
          iVar22 = *(int *)(iVar19 + 100 + local_30);
          uVar26 = *(uint *)(iVar19 + local_30 + 0x48);
          if (((uVar26 & 8) != 0) || (local_20 == 0.0)) break;
          if ((uVar26 & 0x1000) != 0) {
            DAT_362cba2c = (ushort *)(*(int *)(iVar31 + 0x3c) + iVar22 * 2);
            local_34 = (CTextureData *)(DAT_362cbb50 + iVar22 * 8);
            iVar33 = *(int *)(iVar31 + 0x44) + iVar22 * 8;
            DAT_362cba50 = DAT_362cbb60 + iVar22 * 4;
            FUN_360605c0(&local_8,*(uint *)(iVar19 + local_30 + 0x3c));
            pfVar11 = local_c;
            local_c._3_1_ = SUB41(pfVar11,3);
            local_c._0_3_ =
                 CONCAT12((char)(((uint)local_10 >> 0x10 & 0xff) * ((uint)local_8 >> 0x10 & 0xff) >>
                                8),CONCAT11((char)(((uint)local_10 >> 8 & 0xff) *
                                                   ((uint)local_8 >> 8 & 0xff) >> 8),
                                            (char)(((uint)local_10 & 0xff) * ((uint)local_8 & 0xff)
                                                  >> 8)));
            iVar19 = 0;
            if (3 < (int)local_20) {
              local_48 = iVar33 - (int)local_34;
              pCVar30 = local_34 + 4;
              pfVar11 = (float *)(iVar33 + 0xc);
              do {
                iVar19 = iVar19 + 4;
                *(float *)(pCVar30 + -4) = local_24 * pfVar11[-3];
                *(float *)pCVar30 = local_4c * *(float *)(pCVar30 + 0x20 + (local_48 - 0x20));
                *(float **)(DAT_362cba50 + -0x10 + iVar19 * 4) = local_c;
                *(float *)(pCVar30 + 4) = local_24 * pfVar11[-1];
                *(float *)(pCVar30 + 8) = local_4c * *pfVar11;
                *(float **)(DAT_362cba50 + -0xc + iVar19 * 4) = local_c;
                *(float *)(pCVar30 + 0xc) = local_24 * pfVar11[1];
                *(float *)(pCVar30 + 0x10) = local_4c * pfVar11[2];
                *(float **)(DAT_362cba50 + -8 + iVar19 * 4) = local_c;
                *(float *)(pCVar30 + 0x14) = local_24 * pfVar11[3];
                *(float *)(pCVar30 + 0x18) = local_4c * pfVar11[4];
                *(float **)(DAT_362cba50 + -4 + iVar19 * 4) = local_c;
                pCVar30 = pCVar30 + 0x20;
                pfVar11 = pfVar11 + 8;
                iVar31 = local_14;
              } while (iVar19 < (int)local_20 + -3);
            }
            if (iVar19 < (int)local_20) {
              local_48 = iVar33 - (int)local_34;
              pCVar30 = local_34 + iVar19 * 8 + 4;
              do {
                iVar19 = iVar19 + 1;
                *(float *)(pCVar30 + -4) = local_24 * *(float *)(iVar33 + -8 + iVar19 * 8);
                *(float *)pCVar30 = local_4c * *(float *)(pCVar30 + local_48);
                *(float **)(DAT_362cba50 + -4 + iVar19 * 4) = local_c;
                pCVar30 = pCVar30 + 8;
              } while (iVar19 < (int)local_20);
            }
          }
          local_3c = (float)((int)local_3c + 1);
          local_30 = local_30 + 0x70;
        } while ((int)local_3c < *(int *)(iVar31 + 0x20));
      }
      pCVar30 = local_18;
      lVar14 = CAnimObject::GetFrame((CAnimObject *)(local_50 + 0x6c));
      if (DAT_362cba70 == 0) {
        CTextureData::SetAsCurrent(pCVar30,lVar14,0);
      }
      else {
        (*DAT_362c4634)();
      }
      (*DAT_362c469c)(DAT_362cbb50,0);
      (*DAT_362c46a0)(DAT_362cbb60);
      (*DAT_362c4628)();
      (*DAT_362c4648)(0x19,0x17);
      FUN_360c22b0((int)param_1,1,0x1000);
      FUN_360c22b0((int)param_1,0,0x1000);
    }
    local_5c = *(CTextureData **)(local_50 + 0x50);
    if (((((DAT_362cba54 & 4) != 0) && (DAT_362a4100 != 0)) && (local_5c != (CTextureData *)0x0)) &&
       (iVar19 = DAT_362cba68, pfVar11 = DAT_362cba44, pfVar34 = DAT_362cba40, local_1c != 0.0)) {
      do {
        fVar21 = *pfVar11 * *(float *)local_2c + pfVar11[1] * *(float *)(local_2c + 4) +
                 pfVar11[2] * *(float *)(local_2c + 8);
        fVar8 = *pfVar11 * *(float *)(local_2c + 0xc) + pfVar11[1] * *(float *)(local_2c + 0x10) +
                pfVar11[2] * *(float *)(local_2c + 0x14);
        fVar25 = *pfVar11 * *(float *)(local_2c + 0x18) + pfVar11[1] * *(float *)(local_2c + 0x1c) +
                 pfVar11[2] * *(float *)(local_2c + 0x20);
        fVar3 = _DAT_362cbb8c * fVar21 + _DAT_362cbb90 * fVar8 + _DAT_362cbb94 * fVar25;
        fVar21 = fVar21 * fVar3;
        fVar8 = fVar8 * fVar3;
        fVar3 = fVar3 * fVar25;
        fVar25 = _DAT_362cbb90 - (fVar8 + fVar8);
        fVar25 = _DAT_36231e34 / SQRT(fVar25 + fVar25 + _DAT_36231e30);
        fVar3 = fVar25 * (_DAT_362cbb94 - (fVar3 + fVar3)) + _DAT_36231e34;
        *pfVar34 = (_DAT_362cbb8c - (fVar21 + fVar21)) * fVar25 + _DAT_36231e34;
        pfVar34[1] = fVar3;
        iVar19 = iVar19 + -1;
        pfVar11 = pfVar11 + 3;
        pfVar34 = pfVar34 + 2;
      } while (iVar19 != 0);
      local_2c = *(CRenderModel **)(*(int *)param_1 + 0x12c4);
      uVar26 = (uint)local_2c >> 0x18 | ((uint)local_2c & 0xff0000) >> 8 |
               ((uint)local_2c & 0xff00) << 8;
      local_8 = (CTextureData *)(uVar26 | (int)local_2c << 0x18);
      local_30 = CONCAT13((char)((*(uint *)(param_1 + 200) & 0xff) * ((uint)local_2c & 0xff) >> 8),
                          (int3)uVar26);
      local_3c = 0.0;
      if (0 < *(int *)(local_14 + 0x20)) {
        local_c = (float *)0x0;
        do {
          iVar31 = *(int *)(local_14 + 0x24);
          uVar26 = *(uint *)(iVar31 + 0x48 + (int)local_c);
          iVar19 = *(int *)(iVar31 + 100 + (int)local_c);
          local_10 = (CTextureData *)(iVar31 + (int)local_c);
          fVar21 = *(float *)(local_10 + 0x68);
          local_20 = fVar21;
          if (((uVar26 & 8) != 0) || (fVar21 == 0.0)) break;
          if ((uVar26 & 4) != 0) {
            DAT_362cba2c = (ushort *)(*(int *)(local_14 + 0x3c) + iVar19 * 2);
            local_34 = (CTextureData *)(DAT_362cbb50 + iVar19 * 8);
            DAT_362cba50 = DAT_362cbb60 + iVar19 * 4;
            FUN_360605c0(&local_8,(uint)*(float *)(local_10 + 0x34));
            uVar29 = (local_30 >> 8 & 0xff) * ((uint)local_8 >> 8 & 0xff);
            uVar26 = (local_30 >> 0x10 & 0xff) * (local_8._2_2_ & 0xff);
            uVar27 = uVar29 >> 8;
            bVar17 = (byte)((local_30 & 0xff) * ((uint)local_8 & 0xff) >> 8);
            bVar24 = (byte)(uVar29 >> 8);
            local_18._0_2_ = CONCAT11(bVar24,bVar17);
            uVar10 = (undefined1)((uint)(local_8._2_2_ >> 8) * (local_30 >> 0x18) >> 8);
            local_18 = (CTextureData *)
                       CONCAT13(uVar10,(int3)CONCAT22((short)(uVar26 >> 8),(undefined2)local_18));
            local_28 = 0.0;
            pCVar30 = local_34;
            if (0 < (int)fVar21) {
              do {
                pfVar11 = DAT_362cba40;
                uVar37 = DAT_362cba2c[(int)local_28];
                *(float *)pCVar30 = DAT_362cba40[(uint)uVar37 * 2];
                *(float *)(pCVar30 + 4) = pfVar11[(uint)uVar37 * 2 + 1];
                local_28 = (float)((int)local_28 + 1);
                pCVar30 = pCVar30 + 8;
              } while ((int)local_28 < (int)local_20);
              uVar27 = (uint)bVar24;
              fVar21 = local_20;
            }
            if (*(float *)(local_10 + 0x4c) == 0.0) {
              iVar31 = 0;
              if (0 < (int)fVar21) {
                do {
                  *(CTextureData **)(DAT_362cba50 + iVar31 * 4) = local_18;
                  iVar31 = iVar31 + 1;
                } while (iVar31 < (int)fVar21);
              }
            }
            else {
              iVar31 = 0;
              if (0 < (int)fVar21) {
                local_2c = (CRenderModel *)(uint)bVar17;
                do {
                  pbVar1 = (byte *)(DAT_362cba4c + (uint)DAT_362cba2c[iVar31] * 4);
                  puVar2 = (undefined1 *)(DAT_362cba50 + iVar31 * 4);
                  *puVar2 = (char)((uint)*pbVar1 * (int)local_2c >> 8);
                  puVar2[1] = (char)(pbVar1[1] * uVar27 >> 8);
                  puVar2[2] = (char)((uint)pbVar1[2] * (uVar26 >> 8) >> 8);
                  puVar2[3] = uVar10;
                  iVar31 = iVar31 + 1;
                  local_54 = (float)uVar27;
                } while (iVar31 < (int)local_20);
              }
            }
            if ((((uint)*(float *)(local_10 + 0x48) & 0x4000) == 0) || (DAT_362cba58 != 0)) {
              if (((byte)param_1[0xc4] & 4) != 0) {
                if (*(float *)(local_10 + 0x50) == 7.00649e-45) {
                  FUN_360c08f0(DAT_362cba30);
                }
                else {
                  FUN_360c08b0();
                }
              }
              if (((byte)param_1[0xc4] & 2) != 0) {
                if (*(float *)(local_10 + 0x50) == 7.00649e-45) {
                  FUN_360c08f0(DAT_362cba38);
                }
                else {
                  FUN_360c08b0();
                }
              }
            }
          }
          local_3c = (float)((int)local_3c + 1);
          local_c = local_c + 0x1c;
        } while ((int)local_3c < *(int *)(local_14 + 0x20));
      }
      lVar14 = CAnimObject::GetFrame((CAnimObject *)(local_50 + 0x3c));
      if (DAT_362cba70 == 0) {
        CTextureData::SetAsCurrent(local_5c,lVar14,0);
      }
      else {
        (*DAT_362c4634)();
      }
      (*DAT_362c469c)(DAT_362cbb50,0);
      (*DAT_362c46a0)(DAT_362cbb60);
      (*DAT_362c4648)(0x1b,0x1c);
      FUN_360c22b0((int)param_1,1,4);
      FUN_360c22b0((int)param_1,0,4);
      iVar31 = local_14;
    }
    local_5c = *(CTextureData **)(local_50 + 0x68);
    if (((((DAT_362cba54 & 0x10) != 0) && (DAT_362a40fc != 0)) && (local_5c != (CTextureData *)0x0))
       && (local_1c != 0.0)) {
      iVar31 = DAT_362cba68;
      pfVar11 = DAT_362cba44;
      pfVar34 = DAT_362cba40;
      do {
        fVar21 = *pfVar11 * _DAT_362cbba4 + pfVar11[1] * _DAT_362cbba8 + pfVar11[2] * _DAT_362cbbac;
        fVar9 = _DAT_362cbba4 - (*pfVar11 * fVar21 + *pfVar11 * fVar21);
        fVar8 = _DAT_362cbba8 - (pfVar11[1] * fVar21 + pfVar11[1] * fVar21);
        fVar21 = _DAT_362cbbac - (pfVar11[2] * fVar21 + pfVar11[2] * fVar21);
        fVar25 = *(float *)(param_1 + 0x88) * fVar9 + *(float *)(param_1 + 0x8c) * fVar8 +
                 *(float *)(param_1 + 0x90) * fVar21;
        fVar25 = _DAT_36231e34 / SQRT(fVar25 + fVar25 + _DAT_36231e30);
        fVar3 = fVar25 * (*(float *)(param_1 + 0x7c) * fVar9 + *(float *)(param_1 + 0x80) * fVar8 +
                         *(float *)(param_1 + 0x84) * fVar21) + _DAT_36231e34;
        *pfVar34 = (fVar21 * *(float *)(param_1 + 0x78) +
                   fVar9 * *(float *)(param_1 + 0x70) + fVar8 * *(float *)(param_1 + 0x74)) * fVar25
                   + _DAT_36231e34;
        pfVar34[1] = fVar3;
        pfVar11 = pfVar11 + 3;
        pfVar34 = pfVar34 + 2;
        iVar31 = iVar31 + -1;
      } while (iVar31 != 0);
      local_2c = *(CRenderModel **)(*(int *)param_1 + 0x12c8);
      uVar26 = ((uint)local_2c & 0xff00) << 8;
      local_54 = (float)((uint)local_2c >> 0x18 | ((uint)local_2c & 0xff0000) >> 8 | uVar26 |
                        (int)local_2c << 0x18);
      uVar29 = *(uint *)(param_1 + 200) & 0xff;
      iVar31 = (((uint)local_2c >> 0x18) * uVar29 >> 8) * DAT_362cba74;
      local_24._0_1_ = (undefined1)((uint)iVar31 >> 8);
      if (0xff < iVar31 >> 8) {
        local_24._0_1_ = 0xff;
      }
      iVar31 = ((((uint)local_2c & 0xff0000) >> 0x10) * uVar29 >> 8) * DAT_362cba78;
      local_24._0_2_ = CONCAT11((char)((uint)iVar31 >> 8),(undefined1)local_24);
      if (0xff < iVar31 >> 8) {
        local_24._0_2_ = CONCAT11(0xff,(undefined1)local_24);
      }
      iVar31 = ((uVar26 >> 0x10) * uVar29 >> 8) * DAT_362cba7c;
      local_24._3_1_ = SUB41(local_2c,0);
      local_24._0_3_ = CONCAT12((char)((uint)iVar31 >> 8),(undefined2)local_24);
      if (0xff < iVar31 >> 8) {
        local_24._0_3_ = CONCAT12(0xff,(undefined2)local_24);
      }
      local_3c = 0.0;
      if (0 < *(int *)(local_14 + 0x20)) {
        local_c = (float *)0x0;
        do {
          iVar31 = *(int *)(*(int *)(local_14 + 0x24) + 100 + (int)local_c);
          local_1c = (float)(*(int *)(local_14 + 0x24) + (int)local_c);
          fVar21 = *(float *)((int)local_1c + 0x68);
          local_20 = fVar21;
          if (((*(uint *)((int)local_1c + 0x48) & 8) != 0) || (fVar21 == 0.0)) break;
          if ((*(uint *)((int)local_1c + 0x48) & 0x10) != 0) {
            DAT_362cba2c = (ushort *)(*(int *)(local_14 + 0x3c) + iVar31 * 2);
            pfVar11 = (float *)(DAT_362cbb50 + iVar31 * 8);
            DAT_362cba50 = DAT_362cbb60 + iVar31 * 4;
            FUN_360605c0(&local_8,*(uint *)((int)local_1c + 0x38));
            pCVar15 = (CRenderModel *)(((uint)local_8 & 0xff) * ((uint)local_24 & 0xff) >> 8);
            uVar26 = ((uint)local_8 >> 8 & 0xff) * ((uint)local_24 >> 8 & 0xff) >> 8;
            iVar31 = 0;
            if (0 < (int)fVar21) {
              do {
                pfVar34 = DAT_362cba40;
                uVar29 = (uint)DAT_362cba2c[iVar31];
                *pfVar11 = DAT_362cba40[uVar29 * 2];
                pfVar11[1] = pfVar34[uVar29 * 2 + 1];
                uVar29 = (uint)*(byte *)(DAT_362cba4c + 3 + uVar29 * 4);
                *(uint *)(DAT_362cba50 + iVar31 * 4) =
                     (int)(uVar29 * (int)pCVar15) >> 8 |
                     (uVar29 * (((uint)local_8 >> 0x10 & 0xff) * ((uint)local_24 >> 0x10 & 0xff) >>
                               8) & 0xff00) << 8 | uVar29 * uVar26 & 0xff00;
                iVar31 = iVar31 + 1;
                pfVar11 = pfVar11 + 2;
                local_54 = (float)uVar26;
                local_2c = pCVar15;
              } while (iVar31 < (int)local_20);
            }
            if (((*(uint *)((int)local_1c + 0x48) & 0x4000) == 0) || (DAT_362cba58 != 0)) {
              if (((byte)param_1[0xc4] & 4) != 0) {
                if (*(int *)((int)local_1c + 0x50) == 5) {
                  FUN_360c08f0(DAT_362cba30);
                }
                else {
                  FUN_360c08b0();
                }
              }
              if (((byte)param_1[0xc4] & 2) != 0) {
                if (*(int *)((int)local_1c + 0x50) == 5) {
                  FUN_360c08f0(DAT_362cba38);
                }
                else {
                  FUN_360c08b0();
                }
              }
            }
          }
          local_3c = (float)((int)local_3c + 1);
          local_c = local_c + 0x1c;
        } while ((int)local_3c < *(int *)(local_14 + 0x20));
      }
      lVar14 = CAnimObject::GetFrame((CAnimObject *)(local_50 + 0x54));
      if (DAT_362cba70 == 0) {
        CTextureData::SetAsCurrent(local_5c,lVar14,0);
      }
      else {
        (*DAT_362c4634)();
      }
      (*DAT_362c469c)(DAT_362cbb50,0);
      (*DAT_362c46a0)(DAT_362cbb60);
      (*DAT_362c4648)(0x1c,0x15);
      FUN_360c22b0((int)param_1,1,0x10);
      FUN_360c22b0((int)param_1,0,0x10);
      iVar31 = local_14;
    }
    if ((((byte)param_1[0xc4] & 4) != 0) && ((DAT_362cba54 & 0x4000000) == 0)) {
      FUN_360605c0(&local_2c,DAT_362c3b08);
      local_3c = 0.0;
      if (0 < *(int *)(iVar31 + 0x20)) {
        local_c = (float *)0x0;
        do {
          iVar19 = *(int *)(iVar31 + 0x24);
          uVar26 = *(uint *)(iVar19 + 0x48 + (int)local_c);
          iVar22 = *(int *)(iVar19 + 0x68 + (int)local_c);
          iVar33 = *(int *)((int)local_c + iVar19 + 100);
          if (((uVar26 & 8) != 0) || (iVar22 == 0)) break;
          if ((uVar26 & 0x4000) != 0) {
            DAT_362cba2c = (ushort *)(*(int *)(iVar31 + 0x3c) + iVar33 * 2);
            DAT_362cba50 = DAT_362cbb60 + iVar33 * 4;
            iVar16 = 0;
            iVar31 = DAT_362cbb50 + iVar33 * 8;
            if (0 < iVar22) {
              do {
                *(float *)(iVar31 + iVar16 * 8) = DAT_362cba34[DAT_362cba2c[iVar16]];
                *(undefined4 *)(iVar31 + 4 + iVar16 * 8) = 0;
                *(CRenderModel **)(DAT_362cba50 + iVar16 * 4) = local_2c;
                iVar16 = iVar16 + 1;
              } while (iVar16 < iVar22);
            }
            *(uint *)((int)local_c + iVar19 + 0x48) =
                 *(uint *)((int)local_c + iVar19 + 0x48) | 0x800;
            iVar31 = local_14;
          }
          local_3c = (float)((int)local_3c + 1);
          local_c = local_c + 0x1c;
        } while ((int)local_3c < *(int *)(iVar31 + 0x20));
      }
      (*DAT_362c4680)(0x52,0x52);
      FUN_3607b9d0((undefined4 *)&DAT_362c3b64,(int *)&DAT_362c3bec);
      (*DAT_362c469c)(DAT_362cbb50,0);
      (*DAT_362c46a0)(DAT_362cbb60);
      (*DAT_362c4648)(0x1b,0x1c);
      FUN_360c22b0((int)param_1,1,0x800);
      FUN_360c22b0((int)param_1,0,0x800);
    }
    if ((((byte)param_1[0xc4] & 2) != 0) && ((DAT_362cba54 & 0x4000000) == 0)) {
      FUN_360605c0(&local_2c,DAT_362c3b94);
      local_3c = 0.0;
      if (0 < *(int *)(iVar31 + 0x20)) {
        local_c = (float *)0x0;
        do {
          iVar19 = *(int *)(iVar31 + 0x24);
          uVar26 = *(uint *)(iVar19 + 0x48 + (int)local_c);
          iVar22 = *(int *)(iVar19 + 100 + (int)local_c);
          iVar33 = *(int *)((int)local_c + iVar19 + 0x68);
          if (((uVar26 & 8) != 0) || (iVar33 == 0)) break;
          if ((uVar26 & 0x4000) != 0) {
            DAT_362cba2c = (ushort *)(*(int *)(iVar31 + 0x3c) + iVar22 * 2);
            pfVar11 = (float *)(DAT_362cbb50 + iVar22 * 8);
            DAT_362cba50 = DAT_362cbb60 + iVar22 * 4;
            iVar31 = 0;
            if (0 < iVar33) {
              do {
                uVar37 = DAT_362cba2c[iVar31];
                *pfVar11 = DAT_362cba3c[(uint)uVar37 * 2];
                pfVar11[1] = DAT_362cba3c[(uint)uVar37 * 2 + 1];
                *(CRenderModel **)(DAT_362cba50 + iVar31 * 4) = local_2c;
                iVar31 = iVar31 + 1;
                pfVar11 = pfVar11 + 2;
              } while (iVar31 < iVar33);
            }
            *(uint *)((int)local_c + iVar19 + 0x48) =
                 *(uint *)((int)local_c + iVar19 + 0x48) | 0x400;
            iVar31 = local_14;
          }
          local_3c = (float)((int)local_3c + 1);
          local_c = local_c + 0x1c;
        } while ((int)local_3c < *(int *)(iVar31 + 0x20));
      }
      (*DAT_362c4680)(0x52,0x52);
      FUN_3607b9d0((undefined4 *)&DAT_362c3b2c,(int *)&DAT_362c3ba8);
      (*DAT_362c469c)(DAT_362cbb50,0);
      (*DAT_362c46a0)(DAT_362cbb60);
      (*DAT_362c4648)(0x1b,0x1c);
      (*DAT_362c4628)();
      FUN_360c22b0((int)param_1,1,0x400);
      FUN_360c22b0((int)param_1,0,0x400);
    }
    (*DAT_362c464c)(0x2b);
    FUN_3607acb0();
    FUN_360c25e0((int)param_1);
    FUN_360c0960();
    (*DAT_362c4654)(0x3f);
  }
  iVar31 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar12 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar26 = *puVar12 - *(uint *)(iVar31 + 0xb0);
    *(int *)(iVar31 + 0xbc) =
         *(int *)(iVar31 + 0xbc) +
         ((puVar12[1] - *(int *)(iVar31 + 0xb4)) - (uint)(*puVar12 < *(uint *)(iVar31 + 0xb0))) +
         (uint)CARRY4(*(uint *)(iVar31 + 0xb8),uVar26);
    *(uint *)(iVar31 + 0xb8) = *(uint *)(iVar31 + 0xb8) + uVar26;
    *(undefined4 *)(iVar31 + 0xb4) = 0xffffffff;
    *(undefined4 *)(iVar31 + 0xb0) = 0xffffffff;
  }
  iVar31 = DAT_362bef7c;
  if ((local_44 != (float *)0x0) && (1 < _iStatsMode)) {
    puVar13 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar31 + 0x88) = *puVar13;
    *(undefined4 *)(iVar31 + 0x8c) = puVar13[1];
  }
  return;
}

