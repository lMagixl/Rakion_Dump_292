
void __cdecl FUN_36181180(int param_1)

{
  int iVar1;
  CTextureData *pCVar2;
  CTextureData *pCVar3;
  CTextureData *pCVar4;
  undefined4 *puVar5;
  bool bVar6;
  GFXTexCoord *pGVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  ShaderRegister *pSVar12;
  bool bVar13;
  GfxBlend GVar14;
  GfxBlend GVar15;
  undefined *puVar16;
  int local_dc;
  int local_d8;
  ShaderRegister aSStack_c0 [48];
  undefined4 auStack_90 [36];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  pCVar2 = *(CTextureData **)(iVar1 + 0xc);
  pCVar3 = *(CTextureData **)(iVar1 + 0x14);
  pCVar4 = *(CTextureData **)(iVar1 + 0x10);
  iVar9 = FUN_36061f20(0x36301568);
  iVar10 = FUN_36061f30(0x36301588);
  if ((iVar10 != 0) && (iVar9 != 0)) {
    bVar13 = DAT_36300d78 != 0;
    if (((~(*(uint *)(param_1 + 8) >> 1) & 1) == 0) ||
       ((((*(uint *)(param_1 + 8) & 1) == 0 || (*(int *)(iVar1 + 0x58) < *(int *)(iVar1 + 0x5c))) ||
        (DAT_362a414c == 0)))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    FUN_3617d780();
    puVar8 = DAT_3630158c;
    pGVar7 = DAT_3630157c;
    shaSetVertexArray(DAT_3630156c,0,iVar9);
    shaSetIndices(puVar8,iVar10);
    shaSetConstantColor(0xffffffff);
    shaLockArrays();
    iVar9 = 0;
    if (bVar6) {
      shaDisableBlend();
      shaEnableDepthWrite();
      shaEnableAlphaTest();
      shaEnableDepthWrite();
      FUN_3608da20(&DAT_36300da8,&DAT_36301408);
      shaSetTextureWrapping(0x52,0x52,0);
      shaSetTexture(pCVar3,0);
      shaClearTextureMatrix(0);
      if (DAT_36300d78 == 0) {
        shaSetTexCoordArray(pGVar7,0);
        shaSetTextureMatrix((float *)(iVar1 + 0x60),0);
      }
      else {
        shaSetPixelProgram(0);
        shaSetVertexProgram(0);
        shaSetVertexProgramConst(0x15,(ShaderRegister *)(iVar1 + 0x60),3);
      }
      FUN_3608da40();
      shaDisableAlphaTest();
      shaDisableDepthWrite();
      shaDepthFunc(0x2c);
    }
    else {
      (*DAT_362c46c4)(0);
      shaEnableAlphaTest();
      shaEnableDepthWrite();
      FUN_3608da20(&DAT_36300da8,&DAT_36301408);
      shaSetTextureWrapping(0x52,0x52,0);
      shaSetTexture(pCVar2,0);
      if (DAT_36300d78 == 0) {
        shaSetTexCoordArray(pGVar7,0);
        shaSetTextureMatrix((float *)(iVar1 + 0x90),0);
      }
      else {
        shaSetPixelProgram(0);
        shaSetVertexProgram(0);
        shaSetVertexProgramConst(0x15,(ShaderRegister *)(iVar1 + 0x90),3);
      }
      FUN_3608da40();
      shaDisableAlphaTest();
      shaDisableDepthWrite();
      shaClearTextureMatrix(0);
      (*DAT_362c46c4)(0xffffffff);
      if (DAT_36300d78 == 0) {
        GVar15 = 0x1c;
        GVar14 = 0x1b;
      }
      else {
        GVar15 = 0x1b;
        GVar14 = 0x15;
      }
      shaBlendFunc(GVar14,GVar15);
      shaEnableBlend();
      iVar10 = 0;
      local_d8 = FUN_36172d20((undefined4 *)(iVar1 + 0x108));
      if (0 < local_d8) {
        local_dc = 0;
        do {
          puVar11 = (undefined4 *)(*(int *)(iVar1 + 0x10c) + local_dc);
          puVar5 = (undefined4 *)*puVar11;
          pCVar2 = (CTextureData *)puVar5[0xe];
          pCVar3 = (CTextureData *)puVar5[0xd];
          if (((puVar11[3] != 0) && (pCVar3 != (CTextureData *)0x0)) &&
             ((*(byte *)(puVar11 + 6) & 1) == 0)) {
            if ((int)((uint)bVar13 * 2 + 2) < iVar9 + 2) {
              if (iVar10 == 1) {
                puVar16 = &DAT_36301450;
              }
              else {
                puVar16 = &DAT_36301498;
              }
              FUN_3608da20(&DAT_36300da8,puVar16);
              if (DAT_36300d78 == 0) {
                iVar10 = 0;
                if (0 < iVar9) {
                  pSVar12 = aSStack_c0;
                  do {
                    shaSetTexCoordArray(pGVar7,iVar10);
                    shaSetTextureMatrix((float *)pSVar12,iVar10);
                    iVar10 = iVar10 + 1;
                    pSVar12 = pSVar12 + 0x30;
                  } while (iVar10 < iVar9);
                }
              }
              else {
                shaSetPixelProgram(0);
                shaSetVertexProgram(0);
                if (0 < iVar9) {
                  iVar10 = 0x15;
                  pSVar12 = aSStack_c0;
                  do {
                    shaSetVertexProgramConst(iVar10,pSVar12,3);
                    iVar10 = iVar10 + 3;
                    pSVar12 = pSVar12 + 0x30;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                }
              }
              shaDisableDepthWrite();
              shaDepthFunc(0x2c);
              FUN_3608da40();
              iVar9 = 0;
              iVar10 = 0;
            }
            shaSetTextureWrapping(0x51,0x51,iVar9);
            shaSetTexture(pCVar3,iVar9);
            FUN_3611f0c0((undefined4 *)(aSStack_c0 + iVar9 * 0x30),puVar5);
            shaSetTextureWrapping(0x52,0x52,iVar9 + 1);
            shaSetTexture(pCVar2,iVar9 + 1);
            FUN_3611f0c0(auStack_90 + iVar9 * 0xc,(undefined4 *)(iVar1 + 0x90));
            iVar9 = iVar9 + 2;
            iVar10 = iVar10 + 1;
          }
          local_dc = local_dc + 0x94;
          local_d8 = local_d8 + -1;
        } while (local_d8 != 0);
        if (0 < iVar10) {
          if (iVar10 == 1) {
            puVar16 = &DAT_36301450;
          }
          else {
            puVar16 = &DAT_36301498;
          }
          FUN_3608da20(&DAT_36300da8,puVar16);
          if (DAT_36300d78 == 0) {
            iVar10 = 0;
            if (0 < iVar9) {
              pSVar12 = aSStack_c0;
              do {
                shaSetTexCoordArray(pGVar7,iVar10);
                shaSetTextureMatrix((float *)pSVar12,iVar10);
                iVar10 = iVar10 + 1;
                pSVar12 = pSVar12 + 0x30;
              } while (iVar10 < iVar9);
            }
          }
          else {
            shaSetPixelProgram(0);
            shaSetVertexProgram(0);
            if (0 < iVar9) {
              iVar10 = 0x15;
              pSVar12 = aSStack_c0;
              do {
                shaSetVertexProgramConst(iVar10,pSVar12,3);
                iVar10 = iVar10 + 3;
                pSVar12 = pSVar12 + 0x30;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
          shaDisableDepthWrite();
          shaDepthFunc(0x2c);
          FUN_3608da40();
        }
      }
      iVar9 = *(int *)(_pGfx + 0xadc);
      iVar10 = 1;
      if (1 < iVar9) {
        do {
          shaClearTextureMatrix(iVar10);
          shaDisableTexture(iVar10);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar9);
      }
      shaSetTextureUnit(0);
    }
    if (DAT_362a6c50 != 0) {
      FUN_3608da20(&DAT_36300da8,&DAT_36301408);
      shaEnableBlend();
      shaBlendFunc(0x19,0x17);
      shaSetTextureWrapping(0x52,0x52,0);
      shaSetTexture(pCVar4,0);
      if (DAT_36300d78 == 0) {
        shaSetTexCoordArray(pGVar7,0);
        shaSetTextureMatrix((float *)(iVar1 + 0xc0),0);
      }
      else {
        shaSetPixelProgram(0);
        shaSetVertexProgram(0);
        shaSetVertexProgramConst(0x15,(ShaderRegister *)(iVar1 + 0xc0),3);
      }
      FUN_3608da40();
    }
    if ((char)*(uint *)(param_1 + 8) < '\0') {
      FUN_3617f620(iVar1);
    }
    else if ((*(uint *)(param_1 + 8) & 0x100) != 0) {
      FUN_36180850(iVar1);
    }
    shaUnlockArrays();
    shaClean();
    shaDepthFunc(0x2b);
    DAT_36301570 = 0;
    DAT_36301580 = 0;
    DAT_36301590 = 0;
  }
  return;
}

