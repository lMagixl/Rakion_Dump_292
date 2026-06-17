
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36176c10(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint *puVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  float10 fVar34;
  uint *local_b8;
  uint *local_b4;
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  uint local_9c;
  uint local_98;
  float local_94;
  float local_8c;
  float local_84;
  uint *local_80;
  uint local_74;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  int local_48;
  
  iVar4 = *(int *)(param_1 + 0x2c);
  uVar5 = *(uint *)(iVar4 + 0x24);
  uVar6 = *(uint *)(iVar4 + 0x20);
  uVar1 = *(int *)(iVar4 + 0x1c) - 1;
  uVar2 = *(int *)(iVar4 + 0x18) - 1;
  FUN_36176aa0(*(CAnimData **)(iVar4 + 0x14),uVar6,uVar5,0x10002);
  fVar10 = (float)(int)uVar6;
  puVar7 = *(uint **)(*(int *)(iVar4 + 0x14) + 0x60);
  iVar25 = *(int *)(*(int *)(iVar4 + 0xc) + 0x60);
  iVar24 = 0;
  local_94 = 0.0;
  fVar16 = _DAT_36223384 / (fVar10 / (float)(int)uVar2);
  fVar11 = (float)(int)uVar5;
  local_ac = _DAT_36223384 / (fVar11 / (float)(int)uVar1);
  local_9c = uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    local_9c = uVar2;
  }
  iVar9 = 0x1f;
  if (local_9c != 0) {
    for (; local_9c >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  GetMipmapOffset(0xff,uVar2,uVar1);
  while (((bVar19 = (byte)iVar24, _DAT_36223384 < fVar16 || (_DAT_36223384 < local_ac)) &&
         (iVar24 = iVar24 + 1, iVar24 < iVar9 + 1))) {
    fVar16 = fVar16 * _DAT_36227cf0;
    local_ac = local_ac * _DAT_36227cf0;
    local_94 = (float)((int)local_94 +
                      ((int)uVar1 >> (bVar19 & 0x1f)) * ((int)uVar2 >> (bVar19 & 0x1f)));
  }
  iVar24 = (int)uVar2 >> (bVar19 & 0x1f);
  local_b4 = (uint *)0x0;
  local_b8 = (uint *)uVar5;
  local_80 = puVar7;
  if (0 < (int)uVar5) {
    do {
      local_84 = 0.0;
      if (0 < (int)uVar6) {
        puVar18 = local_80;
        uVar21 = uVar6;
        do {
          fVar12 = ROUND(local_84);
          local_84 = local_84 + fVar16;
          uVar21 = uVar21 - 1;
          *puVar18 = (uint)*(byte *)(iVar25 + 3 +
                                    ((iVar24 - 1U & (int)fVar12) +
                                    (((int)uVar1 >> (bVar19 & 0x1f)) - 1U &
                                    (int)ROUND((float)local_b4)) * iVar24 + (int)local_94) * 4) <<
                     0x18 | 0xffffff;
          puVar18 = puVar18 + 1;
        } while (uVar21 != 0);
      }
      local_b4 = (uint *)((float)local_b4 + local_ac);
      local_b8 = (uint *)((int)local_b8 - 1);
      local_80 = local_80 + uVar6;
    } while (local_b8 != (uint *)0x0);
  }
  local_b0 = FUN_36172d20((undefined4 *)(iVar4 + 0x108));
  if (local_b0 < 1) {
LAB_3617747d:
    FUN_361754e0(*(CTextureData **)(iVar4 + 0x14),uVar6,uVar5);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
    return;
  }
  local_9c = 0;
  fVar16 = _DAT_36223384 / (fVar10 / (float)(int)uVar2);
  fVar12 = _DAT_36223384 / (fVar11 / (float)(int)uVar1);
LAB_36176ea0:
  iVar25 = *(int *)(iVar4 + 0x10c);
  iVar27 = iVar25 + local_9c;
  iVar24 = *(int *)(*(int *)(iVar25 + local_9c) + 0x34);
  iVar9 = *(int *)(iVar24 + 0x60);
  bVar19 = (byte)*(undefined4 *)(iVar24 + 0x28);
  uVar28 = *(int *)(iVar24 + 0x20) >> (bVar19 & 0x1f);
  uVar21 = *(int *)(iVar24 + 0x24) >> (bVar19 & 0x1f);
  iVar8 = *(int *)(*(int *)(*(int *)(iVar25 + local_9c) + 0x38) + 0x60);
  fVar3 = (float)(*(int *)(iVar4 + 0x4c) * *(int *)(iVar4 + 0x54)) / *(float *)(iVar27 + 0x2c);
  iVar24 = 0;
  local_b4 = (uint *)0x0;
  local_80 = (uint *)0x0;
  fVar13 = (float)(*(int *)(iVar4 + 0x50) * *(int *)(iVar4 + 0x54)) / *(float *)(iVar27 + 0x30);
  fVar30 = (float10)*(float *)(iVar25 + 0x24 + local_9c) * (float10)_DAT_3622300c;
  fVar31 = (float10)fcos(fVar30);
  fVar17 = _DAT_36223384 / (fVar10 / (float)(int)uVar28);
  fVar14 = fVar17 * (float)fVar31 * fVar3;
  fVar32 = (float10)*(float *)(iVar27 + 0x28) * (float10)_DAT_3622300c;
  fVar33 = (float10)fsin(fVar32);
  fVar34 = (float10)_DAT_36223384 / (float10)(fVar11 / (float)(int)uVar21);
  local_ac = (float)-((float10)(float)fVar33 * fVar34 * (float10)fVar13);
  fVar30 = (float10)fsin((float10)(float)fVar30);
  fVar3 = (float)(fVar30 * (float10)fVar17 * (float10)fVar3);
  fVar32 = (float10)fcos(fVar32);
  local_a8 = (float)(fVar32 * fVar34 * (float10)fVar13);
  local_b8 = (uint *)uVar21;
  if ((int)uVar28 <= (int)uVar21) {
    local_b8 = (uint *)uVar28;
  }
  iVar25 = 0x1f;
  if (local_b8 != (uint *)0x0) {
    for (; (uint)local_b8 >> iVar25 == 0; iVar25 = iVar25 + -1) {
    }
  }
  GetMipmapOffset(0xff,uVar28,uVar21);
  local_48 = 0;
  local_b8 = (uint *)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    local_b8 = (uint *)uVar2;
  }
  iVar29 = 0x1f;
  if (local_b8 != (uint *)0x0) {
    for (; (uint)local_b8 >> iVar29 == 0; iVar29 = iVar29 + -1) {
    }
  }
  GetMipmapOffset(0xff,uVar2,uVar1);
  do {
    fVar13 = fVar14;
    if (fVar14 < local_ac) {
      fVar13 = local_ac;
    }
    bVar19 = (byte)local_b4;
    local_94 = fVar12;
    fVar17 = fVar16;
    if (fVar13 <= _DAT_36223384) {
      fVar13 = fVar3;
      if (fVar3 < local_a8) {
        fVar13 = local_a8;
      }
      if (fVar13 <= _DAT_36223384) break;
    }
    local_b4 = (uint *)((int)local_b4 + 1);
    if (iVar25 + 1 <= (int)local_b4) break;
    fVar14 = fVar14 * _DAT_36227cf0;
    local_ac = local_ac * _DAT_36227cf0;
    fVar3 = fVar3 * _DAT_36227cf0;
    local_a8 = local_a8 * _DAT_36227cf0;
    local_80 = (uint *)((int)local_80 +
                       ((int)uVar21 >> (bVar19 & 0x1f)) * ((int)uVar28 >> (bVar19 & 0x1f)));
  } while( true );
  while (((bVar20 = (byte)iVar24, _DAT_36223384 < fVar17 || (_DAT_36223384 < local_94)) &&
         (iVar24 = iVar24 + 1, iVar24 < iVar29 + 1))) {
    local_48 = local_48 + ((int)uVar1 >> (bVar20 & 0x1f)) * ((int)uVar2 >> (bVar20 & 0x1f));
    local_94 = local_94 * _DAT_36227cf0;
    fVar17 = fVar17 * _DAT_36227cf0;
  }
  iVar29 = (int)uVar28 >> (bVar19 & 0x1f);
  iVar25 = (int)uVar21 >> (bVar19 & 0x1f);
  fVar13 = (float)iVar29 * *(float *)(iVar27 + 0x1c);
  local_60 = 0.0;
  fVar15 = (float)iVar25 * *(float *)(iVar27 + 0x20);
  iVar24 = (int)uVar1 >> (bVar20 & 0x1f);
  local_8c = (float)fVar31 * fVar13 - (float)fVar33 * fVar15;
  local_a0 = (float)fVar30 * fVar13 + (float)fVar32 * fVar15;
  local_b8 = puVar7;
  local_74 = uVar5;
  if (0 < (int)uVar5) {
    do {
      local_54 = local_8c;
      local_58 = local_a0;
      local_50 = 0.0;
      if (0 < (int)uVar6) {
        local_b4 = local_b8;
        local_98 = uVar6;
        do {
          uVar21 = *(uint *)(iVar9 + ((iVar29 - 1U & (int)ROUND(local_54)) +
                                     (iVar25 - 1U & (int)ROUND(local_58)) * iVar29 + (int)local_80)
                                     * 4);
          uVar28 = *local_b4;
          iVar27 = (int)((uint)*(byte *)(iVar8 + 3 +
                                        ((((int)uVar2 >> (bVar20 & 0x1f)) - 1U &
                                         (int)ROUND(local_50)) +
                                        (iVar24 - 1U & (int)ROUND(local_60)) * iVar24 + local_48) *
                                        4) * (uVar21 >> 0x18)) >> 8;
          iVar23 = 0xff - iVar27;
          uVar22 = ((uVar28 >> 0x10 & 0xff) * iVar23 >> 8) + ((uVar21 >> 0x10 & 0xff) * iVar27 >> 8)
          ;
          if (0xff < uVar22) {
            uVar22 = 0xff;
          }
          uVar26 = ((uVar21 >> 8 & 0xff) * iVar27 >> 8) + ((uVar28 >> 8 & 0xff) * iVar23 >> 8);
          if (0xff < uVar26) {
            uVar26 = 0xff;
          }
          uVar21 = ((uVar21 & 0xff) * iVar27 >> 8) + ((uVar28 & 0xff) * iVar23 >> 8);
          if (0xff < uVar21) {
            uVar21 = 0xff;
          }
          local_54 = local_54 + fVar14;
          local_58 = local_58 + fVar3;
          *local_b4 = (((uVar28 >> 0x18) << 8 | uVar22) << 8 | uVar26) << 8 | uVar21;
          local_50 = local_50 + fVar17;
          local_b4 = local_b4 + 1;
          local_98 = local_98 - 1;
        } while (local_98 != 0);
      }
      local_8c = local_8c + local_ac;
      local_a0 = local_a0 + local_a8;
      local_74 = local_74 - 1;
      local_60 = local_60 + local_94;
      local_b8 = local_b8 + uVar6;
    } while (local_74 != 0);
  }
  local_9c = local_9c + 0x94;
  local_b0 = local_b0 + -1;
  if (local_b0 == 0) goto LAB_3617747d;
  goto LAB_36176ea0;
}

