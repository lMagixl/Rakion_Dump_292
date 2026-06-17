
void __cdecl FUN_3614da60(int *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  uint local_38;
  
  uVar16 = *param_1 - 1;
  uVar3 = param_1[1] + -5 + uVar16;
  puVar4 = (undefined4 *)param_1[7];
  iVar5 = param_1[4];
  iVar14 = iVar5 - param_2;
  puVar23 = (undefined1 *)(param_1[3] + -1);
  uVar6 = puVar4[9];
  iVar18 = puVar4[8];
  iVar21 = puVar4[0xb];
  uVar19 = puVar4[0xd];
  uVar7 = puVar4[10];
  iVar8 = puVar4[0x12];
  iVar9 = puVar4[0x11];
  uVar10 = puVar4[0x13];
  uVar11 = puVar4[0x14];
  uVar27 = puVar4[0xc];
  puVar24 = puVar23;
  local_38 = uVar16;
LAB_3614daf2:
  if (uVar19 < 0xf) {
    pbVar1 = (byte *)(uVar16 + 1);
    pbVar2 = (byte *)(uVar16 + 2);
    uVar16 = uVar16 + 2;
    uVar27 = uVar27 + ((uint)*pbVar1 << ((byte)uVar19 & 0x1f)) +
             ((uint)*pbVar2 << ((byte)uVar19 + 8 & 0x1f));
    uVar19 = uVar19 + 0x10;
    local_38 = uVar16;
  }
  uVar12 = *(uint *)(iVar9 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar27) * 4);
  uVar27 = uVar27 >> ((byte)(uVar12 >> 8) & 0x1f);
  uVar19 = uVar19 - (uVar12 >> 8 & 0xff);
  while ((uVar12 & 0xff) != 0) {
    puVar25 = puVar24;
    if ((uVar12 & 0x10) != 0) {
      param_2 = uVar12 >> 0x10;
      uVar12 = uVar12 & 0xf;
      uVar17 = uVar16;
      if (uVar12 != 0) {
        if (uVar19 < uVar12) {
          pbVar1 = (byte *)(uVar16 + 1);
          uVar16 = uVar16 + 1;
          uVar27 = uVar27 + ((uint)*pbVar1 << ((byte)uVar19 & 0x1f));
          uVar19 = uVar19 + 8;
          local_38 = uVar16;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar12) - 1U & uVar27);
        uVar27 = uVar27 >> (sbyte)uVar12;
        uVar19 = uVar19 - uVar12;
        uVar17 = uVar16;
      }
      if (uVar19 < 0xf) {
        pbVar1 = (byte *)(uVar17 + 1);
        pbVar2 = (byte *)(uVar17 + 2);
        uVar17 = uVar17 + 2;
        uVar27 = uVar27 + ((uint)*pbVar1 << ((byte)uVar19 & 0x1f)) +
                 ((uint)*pbVar2 << ((byte)uVar19 + 8 & 0x1f));
        uVar19 = uVar19 + 0x10;
        local_38 = uVar17;
      }
      uVar12 = *(uint *)(iVar8 + ((1 << ((byte)uVar11 & 0x1f)) - 1U & uVar27) * 4);
      uVar27 = uVar27 >> ((byte)(uVar12 >> 8) & 0x1f);
      uVar19 = uVar19 - (uVar12 >> 8 & 0xff);
      goto joined_r0x3614dc0f;
    }
    if ((uVar12 & 0x40) != 0) {
      if ((uVar12 & 0x20) == 0) {
        param_1[6] = (int)s_invalid_literal_length_code_362a67cc;
        goto LAB_3614de71;
      }
      *puVar4 = 0xb;
      goto LAB_3614de78;
    }
    uVar12 = *(uint *)(iVar9 + (((1 << ((byte)uVar12 & 0x1f)) - 1U & uVar27) + (uVar12 >> 0x10)) * 4
                      );
    uVar27 = uVar27 >> ((byte)(uVar12 >> 8) & 0x1f);
    uVar19 = uVar19 - (uVar12 >> 8 & 0xff);
  }
  puVar24[1] = (char)(uVar12 >> 0x10);
  puVar25 = puVar24 + 1;
  goto LAB_3614de21;
joined_r0x3614dc0f:
  uVar16 = uVar17;
  if ((uVar12 & 0x10) != 0) goto LAB_3614dc4f;
  if ((uVar12 & 0x40) != 0) {
    param_1[6] = (int)s_invalid_distance_code_362a67b4;
LAB_3614de71:
    *puVar4 = 0x1b;
    goto LAB_3614de78;
  }
  uVar12 = *(uint *)(iVar8 + (((1 << ((byte)uVar12 & 0x1f)) - 1U & uVar27) + (uVar12 >> 0x10)) * 4);
  uVar27 = uVar27 >> ((byte)(uVar12 >> 8) & 0x1f);
  uVar19 = uVar19 - (uVar12 >> 8 & 0xff);
  goto joined_r0x3614dc0f;
