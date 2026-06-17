
void __cdecl FUN_36181710(int param_1)

{
  uint *puVar1;
  int iVar2;
  CTextureData *pCVar3;
  CTextureData *pCVar4;
  CTextureData *pCVar5;
  long lVar6;
  ushort *puVar7;
  float *pfVar8;
  CTextureData *pCVar9;
  CTextureData *pCVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  GFXTexCoord *pGVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ShaderRegister *pSVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;
  GfxBlend GVar24;
  GfxBlend GVar25;
  undefined *puVar26;
  GfxComp GVar27;
  ShaderRegister *pSStack_1a0;
  int local_19c;
  int local_198;
  int local_18c;
  int local_17c;
  float fStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  ShaderRegister aSStack_f0 [4];
  uint auStack_ec [47];
  float local_30 [12];
  
  if (DAT_362a4158 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    pCVar3 = *(CTextureData **)(iVar2 + 0x10);
    pCVar4 = *(CTextureData **)(iVar2 + 0x14);
    pCVar5 = *(CTextureData **)(iVar2 + 0xc);
    if (DAT_36300d78 != 0) {
      shaEnableVertexProgram();
      shaEnablePixelProgram();
    }
    bVar23 = DAT_36300d78 != 0;
    iVar15 = FUN_36026a70(0x36301528);
    local_17c = 0;
    if (0 < iVar15) {
      do {
        iVar17 = *(int *)(DAT_3630152c + local_17c * 4);
        iVar21 = iVar17 * 0x160;
        lVar6 = *(long *)(iVar21 + 0x11c + *(int *)(iVar2 + 0x104));
        puVar1 = (uint *)(iVar21 + *(int *)(iVar2 + 0x104));
        uVar16 = puVar1[0x4d];
        puVar1[0x4c] = puVar1[0x4c] | 8;
        if ((DAT_362a4154 == 0) || (bVar22 = true, puVar1[2] != *(uint *)(iVar2 + 0x58))) {
          bVar22 = false;
        }
        if (((((~(*(uint *)(param_1 + 8) >> 1) & 1) == 0) || ((*(uint *)(param_1 + 8) & 1) == 0)) ||
            ((int)puVar1[2] < *(int *)(iVar2 + 0x5c))) || (bVar13 = true, DAT_362a414c == 0)) {
          bVar13 = false;
        }
        if (bVar22) {
          FUN_3617e970(iVar2,iVar17);
        }
        else {
          FUN_3617e390(iVar2,iVar17);
          FUN_36162680(local_30,(float *)&DAT_36300d18,(float *)(puVar1 + 0x12));
          FUN_3617d780();
          pGVar14 = DAT_3630155c;
          puVar7 = (ushort *)puVar1[0x50];
          shaSetVertexArray(DAT_3630154c,0,lVar6);
          shaSetIndices(puVar7,uVar16 * 3);
          shaSetConstantColor(0xffffffff);
          shaLockArrays();
          if (bVar13) {
            shaDisableBlend();
            shaEnableDepthWrite();
            shaEnableAlphaTest();
            shaEnableDepthWrite();
            FUN_3608da20(&DAT_36300da8,&DAT_36301408);
            shaSetTextureWrapping(0x52,0x52,0);
            shaSetTexture(pCVar4,0);
            shaClearTextureMatrix(0);
            if (DAT_36300d78 == 0) {
              shaSetTexCoordArray(pGVar14,0);
              shaSetTextureMatrix((float *)(puVar1 + 0x1e),0);
            }
            else {
              shaSetPixelProgram(0);
              shaSetVertexProgram(0);
              shaSetVertexProgramConst(0x15,(ShaderRegister *)(puVar1 + 0x1e),3);
            }
            FUN_3608da40();
            shaDisableAlphaTest();
            shaDisableDepthWrite();
            shaDepthFunc(0x2c);
          }
          else {
            uVar16 = ~(*puVar1 >> 1) & 1;
            if (uVar16 != 0) {
              (*DAT_362c46c4)(0);
              shaEnableAlphaTest();
              shaEnableDepthWrite();
              FUN_3608da20(&DAT_36300da8,&DAT_36301408);
              shaSetTextureWrapping(0x52,0x52,0);
              shaSetTexture(pCVar5,0);
              if (DAT_36300d78 == 0) {
                shaSetTexCoordArray(pGVar14,0);
                shaSetTextureMatrix((float *)(puVar1 + 0x2a),0);
              }
              else {
                shaSetPixelProgram(0);
                shaSetVertexProgram(0);
                shaSetVertexProgramConst(0x15,(ShaderRegister *)(puVar1 + 0x2a),3);
              }
              FUN_3608da40();
              shaDisableAlphaTest();
              shaDisableDepthWrite();
              shaClearTextureMatrix(0);
              (*DAT_362c46c4)(0xffffffff);
            }
            if (DAT_36300d78 == 0) {
              GVar25 = 0x1c;
              GVar24 = 0x1b;
            }
            else {
              GVar25 = 0x1b;
              GVar24 = 0x15;
            }
            shaBlendFunc(GVar24,GVar25);
            shaEnableBlend();
            iVar20 = 0;
            pSStack_1a0 = (ShaderRegister *)0x0;
            local_19c = 0;
            iVar17 = FUN_36172d20((undefined4 *)(iVar2 + 0x108));
            local_198 = 0;
            if (0 < iVar17) {
              local_18c = 0;
              do {
                pfVar8 = *(float **)(*(int *)(iVar2 + 0x10c) + local_18c);
                pCVar9 = (CTextureData *)pfVar8[0xd];
                iVar18 = *(int *)(iVar2 + 0x10c) + local_18c;
                pCVar10 = (CTextureData *)pfVar8[0xe];
                if (local_18c < 0x1280) {
                  bVar22 = (1 << ((byte)local_198 & 0x1f) & puVar1[1]) == 0;
                }
                else {
                  bVar22 = false;
                }
                if (((*(int *)(iVar18 + 0xc) != 0) && (pCVar9 != (CTextureData *)0x0)) &&
                   ((!bVar22 && ((*(byte *)(iVar18 + 0x18) & 1) == 0)))) {
                  if ((int)((uint)bVar23 * 2 + 2) < iVar20 + 2) {
                    if (pSStack_1a0 == (ShaderRegister *)0x1) {
                      puVar26 = &DAT_36301450;
                    }
                    else {
                      puVar26 = &DAT_36301498;
                    }
                    FUN_3608da20(&DAT_36300da8,puVar26);
                    if (DAT_36300d78 == 0) {
                      iVar18 = 0;
                      if (0 < iVar20) {
                        pSStack_1a0 = aSStack_f0;
                        do {
                          shaSetTexCoordArray(pGVar14,iVar18);
                          shaSetTextureMatrix((float *)pSStack_1a0,iVar18);
                          iVar18 = iVar18 + 1;
                          pSStack_1a0 = pSStack_1a0 + 0x30;
                        } while (iVar18 < iVar20);
                      }
                    }
                    else {
                      shaSetPixelProgram(0);
                      shaSetVertexProgram(0);
                      if (0 < iVar20) {
                        pSStack_1a0 = aSStack_f0;
                        iVar18 = 0x15;
                        do {
                          shaSetVertexProgramConst(iVar18,pSStack_1a0,3);
                          pSStack_1a0 = pSStack_1a0 + 0x30;
                          iVar18 = iVar18 + 3;
                          iVar20 = iVar20 + -1;
                        } while (iVar20 != 0);
                      }
                    }
                    iVar20 = 0;
                    if ((local_19c == 0) && (uVar16 == 0)) {
                      shaEnableDepthWrite();
                      GVar27 = 0x2b;
                    }
                    else {
                      shaDisableDepthWrite();
                      GVar27 = 0x2c;
                    }
                    shaDepthFunc(GVar27);
                    FUN_3608da40();
                    local_19c = local_19c + 1;
                    pSStack_1a0 = (ShaderRegister *)0x0;
                  }
                  fStack_150 = (float)puVar1[0x12];
                  uStack_124 = puVar1[0x19];
                  uStack_148 = puVar1[0x14];
                  uStack_134 = puVar1[0x1d];
                  uStack_14c = puVar1[0x13];
                  uStack_144 = puVar1[0x15];
                  uStack_140 = puVar1[0x16];
                  uStack_13c = puVar1[0x17];
                  uStack_138 = puVar1[0x18];
                  uStack_130 = puVar1[0x1a];
                  uStack_12c = puVar1[0x1b];
                  uStack_128 = puVar1[0x1c];
                  FUN_36162800(&fStack_120,pfVar8,&fStack_150);
                  shaSetTextureWrapping(0x51,0x51,iVar20);
                  shaSetTexture(pCVar9,iVar20);
                  *(float *)(aSStack_f0 + iVar20 * 0x30) = fStack_120;
                  auStack_ec[iVar20 * 0xc + 2] = uStack_114;
                  auStack_ec[iVar20 * 0xc + 5] = uStack_108;
                  auStack_ec[iVar20 * 0xc] = uStack_11c;
                  auStack_ec[iVar20 * 0xc + 1] = uStack_118;
                  auStack_ec[iVar20 * 0xc + 8] = uStack_fc;
                  auStack_ec[iVar20 * 0xc + 3] = uStack_110;
                  auStack_ec[iVar20 * 0xc + 4] = uStack_10c;
                  auStack_ec[iVar20 * 0xc + 6] = uStack_104;
                  auStack_ec[iVar20 * 0xc + 7] = uStack_100;
                  auStack_ec[iVar20 * 0xc + 9] = uStack_f8;
                  auStack_ec[iVar20 * 0xc + 10] = uStack_f4;
                  shaSetTextureWrapping(0x52,0x52,iVar20 + 1);
                  shaSetTexture(pCVar10,iVar20 + 1);
                  uVar11 = puVar1[0x2b];
                  auStack_ec[iVar20 * 0xc + 0xb] = puVar1[0x2a];
                  uVar12 = puVar1[0x2c];
                  auStack_ec[iVar20 * 0xc + 0xc] = uVar11;
                  uVar11 = puVar1[0x2d];
                  auStack_ec[iVar20 * 0xc + 0xd] = uVar12;
                  uVar12 = puVar1[0x2e];
                  auStack_ec[iVar20 * 0xc + 0xe] = uVar11;
                  uVar11 = puVar1[0x2f];
                  auStack_ec[iVar20 * 0xc + 0xf] = uVar12;
                  uVar12 = puVar1[0x30];
                  auStack_ec[iVar20 * 0xc + 0x10] = uVar11;
                  uVar11 = puVar1[0x31];
                  auStack_ec[iVar20 * 0xc + 0x11] = uVar12;
                  uVar12 = puVar1[0x32];
                  auStack_ec[iVar20 * 0xc + 0x12] = uVar11;
                  uVar11 = puVar1[0x33];
                  auStack_ec[iVar20 * 0xc + 0x13] = uVar12;
                  uVar12 = puVar1[0x34];
                  auStack_ec[iVar20 * 0xc + 0x14] = uVar11;
                  uVar11 = puVar1[0x35];
                  auStack_ec[iVar20 * 0xc + 0x15] = uVar12;
                  auStack_ec[iVar20 * 0xc + 0x16] = uVar11;
                  iVar20 = iVar20 + 2;
                  pSStack_1a0 = (ShaderRegister *)((int)pSStack_1a0 + 1);
                }
                local_198 = local_198 + 1;
                local_18c = local_18c + 0x94;
              } while (local_198 < iVar17);
              if (0 < (int)pSStack_1a0) {
                if (pSStack_1a0 == (ShaderRegister *)0x1) {
                  puVar26 = &DAT_36301450;
                }
                else {
                  puVar26 = &DAT_36301498;
                }
                FUN_3608da20(&DAT_36300da8,puVar26);
                if (DAT_36300d78 == 0) {
                  iVar17 = 0;
                  if (0 < iVar20) {
                    pSVar19 = aSStack_f0;
                    do {
                      shaSetTexCoordArray(pGVar14,iVar17);
                      shaSetTextureMatrix((float *)pSVar19,iVar17);
                      iVar17 = iVar17 + 1;
                      pSVar19 = pSVar19 + 0x30;
                    } while (iVar17 < iVar20);
                  }
                }
                else {
                  shaSetPixelProgram(0);
                  shaSetVertexProgram(0);
                  if (0 < iVar20) {
                    iVar17 = 0x15;
                    pSVar19 = aSStack_f0;
                    do {
                      shaSetVertexProgramConst(iVar17,pSVar19,3);
                      iVar17 = iVar17 + 3;
                      pSVar19 = pSVar19 + 0x30;
                      iVar20 = iVar20 + -1;
                    } while (iVar20 != 0);
                  }
                }
                if ((local_19c == 0) && (uVar16 == 0)) {
                  shaEnableDepthWrite();
                  GVar27 = 0x2b;
                }
                else {
                  shaDisableDepthWrite();
                  GVar27 = 0x2c;
                }
                shaDepthFunc(GVar27);
                FUN_3608da40();
              }
            }
            iVar17 = *(int *)(_pGfx + 0xadc);
            iVar20 = 1;
            if (1 < iVar17) {
              do {
                shaClearTextureMatrix(iVar20);
                shaDisableTexture(iVar20);
                iVar20 = iVar20 + 1;
              } while (iVar20 < iVar17);
            }
            shaSetTextureUnit(0);
          }
          if (DAT_362a6c50 != 0) {
            FUN_3608da20(&DAT_36300da8,&DAT_36301408);
            shaBlendFunc(0x19,0x17);
            shaEnableBlend();
            shaSetTextureWrapping(0x52,0x52,0);
            shaSetTexture(pCVar3,0);
            if (DAT_36300d78 == 0) {
              shaSetTexCoordArray(pGVar14,0);
              shaSetTextureMatrix((float *)(puVar1 + 0x36),0);
            }
            else {
              shaSetPixelProgram(0);
              shaSetVertexProgram(0);
              shaSetVertexProgramConst(0x15,(ShaderRegister *)(puVar1 + 0x36),3);
            }
            FUN_3608da40();
          }
          if ((char)*(uint *)(param_1 + 8) < '\0') {
            FUN_3617f620(iVar2);
          }
          else if ((*(uint *)(param_1 + 8) & 0x100) != 0) {
            FUN_36180850(iVar2);
          }
          shaUnlockArrays();
          shaClean();
          shaDepthFunc(0x2b);
        }
        puVar1 = (uint *)(iVar21 + 0x130 + *(int *)(iVar2 + 0x104));
        *puVar1 = *puVar1 & 0xffffffe7;
        local_17c = local_17c + 1;
      } while (local_17c < iVar15);
    }
    if (DAT_362a4154 != 0) {
      FUN_36181180(param_1);
    }
    if (DAT_36300d78 != 0) {
      shaDisablePixelProgram();
      shaDisableVertexProgram();
    }
  }
  return;
}

