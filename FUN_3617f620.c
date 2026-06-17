
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3617f620(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  GFXColor *pGVar4;
  GFXColor *pGVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  GFXColor *pGVar9;
  GFXColor *pGVar10;
  float *pfVar11;
  float *pfVar12;
  uint local_110;
  uint local_10c;
  float local_108 [4];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8 [4];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  GFXColor *local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  GFXTexCoord *local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  float local_24;
  float local_14;
  float local_4;
  
  FUN_360605c0(&local_110,DAT_362c3b94);
  if (in_EAX == -1) {
    FUN_3608d7d0(&local_84,(float *)&DAT_36300d48);
    FUN_3608d7d0(local_c8,&DAT_36300d18);
    local_94 = -*(float *)(DAT_36301400 + 0x110);
    local_90 = -*(float *)(DAT_36301400 + 0x114);
    local_8c = -*(float *)(DAT_36301400 + 0x118);
    DAT_36301598 = local_90 * local_80 + local_8c * local_7c + local_84 * local_94;
    DAT_3630159c = local_90 * local_70 + local_8c * local_6c + local_74 * local_94;
    DAT_363015a0 = local_8c * local_5c + local_64 * local_94 + local_60 * local_90;
    DAT_363015a4 = local_c8[1] * 0.0 + local_c8[2] * -1.0 + local_c8[0] * 0.0;
    DAT_363015a8 = local_b0 * -1.0 + local_b4 * 0.0 + local_b8 * 0.0;
    DAT_363015ac = local_a0 * -1.0 + local_a4 * 0.0 + local_a8 * 0.0;
    local_c8[0] = *(float *)(DAT_36301400 + 0xf8);
    local_c8[2] = (float)*(undefined4 *)(DAT_36301400 + 0x110);
    local_c8[1] = (float)*(undefined4 *)(DAT_36301400 + 0x104);
    local_b8 = (float)*(undefined4 *)(DAT_36301400 + 0x108);
    local_c8[3] = (float)*(undefined4 *)(DAT_36301400 + 0xfc);
    local_b0 = (float)*(undefined4 *)(DAT_36301400 + 0x100);
    local_b4 = (float)*(undefined4 *)(DAT_36301400 + 0x114);
    local_a8 = (float)*(undefined4 *)(DAT_36301400 + 0x118);
    local_ac = (float)*(undefined4 *)(DAT_36301400 + 0x10c);
    pfVar11 = local_c8;
    pfVar12 = local_108;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_c8[0] = local_108[0] * DAT_36300d18 +
                  local_108[1] * DAT_36300d28 + local_108[2] * DAT_36300d38;
    local_c8[1] = local_108[0] * DAT_36300d1c +
                  local_108[1] * DAT_36300d2c + local_108[2] * DAT_36300d3c;
    local_c8[2] = local_108[0] * DAT_36300d20 +
                  local_108[1] * DAT_36300d30 + local_108[2] * DAT_36300d40;
    local_c8[3] = local_108[3] * DAT_36300d18 + local_f8 * DAT_36300d28 + local_f4 * DAT_36300d38;
    local_b8 = local_108[3] * DAT_36300d1c + local_f8 * DAT_36300d2c + local_f4 * DAT_36300d3c;
    local_b4 = local_108[3] * DAT_36300d20 + local_f8 * DAT_36300d30 + local_f4 * DAT_36300d40;
    local_b0 = local_f0 * DAT_36300d18 + local_ec * DAT_36300d28 + local_e8 * DAT_36300d38;
    local_ac = local_f0 * DAT_36300d1c + local_ec * DAT_36300d2c + local_e8 * DAT_36300d3c;
    local_a8 = local_f0 * DAT_36300d20 + local_ec * DAT_36300d30 + local_e8 * DAT_36300d40;
    pfVar11 = local_c8;
    pfVar12 = local_108;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_c8[0] = local_108[0];
    local_c8[1] = local_108[3];
    local_c8[2] = local_f0;
    local_c8[3] = local_108[1];
    local_b8 = local_f8;
    local_b4 = local_ec;
    local_b0 = local_108[2];
    local_ac = local_f4;
    local_a8 = local_e8;
    pfVar11 = local_c8;
    pfVar12 = local_108;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    DAT_363015b0 = local_108[0] * _DAT_362c3bd4 +
                   local_108[1] * _DAT_362c3bd8 + local_108[2] * _DAT_362c3bdc;
    DAT_363015b4 = local_108[3] * _DAT_362c3bd4 +
                   local_f8 * _DAT_362c3bd8 + local_f4 * _DAT_362c3bdc;
    DAT_363015b8 = local_f0 * _DAT_362c3bd4 + local_ec * _DAT_362c3bd8 + local_e8 * _DAT_362c3bdc;
    DAT_36300c50 = (_DAT_36300d74 - *(float *)(DAT_36301400 + 0x48)) * local_8c +
                   (_DAT_36300d64 - *(float *)(DAT_36301400 + 0x44)) * local_90 +
                   (_DAT_36300d54 - *(float *)(DAT_36301400 + 0x40)) * local_94;
    DAT_36300c4c = _DAT_362c3bdc * _DAT_36300d74 +
                   _DAT_362c3bd8 * _DAT_36300d64 + _DAT_362c3bd4 * _DAT_36300d54 + DAT_362c3b84;
    pGVar5 = local_98;
    local_d8 = DAT_363015b0;
    local_d4 = DAT_363015b4;
    local_d0 = DAT_363015b8;
    if (DAT_36300d78 == 0) {
      _DAT_363015d4 = 0;
      _DAT_363015c4 = 0;
      pGVar4 = (GFXColor *)FUN_36061f20(0x36301568);
      local_98 = pGVar4;
      local_54 = (GFXTexCoord *)FUN_360627d0(&DAT_363015cc,(int)pGVar4);
      pGVar5 = (GFXColor *)FUN_36062630(&DAT_363015bc,(int)pGVar4);
      iVar8 = 0;
      pGVar10 = pGVar4;
      if (3 < (int)pGVar4) {
        iVar7 = 0;
        pGVar9 = pGVar5 + 8;
        do {
          fVar1 = DAT_363015b4 * *(float *)(DAT_3630156c + 4 + iVar7);
          pfVar11 = (float *)(DAT_363015d0 + iVar8 * 8);
          fVar3 = DAT_363015b8 * *(float *)(DAT_3630156c + 8 + iVar7);
          fVar2 = DAT_363015b0 * *(float *)(DAT_3630156c + iVar7);
          *pfVar11 = (DAT_363015a4 * *(float *)(DAT_3630156c + iVar7) +
                      DAT_363015a8 * *(float *)(DAT_3630156c + 4 + iVar7) +
                      DAT_363015ac * *(float *)(DAT_3630156c + 8 + iVar7) + DAT_36300c50) *
                     DAT_362c3b1c;
          pfVar11[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)(pGVar9 + -8) = local_110;
          fVar1 = DAT_363015b4 * *(float *)(DAT_3630156c + 0x10 + iVar7);
          pfVar11 = (float *)(DAT_363015d0 + 8 + iVar8 * 8);
          fVar3 = DAT_363015b8 * *(float *)(DAT_3630156c + 0x14 + iVar7);
          fVar2 = DAT_363015b0 * *(float *)(DAT_3630156c + 0xc + iVar7);
          *pfVar11 = (DAT_363015a4 * *(float *)(DAT_3630156c + 0xc + iVar7) +
                      DAT_363015a8 * *(float *)(DAT_3630156c + 0x10 + iVar7) +
                      DAT_363015ac * *(float *)(DAT_3630156c + 0x14 + iVar7) + DAT_36300c50) *
                     DAT_362c3b1c;
          pfVar11[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)(pGVar9 + -4) = local_110;
          fVar1 = DAT_363015b4 * *(float *)(iVar7 + 0x1c + DAT_3630156c);
          pfVar11 = (float *)(DAT_363015d0 + 0x10 + iVar8 * 8);
          fVar3 = DAT_363015b8 * *(float *)(iVar7 + 0x20 + DAT_3630156c);
          fVar2 = DAT_363015b0 * *(float *)(iVar7 + 0x18 + DAT_3630156c);
          *pfVar11 = (DAT_363015a4 * *(float *)(iVar7 + 0x18 + DAT_3630156c) +
                      DAT_363015a8 * *(float *)(iVar7 + 0x1c + DAT_3630156c) +
                      DAT_363015ac * *(float *)(iVar7 + 0x20 + DAT_3630156c) + DAT_36300c50) *
                     DAT_362c3b1c;
          pfVar11[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)pGVar9 = local_110;
          fVar1 = DAT_363015b4 * *(float *)(iVar7 + 0x28 + DAT_3630156c);
          pfVar11 = (float *)(DAT_363015d0 + 0x18 + iVar8 * 8);
          fVar3 = DAT_363015b8 * *(float *)(iVar7 + 0x2c + DAT_3630156c);
          iVar8 = iVar8 + 4;
          fVar2 = DAT_363015b0 * *(float *)(iVar7 + 0x24 + DAT_3630156c);
          *pfVar11 = (DAT_363015a4 * *(float *)(iVar7 + 0x24 + DAT_3630156c) +
                      DAT_363015a8 * *(float *)(iVar7 + 0x28 + DAT_3630156c) +
                      DAT_363015ac * *(float *)(iVar7 + 0x2c + DAT_3630156c) + DAT_36300c50) *
                     DAT_362c3b1c;
          pfVar11[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)(pGVar9 + 4) = local_110;
          iVar7 = iVar7 + 0x30;
          pGVar9 = pGVar9 + 0x10;
          pGVar10 = local_98;
        } while (iVar8 < (int)(pGVar4 + -3));
      }
      if (iVar8 < (int)pGVar10) {
        iVar7 = iVar8 * 0xc;
        do {
          fVar1 = DAT_363015b4 * *(float *)(iVar7 + 4 + DAT_3630156c);
          pfVar11 = (float *)(DAT_363015d0 + iVar8 * 8);
          fVar3 = DAT_363015b8 * *(float *)(iVar7 + 8 + DAT_3630156c);
          iVar8 = iVar8 + 1;
          fVar2 = DAT_363015b0 * *(float *)(iVar7 + DAT_3630156c);
          *pfVar11 = (DAT_363015a4 * *(float *)(iVar7 + DAT_3630156c) +
                      DAT_363015a8 * *(float *)(iVar7 + 4 + DAT_3630156c) +
                      DAT_363015ac * *(float *)(iVar7 + 8 + DAT_3630156c) + DAT_36300c50) *
                     DAT_362c3b1c;
          pfVar11[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)(pGVar5 + iVar8 * 4 + -4) = local_110;
          iVar7 = iVar7 + 0xc;
        } while (iVar8 < (int)pGVar10);
      }
    }
  }
  else {
    pfVar11 = (float *)(in_EAX * 0x160 + *(int *)(param_1 + 0x104) + 0x48);
    FUN_36162680(local_30,(float *)&DAT_36300d48,pfVar11);
    FUN_36162680(&local_84,&DAT_36300d18,pfVar11);
    FUN_3608d7d0(local_c8,local_30);
    FUN_3608d7d0(local_108,&local_84);
    local_94 = -*(float *)(DAT_36301400 + 0x110);
    local_90 = -*(float *)(DAT_36301400 + 0x114);
    local_8c = -*(float *)(DAT_36301400 + 0x118);
    DAT_36301598 = local_c8[0] * local_94 + local_c8[1] * local_90 + local_c8[2] * local_8c;
    DAT_3630159c = local_b4 * local_90 + local_b0 * local_8c + local_94 * local_b8;
    DAT_363015a0 = local_a0 * local_8c + local_90 * local_a4 + local_94 * local_a8;
    DAT_363015a4 = local_108[0] * 0.0 + local_108[1] * 0.0 + local_108[2] * -1.0;
    DAT_363015a8 = local_f4 * 0.0 + local_f0 * -1.0 + local_f8 * 0.0;
    DAT_363015ac = local_e4 * 0.0 + local_e0 * -1.0 + local_e8 * 0.0;
    local_c8[0] = *(float *)(DAT_36301400 + 0xf8);
    local_c8[2] = (float)*(undefined4 *)(DAT_36301400 + 0x110);
    local_c8[1] = (float)*(undefined4 *)(DAT_36301400 + 0x104);
    local_b8 = (float)*(undefined4 *)(DAT_36301400 + 0x108);
    local_c8[3] = (float)*(undefined4 *)(DAT_36301400 + 0xfc);
    local_b0 = (float)*(undefined4 *)(DAT_36301400 + 0x100);
    local_b4 = (float)*(undefined4 *)(DAT_36301400 + 0x114);
    local_a8 = (float)*(undefined4 *)(DAT_36301400 + 0x118);
    local_ac = (float)*(undefined4 *)(DAT_36301400 + 0x10c);
    pfVar11 = local_c8;
    pfVar12 = local_108;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_c8[0] = local_108[0] * local_84 + local_108[1] * local_74 + local_108[2] * local_64;
    local_c8[1] = local_108[0] * local_80 + local_108[1] * local_70 + local_108[2] * local_60;
    local_c8[2] = local_108[0] * local_7c + local_108[1] * local_6c + local_108[2] * local_5c;
    local_c8[3] = local_108[3] * local_84 + local_f8 * local_74 + local_f4 * local_64;
    local_b8 = local_108[3] * local_80 + local_f8 * local_70 + local_f4 * local_60;
    local_b4 = local_108[3] * local_7c + local_f8 * local_6c + local_f4 * local_5c;
    local_b0 = local_f0 * local_84 + local_ec * local_74 + local_e8 * local_64;
    local_ac = local_f0 * local_80 + local_ec * local_70 + local_e8 * local_60;
    local_a8 = local_f0 * local_7c + local_ec * local_6c + local_e8 * local_5c;
    pfVar11 = local_c8;
    pfVar12 = local_108;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_c8[0] = local_108[0];
    local_c8[1] = local_108[3];
    local_c8[2] = local_f0;
    local_c8[3] = local_108[1];
    local_b8 = local_f8;
    local_b4 = local_ec;
    local_b0 = local_108[2];
    local_ac = local_f4;
    local_a8 = local_e8;
    pfVar11 = local_c8;
    pfVar12 = local_108;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    DAT_363015b0 = local_108[0] * _DAT_362c3bd4 +
                   local_108[1] * _DAT_362c3bd8 + local_108[2] * _DAT_362c3bdc;
    DAT_363015b4 = local_108[3] * _DAT_362c3bd4 +
                   local_f8 * _DAT_362c3bd8 + local_f4 * _DAT_362c3bdc;
    DAT_363015b8 = local_f0 * _DAT_362c3bd4 + local_ec * _DAT_362c3bd8 + local_e8 * _DAT_362c3bdc;
    DAT_36300c50 = (local_4 - *(float *)(DAT_36301400 + 0x48)) * local_8c +
                   (local_14 - *(float *)(DAT_36301400 + 0x44)) * local_90 +
                   (local_24 - *(float *)(DAT_36301400 + 0x40)) * local_94;
    DAT_36300c4c = _DAT_362c3bdc * local_4 + _DAT_362c3bd8 * local_14 + _DAT_362c3bd4 * local_24 +
                   DAT_362c3b84;
    pGVar5 = local_98;
    local_d8 = DAT_363015b0;
    local_d4 = DAT_363015b4;
    local_d0 = DAT_363015b8;
    if (DAT_36300d78 == 0) {
      _DAT_363015d4 = 0;
      _DAT_363015c4 = 0;
      uVar6 = FUN_36061f20(0x36301548);
      local_10c = uVar6;
      local_54 = (GFXTexCoord *)FUN_360627d0(&DAT_363015cc,uVar6);
      local_98 = (GFXColor *)FUN_36062630(&DAT_363015bc,uVar6);
      iVar8 = 0;
      if (3 < (int)uVar6) {
        iVar7 = 0;
        pGVar5 = local_98 + 8;
        do {
          fVar1 = DAT_363015b4 * *(float *)(iVar7 + 4 + DAT_3630154c);
          pfVar12 = (float *)(iVar7 + 8 + DAT_3630154c);
          fVar3 = DAT_363015b8 * *pfVar12;
          pfVar11 = (float *)(DAT_363015d0 + iVar8 * 8);
          fVar2 = DAT_363015b0 * *(float *)(iVar7 + DAT_3630154c);
          *pfVar11 = (DAT_363015a8 * *(float *)(iVar7 + 4 + DAT_3630154c) +
                      DAT_363015ac * *pfVar12 + DAT_363015a4 * *(float *)(iVar7 + DAT_3630154c) +
                     DAT_36300c50) * DAT_362c3b1c;
          pfVar11[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)(pGVar5 + -8) = local_110;
          fVar1 = DAT_363015b4 * *(float *)(iVar7 + 0x10 + DAT_3630154c);
          pfVar11 = (float *)(iVar7 + 0x14 + DAT_3630154c);
          fVar3 = DAT_363015b8 * *pfVar11;
          pfVar12 = (float *)(DAT_363015d0 + 8 + iVar8 * 8);
          fVar2 = DAT_363015b0 * *(float *)(iVar7 + 0xc + DAT_3630154c);
          *pfVar12 = (DAT_363015a8 * *(float *)(iVar7 + 0x10 + DAT_3630154c) +
                      DAT_363015ac * *pfVar11 +
                      DAT_363015a4 * *(float *)(iVar7 + 0xc + DAT_3630154c) + DAT_36300c50) *
                     DAT_362c3b1c;
          pfVar12[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)(pGVar5 + -4) = local_110;
          fVar1 = DAT_363015b4 * *(float *)(iVar7 + 0x1c + DAT_3630154c);
          fVar3 = DAT_363015b8 * *(float *)(iVar7 + 0x20 + DAT_3630154c);
          pfVar11 = (float *)(DAT_363015d0 + 0x10 + iVar8 * 8);
          fVar2 = DAT_363015b0 * *(float *)(iVar7 + 0x18 + DAT_3630154c);
          *pfVar11 = (DAT_363015a8 * *(float *)(iVar7 + 0x1c + DAT_3630154c) +
                      DAT_363015ac * *(float *)(iVar7 + 0x20 + DAT_3630154c) +
                      DAT_363015a4 * *(float *)(iVar7 + 0x18 + DAT_3630154c) + DAT_36300c50) *
                     DAT_362c3b1c;
          pfVar11[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)pGVar5 = local_110;
          fVar1 = DAT_363015b4 * *(float *)(iVar7 + 0x28 + DAT_3630154c);
          pfVar11 = (float *)(iVar7 + 0x2c + DAT_3630154c);
          fVar3 = DAT_363015b8 * *pfVar11;
          pfVar12 = (float *)(DAT_363015d0 + 0x18 + iVar8 * 8);
          iVar8 = iVar8 + 4;
          fVar2 = DAT_363015b0 * *(float *)(iVar7 + 0x24 + DAT_3630154c);
          *pfVar12 = (DAT_363015a8 * *(float *)(iVar7 + 0x28 + DAT_3630154c) +
                      DAT_363015ac * *pfVar11 +
                      DAT_363015a4 * *(float *)(iVar7 + 0x24 + DAT_3630154c) + DAT_36300c50) *
                     DAT_362c3b1c;
          pfVar12[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)(pGVar5 + 4) = local_110;
          iVar7 = iVar7 + 0x30;
          pGVar5 = pGVar5 + 0x10;
          uVar6 = local_10c;
        } while (iVar8 < (int)(local_10c + -3));
      }
      pGVar5 = local_98;
      if (iVar8 < (int)uVar6) {
        iVar7 = iVar8 * 0xc;
        do {
          fVar1 = DAT_363015b4 * *(float *)(iVar7 + 4 + DAT_3630154c);
          pfVar12 = (float *)(iVar7 + 8 + DAT_3630154c);
          fVar3 = DAT_363015b8 * *pfVar12;
          pfVar11 = (float *)(DAT_363015d0 + iVar8 * 8);
          iVar8 = iVar8 + 1;
          fVar2 = DAT_363015b0 * *(float *)(iVar7 + DAT_3630154c);
          *pfVar11 = (DAT_363015a8 * *(float *)(iVar7 + 4 + DAT_3630154c) +
                      DAT_363015ac * *pfVar12 + DAT_363015a4 * *(float *)(iVar7 + DAT_3630154c) +
                     DAT_36300c50) * DAT_362c3b1c;
          pfVar11[1] = (fVar2 + fVar3 + fVar1 + DAT_36300c4c) * DAT_362c3b20;
          *(uint *)(local_98 + iVar8 * 4 + -4) = local_110;
          iVar7 = iVar7 + 0xc;
        } while (iVar8 < (int)uVar6);
      }
    }
  }
  FUN_3608da20(&DAT_36300da8,&DAT_363014e0);
  shaBlendFunc(0x1b,0x1c);
  shaEnableBlend();
  shaSetTextureUnit(0);
  shaDepthFunc(0x2c);
  shaSetTextureWrapping(0x52,0x52,-1);
  FUN_3607b9d0((undefined4 *)&DAT_362c3b2c,(int *)&DAT_362c3ba8);
  if (DAT_36300d78 != 0) {
    shaSetVertexProgram(0);
    shaSetPixelProgram(0);
    local_38 = DAT_362c3b1c;
    local_3c = DAT_36300c4c;
    local_d4 = DAT_363015a8;
    local_d8 = DAT_363015a4;
    local_90 = DAT_363015b4;
    local_94 = DAT_363015b0;
    local_10c = local_110 >> 0x18;
    local_40 = DAT_36300c50;
    local_50 = (float)(local_110 & 0xff) * _DAT_362287a4;
    local_34 = DAT_362c3b20;
    local_d0 = DAT_363015ac;
    local_8c = DAT_363015b8;
    local_4c = (float)(local_110 >> 8 & 0xff) * _DAT_362287a4;
    local_48 = (float)(local_110 >> 0x10 & 0xff) * _DAT_362287a4;
    local_cc = 0;
    local_88 = 0;
    local_44 = (float)local_10c * _DAT_362287a4;
    shaSetVertexProgramConst(0x12,(ShaderRegister *)&local_d8,1);
    shaSetVertexProgramConst(0x13,(ShaderRegister *)&local_94,1);
    shaSetVertexProgramConst(0x14,(ShaderRegister *)&local_40,1);
    shaSetPixelProgramConst(7,(ShaderRegister *)&local_50,1);
    FUN_3608da40();
    return;
  }
  shaClearTextureMatrix(-1);
  shaSetTexCoordArray(local_54,0);
  shaSetColorArray(pGVar5);
  FUN_3608da40();
  return;
}