LAB_3614dc4f:
  uVar13 = uVar12 & 0xf;
  uVar20 = uVar19;
  if (uVar19 < uVar13) {
    uVar16 = uVar17 + 1;
    uVar20 = uVar19 + 8;
    uVar27 = uVar27 + ((uint)*(byte *)(uVar17 + 1) << ((byte)uVar19 & 0x1f));
    local_38 = uVar16;
    if (uVar20 < uVar13) {
      uVar16 = uVar17 + 2;
      uVar27 = uVar27 + ((uint)*(byte *)(uVar17 + 2) << ((byte)uVar20 & 0x1f));
      uVar20 = uVar19 + 0x10;
      local_38 = uVar16;
    }
  }
  uVar19 = uVar20 - uVar13;
  uVar12 = (uVar12 >> 0x10) + ((1 << (sbyte)uVar13) - 1U & uVar27);
  uVar27 = uVar27 >> (sbyte)uVar13;
  if (uVar12 <= (uint)((int)puVar24 - (int)(puVar23 + iVar14))) {
    iVar15 = (int)puVar24 - uVar12;
    do {
      puVar26 = puVar24;
      iVar22 = iVar15;
      puVar26[1] = *(undefined1 *)(iVar22 + 1);
      puVar26[2] = *(undefined1 *)(iVar22 + 2);
      puVar25 = puVar26 + 3;
      *puVar25 = *(undefined1 *)(iVar22 + 3);
      param_2 = param_2 - 3;
      iVar15 = iVar22 + 3;
      puVar24 = puVar25;
    } while (2 < param_2);
    if (param_2 != 0) {
      puVar25 = puVar26 + 4;
      *puVar25 = *(undefined1 *)(iVar22 + 4);
      if (1 < param_2) {
        puVar25 = puVar26 + 5;
        *puVar25 = *(undefined1 *)(iVar22 + 5);
      }
    }
    goto LAB_3614de21;
  }
  uVar17 = uVar12 - ((int)puVar24 - (int)(puVar23 + iVar14));
  if (uVar6 < uVar17) {
    param_1[6] = (int)s_invalid_distance_too_far_back_362a6794;
    *puVar4 = 0x1b;
LAB_3614de78:
    iVar18 = uVar16 - (uVar19 >> 3);
    iVar21 = uVar19 + (uVar19 >> 3) * -8;
    *param_1 = iVar18 + 1;
    param_1[3] = (int)(puVar25 + 1);
    param_1[1] = (uVar3 - iVar18) + 5;
    param_1[4] = (int)(puVar23 + iVar5 + -0x101 + (0x101 - (int)puVar25));
    puVar4[0xc] = uVar27 & (1 << ((byte)iVar21 & 0x1f)) - 1U;
    puVar4[0xd] = iVar21;
    return;
  }
  iVar15 = iVar21 + -1;
  if (uVar7 == 0) {
    iVar15 = iVar15 + (iVar18 - uVar17);
    if (uVar17 < param_2) {
      param_2 = param_2 - uVar17;
      do {
        puVar25 = (undefined1 *)(iVar15 + 1);
        iVar15 = iVar15 + 1;
        puVar24 = puVar24 + 1;
        uVar17 = uVar17 - 1;
        *puVar24 = *puVar25;
      } while (uVar17 != 0);
LAB_3614dd6f:
      iVar15 = (int)puVar24 - uVar12;
    }
  }
  else if (uVar7 < uVar17) {
    iVar15 = iVar15 + (uVar7 - uVar17) + iVar18;
    uVar17 = uVar17 - uVar7;
    if (uVar17 < param_2) {
      param_2 = param_2 - uVar17;
      do {
        puVar25 = (undefined1 *)(iVar15 + 1);
        iVar15 = iVar15 + 1;
        puVar24 = puVar24 + 1;
        uVar17 = uVar17 - 1;
        *puVar24 = *puVar25;
      } while (uVar17 != 0);
      iVar15 = iVar21 + -1;
      if (uVar7 < param_2) {
        param_2 = param_2 - uVar7;
        uVar17 = uVar7;
        do {
          puVar25 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar24 = puVar24 + 1;
          uVar17 = uVar17 - 1;
          *puVar24 = *puVar25;
        } while (uVar17 != 0);
        goto LAB_3614dd6f;
      }
    }
  }
  else {
    iVar15 = iVar15 + (uVar7 - uVar17);
    if (uVar17 < param_2) {
      param_2 = param_2 - uVar17;
      do {
        puVar25 = (undefined1 *)(iVar15 + 1);
        iVar15 = iVar15 + 1;
        puVar24 = puVar24 + 1;
        uVar17 = uVar17 - 1;
        *puVar24 = *puVar25;
      } while (uVar17 != 0);
      goto LAB_3614dd6f;
    }
  }
  if (2 < param_2) {
    iVar22 = (param_2 - 3) / 3 + 1;
    do {
      puVar24[1] = *(undefined1 *)(iVar15 + 1);
      puVar24[2] = *(undefined1 *)(iVar15 + 2);
      puVar25 = (undefined1 *)(iVar15 + 3);
      iVar15 = iVar15 + 3;
      puVar24 = puVar24 + 3;
      param_2 = param_2 - 3;
      iVar22 = iVar22 + -1;
      *puVar24 = *puVar25;
      uVar16 = local_38;
    } while (iVar22 != 0);
  }
  puVar25 = puVar24;
  if (param_2 != 0) {
    puVar25 = puVar24 + 1;
    *puVar25 = *(undefined1 *)(iVar15 + 1);
    if (1 < param_2) {
      puVar25 = puVar24 + 2;
      *puVar25 = *(undefined1 *)(iVar15 + 2);
    }
  }
LAB_3614de21:
  if ((uVar3 <= uVar16) || (puVar24 = puVar25, puVar23 + iVar5 + -0x101 <= puVar25))
  goto LAB_3614de78;
  goto LAB_3614daf2;
}

