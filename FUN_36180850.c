
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36180850(int param_1)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  GFXColor *pGVar6;
  uint uVar7;
  float *pfVar8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_9c;
  GFXColor *local_98;
  GFXTexCoord *local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50 [3];
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  float local_24;
  float local_14;
  float local_4;
  
  FUN_360605c0(&local_a0,DAT_362c3b08);
  if (in_EAX == -1) {
    FUN_3608d7d0(&local_90,(float *)&DAT_36300d48);
    local_b0 = -*(float *)(DAT_36301400 + 0x110);
    local_ac = -*(float *)(DAT_36301400 + 0x114);
    local_a8 = -*(float *)(DAT_36301400 + 0x118);
    DAT_36301598 = local_90 * local_b0 + local_8c * local_ac + local_88 * local_a8;
    DAT_3630159c = local_80 * local_b0 + local_7c * local_ac + local_78 * local_a8;
    DAT_363015a0 = local_70 * local_b0 + local_6c * local_ac + local_68 * local_a8;
    DAT_36300c48 = (_DAT_36300d74 - *(float *)(DAT_36301400 + 0x48)) * local_a8 +
                   (_DAT_36300d64 - *(float *)(DAT_36301400 + 0x44)) * local_ac +
                   -DAT_362c3afc + (_DAT_36300d54 - *(float *)(DAT_36301400 + 0x40)) * local_b0;
    if (DAT_36300d78 == 0) {
      _DAT_363015f4 = 0;
      _DAT_363015e4 = 0;
      iVar2 = FUN_36061f20(0x36301568);
      local_9c = iVar2;
      local_94 = (GFXTexCoord *)FUN_360627d0(&DAT_363015ec,iVar2);
      local_98 = (GFXColor *)FUN_36062630(&DAT_363015dc,iVar2);
      iVar3 = 0;
      uVar7 = iVar2;
      if (3 < iVar2) {
        iVar4 = 0;
        pGVar6 = local_98 + 8;
        do {
          pfVar8 = (float *)(DAT_3630156c + iVar4);
          pfVar5 = (float *)(DAT_363015f0 + iVar3 * 8);
          fVar1 = (*pfVar8 * DAT_36301598 + pfVar8[1] * DAT_3630159c + pfVar8[2] * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar5[1] = 0.0;
          *pfVar5 = fVar1;
          *(uint *)(pGVar6 + -8) = local_a0;
          pfVar5 = (float *)(iVar4 + 0xc + DAT_3630156c);
          pfVar8 = (float *)(DAT_363015f0 + 8 + iVar3 * 8);
          fVar1 = (*pfVar5 * DAT_36301598 + pfVar5[1] * DAT_3630159c + pfVar5[2] * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar8[1] = 0.0;
          *pfVar8 = fVar1;
          *(uint *)(pGVar6 + -4) = local_a0;
          pfVar5 = (float *)(iVar4 + 0x18 + DAT_3630156c);
          pfVar8 = (float *)(DAT_363015f0 + 0x10 + iVar3 * 8);
          fVar1 = (*pfVar5 * DAT_36301598 + pfVar5[1] * DAT_3630159c + pfVar5[2] * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar8[1] = 0.0;
          *pfVar8 = fVar1;
          *(uint *)pGVar6 = local_a0;
          pfVar5 = (float *)(iVar4 + 0x24 + DAT_3630156c);
          local_b0 = *pfVar5;
          local_ac = pfVar5[1];
          local_a8 = pfVar5[2];
          pfVar5 = (float *)(DAT_363015f0 + 0x18 + iVar3 * 8);
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + 0x30;
          fVar1 = (local_b0 * DAT_36301598 + local_ac * DAT_3630159c + local_a8 * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar5[1] = 0.0;
          *pfVar5 = fVar1;
          *(uint *)(pGVar6 + 4) = local_a0;
          pGVar6 = pGVar6 + 0x10;
          uVar7 = local_9c;
        } while (iVar3 < iVar2 + -3);
      }
      if (iVar3 < (int)uVar7) {
        iVar2 = iVar3 * 0xc;
        do {
          pfVar5 = (float *)(DAT_3630156c + iVar2);
          local_b0 = *pfVar5;
          local_ac = pfVar5[1];
          local_a8 = pfVar5[2];
          pfVar5 = (float *)(DAT_363015f0 + iVar3 * 8);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0xc;
          fVar1 = (local_b0 * DAT_36301598 + local_ac * DAT_3630159c + local_a8 * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar5[1] = 0.0;
          *pfVar5 = fVar1;
          *(uint *)(local_98 + iVar3 * 4 + -4) = local_a0;
        } while (iVar3 < (int)uVar7);
      }
    }
  }
  else {
    FUN_36162680(local_30,(float *)&DAT_36300d48,
                 (float *)(in_EAX * 0x160 + 0x48 + *(int *)(param_1 + 0x104)));
    FUN_3608d7d0(&local_90,local_30);
    local_b0 = -*(float *)(DAT_36301400 + 0x110);
    local_ac = -*(float *)(DAT_36301400 + 0x114);
    local_a8 = -*(float *)(DAT_36301400 + 0x118);
    DAT_36301598 = local_90 * local_b0 + local_8c * local_ac + local_88 * local_a8;
    DAT_3630159c = local_80 * local_b0 + local_7c * local_ac + local_78 * local_a8;
    DAT_363015a0 = local_70 * local_b0 + local_6c * local_ac + local_68 * local_a8;
    DAT_36300c48 = (local_4 - *(float *)(DAT_36301400 + 0x48)) * local_a8 +
                   (local_14 - *(float *)(DAT_36301400 + 0x44)) * local_ac +
                   -DAT_362c3afc + (local_24 - *(float *)(DAT_36301400 + 0x40)) * local_b0;
    if (DAT_36300d78 == 0) {
      _DAT_363015f4 = 0;
      _DAT_363015e4 = 0;
      iVar2 = FUN_36061f20(0x36301548);
      local_9c = iVar2;
      local_94 = (GFXTexCoord *)FUN_360627d0(&DAT_363015ec,iVar2);
      local_98 = (GFXColor *)FUN_36062630(&DAT_363015dc,iVar2);
      iVar3 = 0;
      uVar7 = iVar2;
      if (3 < iVar2) {
        iVar4 = 0;
        pGVar6 = local_98 + 8;
        do {
          pfVar8 = (float *)(DAT_3630154c + iVar4);
          pfVar5 = (float *)(DAT_363015f0 + iVar3 * 8);
          fVar1 = (*pfVar8 * DAT_36301598 + pfVar8[1] * DAT_3630159c + pfVar8[2] * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar5[1] = 0.0;
          *pfVar5 = fVar1;
          *(uint *)(pGVar6 + -8) = local_a0;
          pfVar5 = (float *)(iVar4 + 0xc + DAT_3630154c);
          pfVar8 = (float *)(DAT_363015f0 + 8 + iVar3 * 8);
          fVar1 = (*pfVar5 * DAT_36301598 + pfVar5[1] * DAT_3630159c + pfVar5[2] * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar8[1] = 0.0;
          *pfVar8 = fVar1;
          *(uint *)(pGVar6 + -4) = local_a0;
          pfVar5 = (float *)(iVar4 + 0x18 + DAT_3630154c);
          pfVar8 = (float *)(DAT_363015f0 + 0x10 + iVar3 * 8);
          fVar1 = (*pfVar5 * DAT_36301598 + pfVar5[1] * DAT_3630159c + pfVar5[2] * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar8[1] = 0.0;
          *pfVar8 = fVar1;
          *(uint *)pGVar6 = local_a0;
          pfVar5 = (float *)(iVar4 + 0x24 + DAT_3630154c);
          local_b0 = *pfVar5;
          local_ac = pfVar5[1];
          local_a8 = pfVar5[2];
          pfVar5 = (float *)(DAT_363015f0 + 0x18 + iVar3 * 8);
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + 0x30;
          fVar1 = (local_b0 * DAT_36301598 + local_ac * DAT_3630159c + local_a8 * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar5[1] = 0.0;
          *pfVar5 = fVar1;
          *(uint *)(pGVar6 + 4) = local_a0;
          pGVar6 = pGVar6 + 0x10;
          uVar7 = local_9c;
        } while (iVar3 < iVar2 + -3);
      }
      if (iVar3 < (int)uVar7) {
        iVar2 = iVar3 * 0xc;
        do {
          pfVar5 = (float *)(DAT_3630154c + iVar2);
          local_b0 = *pfVar5;
          local_ac = pfVar5[1];
          local_a8 = pfVar5[2];
          pfVar5 = (float *)(DAT_363015f0 + iVar3 * 8);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0xc;
          fVar1 = (local_b0 * DAT_36301598 + local_ac * DAT_3630159c + local_a8 * DAT_363015a0 +
                  DAT_36300c48) * DAT_362c3b58;
          pfVar5[1] = 0.0;
          *pfVar5 = fVar1;
          *(uint *)(local_98 + iVar3 * 4 + -4) = local_a0;
        } while (iVar3 < (int)uVar7);
      }
    }
  }
  pGVar6 = local_98;
  FUN_3608da20(&DAT_36300da8,&DAT_363014e0);
  shaBlendFunc(0x1b,0x1c);
  shaEnableBlend();
  shaSetTextureUnit(0);
  shaDepthFunc(0x2c);
  shaSetTextureWrapping(0x52,0x52,-1);
  FUN_3607b9d0((undefined4 *)&DAT_362c3b64,(int *)&DAT_362c3bec);
  if (DAT_36300d78 != 0) {
    shaSetVertexProgram(0);
    shaSetPixelProgram(0);
    local_50[0] = DAT_36300c48;
    local_ac = DAT_3630159c;
    local_b0 = DAT_36301598;
    local_9c = local_a0 >> 0x18;
    local_40 = (float)(local_a0 & 0xff) * _DAT_362287a4;
    local_50[2] = DAT_362c3b58;
    local_a8 = DAT_363015a0;
    local_3c = (float)(local_a0 >> 8 & 0xff) * _DAT_362287a4;
    local_38 = (float)(local_a0 >> 0x10 & 0xff) * _DAT_362287a4;
    local_50[1] = 0.0;
    local_44 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_a4 = 0;
    local_34 = (float)local_9c * _DAT_362287a4;
    shaSetVertexProgramConst(0x12,(ShaderRegister *)&local_b0,1);
    shaSetVertexProgramConst(0x13,(ShaderRegister *)&local_60,1);
    shaSetVertexProgramConst(0x14,(ShaderRegister *)local_50,1);
    shaSetPixelProgramConst(7,(ShaderRegister *)&local_40,1);
    FUN_3608da40();
    return;
  }
  shaClearTextureMatrix(-1);
  shaSetTexCoordArray(local_94,0);
  shaSetColorArray(pGVar6);
  FUN_3608da40();
  return;
}

