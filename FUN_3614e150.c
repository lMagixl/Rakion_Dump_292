
int __cdecl FUN_3614e150(int *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint extraout_EDX;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  uint local_28;
  char local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  uint *local_20;
  uint local_1c;
  byte *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  if ((((param_1 == (int *)0x0) || (puVar1 = (uint *)param_1[7], puVar1 == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return -2;
  }
  if (*puVar1 == 0xb) {
    *puVar1 = 0xc;
  }
  local_20 = (uint *)param_1[3];
  uVar15 = puVar1[0xc];
  uVar9 = puVar1[0xd];
  puVar10 = (uint *)*param_1;
  uVar14 = param_1[1];
  local_28 = param_1[4];
  uVar6 = *puVar1;
  local_14 = 0;
  local_38 = uVar15;
  local_30 = puVar10;
  local_34 = uVar14;
  local_c = uVar14;
  local_1c = local_28;
  do {
    uVar11 = uVar14;
    switch(uVar6) {
    case 0:
      if (puVar1[2] == 0) {
        *puVar1 = 0xc;
      }
      else {
        for (; uVar9 < 0x10; uVar9 = uVar9 + 8) {
          uVar11 = 0;
          if (uVar14 == 0) goto LAB_3614f3e7;
          uVar14 = uVar14 - 1;
          uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)((int)puVar10 + 1);
          local_38 = uVar15;
          local_34 = uVar14;
          local_30 = puVar10;
        }
        if (((puVar1[2] & 2) == 0) || (uVar15 != 0x8b1f)) {
          puVar1[4] = 0;
          uVar6 = uVar15;
          if (((puVar1[2] & 1) == 0) ||
             (uVar6 = local_38, ((uVar15 & 0xff) * 0x100 + (uVar15 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)s_incorrect_header_check_362a67f0;
          }
          else if (((byte)local_38 & 0xf) == 8) {
            uVar6 = local_38 >> 4;
            uVar9 = uVar9 - 4;
            if ((uVar6 & 0xf) + 8 <= puVar1[7]) {
              uVar9 = 0;
              uVar15 = FUN_36149820(0,(byte *)0x0,0);
              puVar1[5] = uVar15;
              param_1[0xc] = uVar15;
              *puVar1 = ~(local_38 >> 0xc) & 2 | 9;
              local_38 = 0;
              uVar15 = 0;
              goto LAB_3614f385;
            }
            param_1[6] = (int)s_invalid_window_size_362a6824;
            local_38 = uVar6;
          }
          else {
            param_1[6] = (int)s_unknown_compression_method_362a6808;
          }
          break;
        }
        uVar9 = 0;
        uVar15 = FUN_3614a050(0,(uint *)0x0,0);
        puVar1[5] = uVar15;
        local_24 = '\x1f';
        local_23 = 0x8b;
        uVar15 = FUN_3614a050(puVar1[5],(uint *)&local_24,2);
        puVar1[5] = uVar15;
        local_38 = 0;
        *puVar1 = 1;
        uVar15 = 0;
      }
      goto LAB_3614f385;
    case 1:
      for (; uVar9 < 0x10; uVar9 = uVar9 + 8) {
        uVar11 = 0;
        if (uVar14 == 0) goto LAB_3614f3e7;
        uVar14 = uVar14 - 1;
        uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
        puVar10 = (uint *)((int)puVar10 + 1);
        local_38 = uVar15;
        local_30 = puVar10;
        local_34 = uVar14;
      }
      puVar1[4] = uVar15;
      uVar6 = uVar15;
      if ((char)uVar15 == '\b') {
        if ((uVar15 & 0xe000) == 0) {
          if ((uVar15 & 0x200) != 0) {
            local_24 = (char)uVar15;
            local_23 = (char)(uVar15 >> 8);
            uVar15 = FUN_3614a050(puVar1[5],(uint *)&local_24,2);
            puVar1[5] = uVar15;
          }
          uVar9 = 0;
          *puVar1 = 2;
          uVar15 = 0;
          do {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            bVar8 = (byte)uVar9;
            uVar14 = uVar14 - 1;
            uVar9 = uVar9 + 8;
            uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar8 & 0x1f));
            puVar10 = (uint *)((int)puVar10 + 1);
joined_r0x3614e3bd:
          } while (uVar9 < 0x20);
          if ((puVar1[4] & 0x200) != 0) {
            local_24 = (char)uVar15;
            local_23 = (undefined1)(uVar15 >> 8);
            local_22 = (undefined1)(uVar15 >> 0x10);
            local_21 = (undefined1)(uVar15 >> 0x18);
            uVar15 = FUN_3614a050(puVar1[5],(uint *)&local_24,4);
            puVar1[5] = uVar15;
          }
          uVar9 = 0;
          *puVar1 = 3;
          uVar15 = 0;
          do {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            bVar8 = (byte)uVar9;
            uVar14 = uVar14 - 1;
            uVar9 = uVar9 + 8;
            uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar8 & 0x1f));
            puVar10 = (uint *)((int)puVar10 + 1);
            local_30 = puVar10;
            local_34 = uVar14;
joined_r0x3614e429:
          } while (uVar9 < 0x10);
          if ((puVar1[4] & 0x200) != 0) {
            local_24 = (char)uVar15;
            local_23 = (undefined1)(uVar15 >> 8);
            uVar15 = FUN_3614a050(puVar1[5],(uint *)&local_24,2);
            puVar1[5] = uVar15;
          }
          uVar9 = 0;
          local_38 = 0;
          *puVar1 = 4;
          uVar15 = 0;
          goto switchD_3614e1d4_caseD_4;
        }
        param_1[6] = (int)s_unknown_header_flags_set_362a6854;
      }
      else {
        param_1[6] = (int)s_unknown_compression_method_362a6838;
      }
      break;
    case 2:
      goto joined_r0x3614e3bd;
    case 3:
      goto joined_r0x3614e429;
    case 4:
switchD_3614e1d4_caseD_4:
      if ((puVar1[4] & 0x400) != 0) {
        for (; uVar9 < 0x10; uVar9 = uVar9 + 8) {
          uVar11 = 0;
          if (uVar14 == 0) goto LAB_3614f3e7;
          uVar14 = uVar14 - 1;
          uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)((int)puVar10 + 1);
          local_34 = uVar14;
          local_30 = puVar10;
        }
        puVar1[0xe] = uVar15;
        if ((puVar1[4] & 0x200) != 0) {
          local_24 = (char)uVar15;
          local_23 = (undefined1)(uVar15 >> 8);
          uVar15 = FUN_3614a050(puVar1[5],(uint *)&local_24,2);
          puVar1[5] = uVar15;
        }
        uVar9 = 0;
        local_38 = 0;
        uVar15 = 0;
      }
      *puVar1 = 5;
      uVar11 = uVar14;
    case 5:
      if ((puVar1[4] & 0x400) == 0) {
LAB_3614e552:
        *puVar1 = 6;
switchD_3614e1d4_caseD_6:
        if ((puVar1[4] & 0x800) == 0) {
LAB_3614e5c0:
          *puVar1 = 7;
switchD_3614e1d4_caseD_7:
          if ((puVar1[4] & 0x1000) == 0) {
LAB_3614e628:
            *puVar1 = 8;
            uVar14 = uVar11;
switchD_3614e1d4_caseD_8:
            if ((puVar1[4] & 0x200) != 0) {
              for (; uVar9 < 0x10; uVar9 = uVar9 + 8) {
                uVar11 = 0;
                if (uVar14 == 0) goto LAB_3614f3e7;
                uVar14 = uVar14 - 1;
                uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
                puVar10 = (uint *)((int)puVar10 + 1);
                local_38 = uVar15;
                local_34 = uVar14;
                local_30 = puVar10;
              }
              if (uVar15 != (puVar1[5] & 0xffff)) {
                param_1[6] = (int)s_header_crc_mismatch_362a6870;
                uVar6 = uVar15;
                break;
              }
              uVar9 = 0;
              local_38 = 0;
            }
            uVar15 = FUN_3614a050(0,(uint *)0x0,0);
            puVar1[5] = uVar15;
            param_1[0xc] = uVar15;
            *puVar1 = 0xb;
            uVar15 = local_38;
            goto LAB_3614f385;
          }
          if (uVar11 != 0) {
            uVar6 = 0;
            do {
              local_18 = (byte *)(uint)*(byte *)(uVar6 + (int)puVar10);
              uVar6 = uVar6 + 1;
              if (local_18 == (byte *)0x0) break;
            } while (uVar6 < uVar11);
            if ((puVar1[4] & 0x2000) != 0) {
              uVar15 = FUN_3614a050(puVar1[5],puVar10,uVar6);
              puVar1[5] = uVar15;
              uVar15 = local_38;
            }
            uVar11 = uVar11 - uVar6;
            puVar10 = (uint *)((int)puVar10 + uVar6);
            local_34 = uVar11;
            local_30 = puVar10;
            if (local_18 == (byte *)0x0) goto LAB_3614e628;
          }
        }
        else if (uVar11 != 0) {
          uVar6 = 0;
          do {
            local_18 = (byte *)(uint)*(byte *)(uVar6 + (int)puVar10);
            uVar6 = uVar6 + 1;
            if (local_18 == (byte *)0x0) break;
          } while (uVar6 < uVar11);
          if ((puVar1[4] & 0x2000) != 0) {
            uVar15 = FUN_3614a050(puVar1[5],puVar10,uVar6);
            puVar1[5] = uVar15;
            uVar15 = local_38;
          }
          uVar11 = uVar11 - uVar6;
          puVar10 = (uint *)((int)puVar10 + uVar6);
          local_34 = uVar11;
          local_30 = puVar10;
          if (local_18 == (byte *)0x0) goto LAB_3614e5c0;
        }
      }
      else {
        uVar6 = puVar1[0xe];
        if (uVar11 < puVar1[0xe]) {
          uVar6 = uVar11;
        }
        if (uVar6 != 0) {
          if ((puVar1[4] & 0x200) != 0) {
            uVar15 = FUN_3614a050(puVar1[5],puVar10,uVar6);
            puVar1[5] = uVar15;
            uVar15 = local_38;
          }
          uVar11 = uVar11 - uVar6;
          puVar10 = (uint *)((int)puVar10 + uVar6);
          puVar1[0xe] = puVar1[0xe] - uVar6;
          local_34 = uVar11;
          local_30 = puVar10;
        }
        if (puVar1[0xe] == 0) goto LAB_3614e552;
      }
LAB_3614f3e7:
      param_1[3] = (int)local_20;
      param_1[4] = local_28;
      *param_1 = (int)puVar10;
      param_1[1] = uVar11;
      puVar1[0xc] = uVar15;
      puVar1[0xd] = uVar9;
      if (((puVar1[8] == 0) && ((0x17 < (int)*puVar1 || (local_1c == param_1[4])))) ||
         (iVar5 = FUN_3614e030((int)param_1), iVar5 == 0)) {
        iVar5 = local_c - param_1[1];
        uVar15 = local_1c - param_1[4];
        param_1[2] = param_1[2] + iVar5;
        param_1[5] = param_1[5] + uVar15;
        puVar1[6] = puVar1[6] + uVar15;
        if ((puVar1[2] != 0) && (uVar15 != 0)) {
          if (puVar1[4] == 0) {
            uVar6 = FUN_36149820(puVar1[5],(byte *)(param_1[3] - uVar15),uVar15);
          }
          else {
            uVar6 = FUN_3614a050(puVar1[5],(uint *)(param_1[3] - uVar15),uVar15);
          }
          puVar1[5] = uVar6;
          param_1[0xc] = uVar6;
        }
        param_1[0xb] = (-(uint)(puVar1[1] != 0) & 0x40) + ((*puVar1 != 0xb) - 1 & 0x80) +
                       puVar1[0xd];
        if (((iVar5 != 0) || (uVar15 != 0)) && (param_2 != 4)) {
          return local_14;
        }
        if (local_14 != 0) {
          return local_14;
        }
        return -5;
      }
      *puVar1 = 0x1c;
switchD_3614e1d4_caseD_1c:
      return -4;
    case 6:
      goto switchD_3614e1d4_caseD_6;
    case 7:
      goto switchD_3614e1d4_caseD_7;
    case 8:
      goto switchD_3614e1d4_caseD_8;
    case 9:
      for (; uVar9 < 0x20; uVar9 = uVar9 + 8) {
        uVar11 = 0;
        if (uVar14 == 0) goto LAB_3614f3e7;
        uVar14 = uVar14 - 1;
        uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
        puVar10 = (uint *)((int)puVar10 + 1);
        local_38 = uVar15;
        local_34 = uVar14;
        local_30 = puVar10;
      }
      uVar15 = ((uVar15 & 0xff00) + uVar15 * 0x10000) * 0x100 + (local_38 >> 0x10 & 0xff) * 0x100 +
               (uVar15 >> 0x18);
      uVar9 = 0;
      puVar1[5] = uVar15;
      param_1[0xc] = uVar15;
      local_38 = 0;
      *puVar1 = 10;
      uVar15 = 0;
    case 10:
      if (puVar1[3] == 0) {
        param_1[3] = (int)local_20;
        param_1[1] = uVar14;
        *param_1 = (int)puVar10;
        param_1[4] = local_28;
        puVar1[0xd] = uVar9;
        puVar1[0xc] = uVar15;
        return 2;
      }
      uVar15 = FUN_36149820(0,(byte *)0x0,0);
      puVar1[5] = uVar15;
      param_1[0xc] = uVar15;
      *puVar1 = 0xb;
      uVar15 = local_38;
      uVar11 = uVar14;
switchD_3614e1d4_caseD_b:
      uVar14 = uVar11;
      if (param_2 != 5) {
switchD_3614e1d4_caseD_c:
        if (puVar1[1] == 0) {
          for (; uVar9 < 3; uVar9 = uVar9 + 8) {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            uVar14 = uVar14 - 1;
            uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
            puVar10 = (uint *)((int)puVar10 + 1);
            local_34 = uVar14;
            local_30 = puVar10;
          }
          puVar1[1] = uVar15 & 1;
          switch(uVar15 >> 1 & 3) {
          case 0:
            uVar15 = uVar15 >> 3;
            *puVar1 = 0xd;
            uVar9 = uVar9 - 3;
            local_38 = uVar15;
            break;
          case 1:
            FUN_3614e010();
            uVar15 = extraout_EDX >> 2;
            *puVar1 = 0x12;
            uVar9 = uVar9 - 3;
            local_38 = uVar15;
            break;
          case 2:
            uVar15 = uVar15 >> 3;
            *puVar1 = 0xf;
            uVar9 = uVar9 - 3;
            local_38 = uVar15;
            break;
          case 3:
            param_1[6] = (int)s_invalid_block_type_362a6884;
            *puVar1 = 0x1b;
          default:
            uVar15 = uVar15 >> 3;
            uVar9 = uVar9 - 3;
            local_38 = uVar15;
          }
        }
        else {
          uVar15 = uVar15 >> (sbyte)(uVar9 & 7);
          uVar9 = uVar9 - (uVar9 & 7);
          *puVar1 = 0x18;
          local_38 = uVar15;
        }
        goto LAB_3614f385;
      }
      goto LAB_3614f3e7;
    case 0xb:
      goto switchD_3614e1d4_caseD_b;
    case 0xc:
      goto switchD_3614e1d4_caseD_c;
    case 0xd:
      uVar15 = uVar15 >> (sbyte)(uVar9 & 7);
      for (uVar9 = uVar9 - (uVar9 & 7); uVar9 < 0x20; uVar9 = uVar9 + 8) {
        uVar11 = 0;
        if (uVar14 == 0) goto LAB_3614f3e7;
        uVar14 = uVar14 - 1;
        uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
        puVar10 = (uint *)((int)puVar10 + 1);
        local_34 = uVar14;
        local_30 = puVar10;
      }
      if ((uVar15 & 0xffff) == ~uVar15 >> 0x10) {
        uVar9 = 0;
        puVar1[0xe] = uVar15 & 0xffff;
        local_38 = 0;
        *puVar1 = 0xe;
        uVar15 = 0;
        uVar11 = uVar14;
        goto switchD_3614e1d4_caseD_e;
      }
      param_1[6] = (int)s_invalid_stored_block_lengths_362a6898;
      uVar6 = uVar15;
      local_38 = uVar15;
      break;
    case 0xe:
switchD_3614e1d4_caseD_e:
      local_2c = puVar1[0xe];
      uVar14 = uVar11;
      if (local_2c == 0) {
LAB_3614ef1c:
        *puVar1 = 0xb;
      }
      else {
        if (uVar11 < local_2c) {
          local_2c = uVar11;
        }
        if (local_28 < local_2c) {
          local_2c = local_28;
        }
        if (local_2c == 0) goto LAB_3614f3e7;
        puVar10 = local_30;
        puVar12 = local_20;
        for (uVar6 = local_2c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar6 = local_2c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(byte *)puVar12 = (byte)*puVar10;
          puVar10 = (uint *)((int)puVar10 + 1);
          puVar12 = (uint *)((int)puVar12 + 1);
        }
        uVar14 = local_34 - local_2c;
        puVar10 = (uint *)((int)local_30 + local_2c);
        local_28 = local_28 - local_2c;
        local_20 = (uint *)((int)local_20 + local_2c);
        puVar1[0xe] = puVar1[0xe] - local_2c;
        local_34 = uVar14;
        local_30 = puVar10;
      }
      goto LAB_3614f385;
    case 0xf:
      for (; uVar9 < 0xe; uVar9 = uVar9 + 8) {
        uVar11 = 0;
        if (uVar14 == 0) goto LAB_3614f3e7;
        uVar14 = uVar14 - 1;
        uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
        puVar10 = (uint *)((int)puVar10 + 1);
        local_30 = puVar10;
        local_34 = uVar14;
      }
      puVar1[0x16] = (uVar15 & 0x1f) + 0x101;
      uVar6 = uVar15 >> 10;
      puVar1[0x17] = (uVar15 >> 5 & 0x1f) + 1;
      uVar15 = uVar15 >> 0xe;
      uVar9 = uVar9 - 0xe;
      puVar1[0x15] = (uVar6 & 0xf) + 4;
      local_38 = uVar15;
      if ((puVar1[0x16] < 0x11f) && (puVar1[0x17] < 0x1f)) {
        puVar1[0x18] = 0;
        *puVar1 = 0x10;
        goto switchD_3614e1d4_caseD_10;
      }
      param_1[6] = (int)s_too_many_length_or_distance_symb_362a68b8;
      uVar6 = uVar15;
      break;
    case 0x10:
switchD_3614e1d4_caseD_10:
      if (puVar1[0x18] < puVar1[0x15]) {
        do {
          for (; uVar9 < 3; uVar9 = uVar9 + 8) {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            uVar6 = *puVar10;
            bVar8 = (byte)uVar9;
            uVar14 = uVar14 - 1;
            puVar10 = (uint *)((int)puVar10 + 1);
            uVar15 = uVar15 + ((uint)(byte)uVar6 << (bVar8 & 0x1f));
            local_34 = uVar14;
            local_30 = puVar10;
          }
          local_38 = uVar15 >> 3;
          uVar9 = uVar9 - 3;
          *(ushort *)((int)puVar1 + (uint)*(ushort *)(&DAT_3623bdd8 + puVar1[0x18] * 2) * 2 + 0x68)
               = (ushort)uVar15 & 7;
          uVar6 = puVar1[0x18];
          puVar1[0x18] = uVar6 + 1;
          uVar15 = local_38;
        } while (uVar6 + 1 < puVar1[0x15]);
      }
      uVar15 = puVar1[0x18];
      while (uVar15 < 0x13) {
        *(undefined2 *)
         ((int)puVar1 + (uint)*(ushort *)(&DAT_3623bdd8 + puVar1[0x18] * 2) * 2 + 0x68) = 0;
        uVar15 = puVar1[0x18] + 1;
        puVar1[0x18] = uVar15;
      }
      puVar1[0x19] = (uint)(puVar1 + 0x14a);
      puVar1[0x11] = (uint)(puVar1 + 0x14a);
      puVar1[0x13] = 7;
      local_14 = FUN_3614f980(0,(int)(puVar1 + 0x1a),0x13,(int *)(puVar1 + 0x19),puVar1 + 0x13,
                              (ushort *)(puVar1 + 0xba));
      if (local_14 == 0) {
        puVar1[0x18] = 0;
        *puVar1 = 0x11;
        uVar15 = local_38;
        goto switchD_3614e1d4_caseD_11;
      }
      param_1[6] = (int)s_invalid_code_lengths_set_362a68dc;
      uVar6 = local_38;
      break;
    case 0x11:
switchD_3614e1d4_caseD_11:
      if (puVar1[0x18] < puVar1[0x17] + puVar1[0x16]) {
        do {
          local_8 = *(byte **)(puVar1[0x11] + ((1 << ((byte)puVar1[0x13] & 0x1f)) - 1U & uVar15) * 4
                              );
          if (uVar9 < ((uint)local_8 >> 8 & 0xff)) {
            do {
              uVar11 = 0;
              if (uVar14 == 0) goto LAB_3614f3e7;
              bVar8 = (byte)uVar9;
              uVar14 = uVar14 - 1;
              uVar9 = uVar9 + 8;
              uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar8 & 0x1f));
              puVar10 = (uint *)((int)puVar10 + 1);
              local_8 = *(byte **)(puVar1[0x11] +
                                  ((1 << ((byte)puVar1[0x13] & 0x1f)) - 1U & uVar15) * 4);
              local_34 = uVar14;
              local_30 = puVar10;
            } while (uVar9 < ((uint)local_8 >> 8 & 0xff));
          }
          uVar3 = (ushort)((uint)local_8 >> 0x10);
          bVar8 = (byte)((uint)local_8 >> 8);
          if (0xf < uVar3) {
            if (uVar3 == 0x10) {
              uVar6 = (uint)local_8 >> 8 & 0xff;
              if (uVar9 < uVar6 + 2) {
                do {
                  uVar11 = 0;
                  if (uVar14 == 0) goto LAB_3614f3e7;
                  bVar7 = (byte)uVar9;
                  uVar14 = uVar14 - 1;
                  uVar9 = uVar9 + 8;
                  uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar7 & 0x1f));
                  puVar10 = (uint *)((int)puVar10 + 1);
                  local_34 = uVar14;
                  local_30 = puVar10;
                } while (uVar9 < uVar6 + 2);
              }
              local_38 = uVar15 >> (bVar8 & 0x1f);
              uVar9 = uVar9 - uVar6;
              if (puVar1[0x18] != 0) {
                local_18 = (byte *)(uint)*(ushort *)((int)puVar1 + puVar1[0x18] * 2 + 0x66);
                iVar5 = (local_38 & 3) + 3;
                uVar15 = local_38 >> 2;
                uVar9 = uVar9 - 2;
                goto LAB_3614ec63;
              }
              param_1[6] = (int)s_invalid_bit_length_repeat_362a68f8;
            }
            else {
              uVar6 = (uint)local_8 >> 8 & 0xff;
              if (uVar3 == 0x11) {
                if (uVar9 < uVar6 + 3) {
                  do {
                    uVar11 = 0;
                    if (uVar14 == 0) goto LAB_3614f3e7;
                    bVar7 = (byte)uVar9;
                    uVar14 = uVar14 - 1;
                    uVar9 = uVar9 + 8;
                    uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar7 & 0x1f));
                    puVar10 = (uint *)((int)puVar10 + 1);
                    local_34 = uVar14;
                    local_30 = puVar10;
                  } while (uVar9 < uVar6 + 3);
                }
                uVar15 = uVar15 >> (bVar8 & 0x1f);
                iVar13 = -3;
                iVar5 = (uVar15 & 7) + 3;
                uVar15 = uVar15 >> 3;
              }
              else {
                if (uVar9 < uVar6 + 7) {
                  do {
                    uVar11 = 0;
                    if (uVar14 == 0) goto LAB_3614f3e7;
                    bVar7 = (byte)uVar9;
                    uVar14 = uVar14 - 1;
                    uVar9 = uVar9 + 8;
                    uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar7 & 0x1f));
                    puVar10 = (uint *)((int)puVar10 + 1);
                    local_34 = uVar14;
                    local_30 = puVar10;
                  } while (uVar9 < uVar6 + 7);
                }
                uVar15 = uVar15 >> (bVar8 & 0x1f);
                iVar13 = -7;
                iVar5 = (uVar15 & 0x7f) + 0xb;
                uVar15 = uVar15 >> 7;
              }
              local_18 = (byte *)0x0;
              uVar9 = uVar9 + (iVar13 - uVar6);
LAB_3614ec63:
              uVar14 = local_34;
              if (puVar1[0x18] + iVar5 <= puVar1[0x17] + puVar1[0x16]) {
                for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(short *)((int)puVar1 + puVar1[0x18] * 2 + 0x68) = (short)local_18;
                  puVar1[0x18] = puVar1[0x18] + 1;
                }
                goto LAB_3614ec96;
              }
              param_1[6] = (int)s_invalid_bit_length_repeat_362a6914;
              local_38 = uVar15;
            }
            *puVar1 = 0x1b;
            break;
          }
          uVar6 = (uint)local_8 >> 8 & 0xff;
          for (; uVar9 < uVar6; uVar9 = uVar9 + 8) {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            uVar14 = uVar14 - 1;
            uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
            puVar10 = (uint *)((int)puVar10 + 1);
            local_34 = uVar14;
            local_30 = puVar10;
          }
          uVar15 = uVar15 >> (bVar8 & 0x1f);
          uVar9 = uVar9 - uVar6;
          *(ushort *)((int)puVar1 + puVar1[0x18] * 2 + 0x68) = uVar3;
          puVar1[0x18] = puVar1[0x18] + 1;
LAB_3614ec96:
          local_38 = uVar15;
        } while (puVar1[0x18] < puVar1[0x17] + puVar1[0x16]);
      }
      puVar1[0x19] = (uint)(puVar1 + 0x14a);
      puVar1[0x11] = (uint)(puVar1 + 0x14a);
      puVar1[0x13] = 9;
      local_14 = FUN_3614f980(1,(int)(puVar1 + 0x1a),puVar1[0x16],(int *)(puVar1 + 0x19),
                              puVar1 + 0x13,(ushort *)(puVar1 + 0xba));
      uVar6 = local_38;
      if (local_14 == 0) {
        puVar1[0x12] = puVar1[0x19];
        puVar1[0x14] = 6;
        local_14 = FUN_3614f980(2,(int)puVar1 + puVar1[0x16] * 2 + 0x68,puVar1[0x17],
                                (int *)(puVar1 + 0x19),puVar1 + 0x14,(ushort *)(puVar1 + 0xba));
        if (local_14 == 0) {
          *puVar1 = 0x12;
          uVar15 = local_38;
          goto switchD_3614e1d4_caseD_12;
        }
        param_1[6] = (int)s_invalid_distances_set_362a694c;
      }
      else {
        param_1[6] = (int)s_invalid_literal_lengths_set_362a6930;
      }
      break;
    case 0x12:
switchD_3614e1d4_caseD_12:
      if ((uVar14 < 6) || (local_28 < 0x102)) {
        pbVar4 = *(byte **)(puVar1[0x11] + ((1 << ((byte)puVar1[0x13] & 0x1f)) - 1U & uVar15) * 4);
        local_8 = pbVar4;
        if (uVar9 < ((uint)pbVar4 >> 8 & 0xff)) {
          do {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            bVar8 = (byte)uVar9;
            uVar14 = uVar14 - 1;
            uVar9 = uVar9 + 8;
            uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar8 & 0x1f));
            puVar10 = (uint *)((int)puVar10 + 1);
            pbVar4 = *(byte **)(puVar1[0x11] +
                               ((1 << ((byte)puVar1[0x13] & 0x1f)) - 1U & uVar15) * 4);
            local_34 = uVar14;
            local_30 = puVar10;
            local_8 = pbVar4;
          } while (uVar9 < ((uint)pbVar4 >> 8 & 0xff));
        }
        cVar2 = (char)pbVar4;
        local_8 = pbVar4;
        if ((cVar2 != '\0') && (((uint)pbVar4 & 0xf0) == 0)) {
          bVar8 = (byte)((uint)pbVar4 >> 8);
          local_8 = *(byte **)(puVar1[0x11] +
                              ((((1 << (cVar2 + bVar8 & 0x1f)) - 1U & uVar15) >> (bVar8 & 0x1f)) +
                              ((uint)pbVar4 >> 0x10)) * 4);
          uVar6 = (uint)pbVar4 >> 8 & 0xff;
          local_18 = pbVar4;
          if (uVar9 < ((uint)local_8 >> 8 & 0xff) + uVar6) {
            do {
              uVar11 = 0;
              if (uVar14 == 0) goto LAB_3614f3e7;
              uVar14 = uVar14 - 1;
              uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
              puVar10 = (uint *)((int)puVar10 + 1);
              uVar9 = uVar9 + 8;
              local_8 = *(byte **)(puVar1[0x11] +
                                  ((((1 << (cVar2 + bVar8 & 0x1f)) - 1U & uVar15) >> (bVar8 & 0x1f))
                                  + ((uint)pbVar4 >> 0x10)) * 4);
              local_34 = uVar14;
              local_30 = puVar10;
            } while (uVar9 < ((uint)local_8 >> 8 & 0xff) + uVar6);
          }
          uVar15 = uVar15 >> (bVar8 & 0x1f);
          uVar9 = uVar9 - uVar6;
        }
        uVar15 = uVar15 >> ((byte)((uint)local_8 >> 8) & 0x1f);
        uVar9 = uVar9 - ((uint)local_8 >> 8 & 0xff);
        puVar1[0xe] = (uint)local_8 >> 0x10;
        local_38 = uVar15;
        if ((char)local_8 == '\0') {
          *puVar1 = 0x17;
          goto LAB_3614f385;
        }
        if (((uint)local_8 & 0x20) == 0) {
          if (((uint)local_8 & 0x40) == 0) {
            puVar1[0x10] = (uint)local_8 & 0xf;
            *puVar1 = 0x13;
            goto switchD_3614e1d4_caseD_13;
          }
          param_1[6] = (int)s_invalid_literal_length_code_362a6964;
          uVar6 = uVar15;
          break;
        }
        goto LAB_3614ef1c;
      }
      param_1[3] = (int)local_20;
      param_1[4] = local_28;
      *param_1 = (int)puVar10;
      param_1[1] = uVar14;
      puVar1[0xc] = uVar15;
      puVar1[0xd] = uVar9;
      FUN_3614da60(param_1,local_1c);
      local_28 = param_1[4];
      local_20 = (uint *)param_1[3];
      puVar10 = (uint *)*param_1;
      uVar14 = param_1[1];
      uVar9 = puVar1[0xd];
      uVar15 = puVar1[0xc];
      local_38 = puVar1[0xc];
      local_34 = uVar14;
      local_30 = puVar10;
      goto LAB_3614f385;
    case 0x13:
switchD_3614e1d4_caseD_13:
      if (puVar1[0x10] != 0) {
        if (uVar9 < puVar1[0x10]) {
          do {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            bVar8 = (byte)uVar9;
            uVar14 = uVar14 - 1;
            uVar9 = uVar9 + 8;
            uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar8 & 0x1f));
            puVar10 = (uint *)((int)puVar10 + 1);
            local_34 = uVar14;
            local_30 = puVar10;
          } while (uVar9 < puVar1[0x10]);
        }
        puVar1[0xe] = puVar1[0xe] + ((1 << ((byte)puVar1[0x10] & 0x1f)) - 1U & uVar15);
        uVar15 = uVar15 >> ((byte)puVar1[0x10] & 0x1f);
        uVar9 = uVar9 - puVar1[0x10];
      }
      *puVar1 = 0x14;
    case 0x14:
      pbVar4 = *(byte **)(puVar1[0x12] + ((1 << ((byte)puVar1[0x14] & 0x1f)) - 1U & uVar15) * 4);
      local_8 = pbVar4;
      if (uVar9 < ((uint)pbVar4 >> 8 & 0xff)) {
        do {
          uVar11 = 0;
          if (uVar14 == 0) goto LAB_3614f3e7;
          bVar8 = (byte)uVar9;
          uVar14 = uVar14 - 1;
          uVar9 = uVar9 + 8;
          uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar8 & 0x1f));
          puVar10 = (uint *)((int)puVar10 + 1);
          pbVar4 = *(byte **)(puVar1[0x12] + ((1 << ((byte)puVar1[0x14] & 0x1f)) - 1U & uVar15) * 4)
          ;
          local_34 = uVar14;
          local_30 = puVar10;
          local_8 = pbVar4;
        } while (uVar9 < ((uint)pbVar4 >> 8 & 0xff));
      }
      local_8 = pbVar4;
      if (((uint)pbVar4 & 0xf0) == 0) {
        bVar8 = (byte)((uint)pbVar4 >> 8);
        local_8 = *(byte **)(puVar1[0x12] +
                            ((((1 << ((char)pbVar4 + bVar8 & 0x1f)) - 1U & uVar15) >> (bVar8 & 0x1f)
                             ) + ((uint)pbVar4 >> 0x10)) * 4);
        uVar6 = (uint)pbVar4 >> 8 & 0xff;
        local_18 = pbVar4;
        if (uVar9 < ((uint)local_8 >> 8 & 0xff) + uVar6) {
          do {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            uVar14 = uVar14 - 1;
            uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
            puVar10 = (uint *)((int)puVar10 + 1);
            uVar9 = uVar9 + 8;
            local_8 = *(byte **)(puVar1[0x12] +
                                ((((1 << ((char)pbVar4 + bVar8 & 0x1f)) - 1U & uVar15) >>
                                 (bVar8 & 0x1f)) + ((uint)pbVar4 >> 0x10)) * 4);
            local_34 = uVar14;
            local_30 = puVar10;
          } while (uVar9 < ((uint)local_8 >> 8 & 0xff) + uVar6);
        }
        uVar15 = uVar15 >> (bVar8 & 0x1f);
        uVar9 = uVar9 - uVar6;
      }
      uVar15 = uVar15 >> ((byte)((uint)local_8 >> 8) & 0x1f);
      uVar9 = uVar9 - ((uint)local_8 >> 8 & 0xff);
      local_38 = uVar15;
      if (((uint)local_8 & 0x40) != 0) {
        param_1[6] = (int)s_invalid_distance_code_362a6980;
        uVar6 = uVar15;
        break;
      }
      puVar1[0xf] = (uint)local_8 >> 0x10;
      puVar1[0x10] = (uint)local_8 & 0xf;
      *puVar1 = 0x15;
switchD_3614e1d4_caseD_15:
      if (puVar1[0x10] != 0) {
        if (uVar9 < puVar1[0x10]) {
          do {
            uVar11 = 0;
            if (uVar14 == 0) goto LAB_3614f3e7;
            bVar8 = (byte)uVar9;
            uVar14 = uVar14 - 1;
            uVar9 = uVar9 + 8;
            uVar15 = uVar15 + ((uint)(byte)*puVar10 << (bVar8 & 0x1f));
            puVar10 = (uint *)((int)puVar10 + 1);
            local_34 = uVar14;
            local_30 = puVar10;
          } while (uVar9 < puVar1[0x10]);
        }
        puVar1[0xf] = puVar1[0xf] + ((1 << ((byte)puVar1[0x10] & 0x1f)) - 1U & uVar15);
        uVar15 = uVar15 >> ((byte)puVar1[0x10] & 0x1f);
        uVar9 = uVar9 - puVar1[0x10];
        local_38 = uVar15;
      }
      if ((puVar1[9] - local_28) + local_1c < puVar1[0xf]) {
        param_1[6] = (int)s_invalid_distance_too_far_back_362a6998;
        uVar6 = uVar15;
        break;
      }
      *puVar1 = 0x16;
switchD_3614e1d4_caseD_16:
      uVar11 = uVar14;
      if (local_28 != 0) {
        local_2c = puVar1[0xf];
        if (local_1c - local_28 < local_2c) {
          local_2c = local_2c - (local_1c - local_28);
          if (puVar1[10] < local_2c) {
            local_2c = local_2c - puVar1[10];
            local_18 = (byte *)((puVar1[0xb] + puVar1[8]) - local_2c);
          }
          else {
            local_18 = (byte *)((puVar1[0xb] - local_2c) + puVar1[10]);
          }
          local_10 = puVar1[0xe];
          if (local_10 < local_2c) goto LAB_3614f1c9;
        }
        else {
          local_18 = (byte *)((int)local_20 - local_2c);
          local_10 = puVar1[0xe];
LAB_3614f1c9:
          local_2c = local_10;
        }
        if (local_28 < local_2c) {
          local_2c = local_28;
        }
        local_28 = local_28 - local_2c;
        puVar1[0xe] = local_10 - local_2c;
        do {
          *(byte *)local_20 = *local_18;
          local_20 = (uint *)((int)local_20 + 1);
          local_18 = local_18 + 1;
          local_2c = local_2c - 1;
        } while (local_2c != 0);
        if (puVar1[0xe] == 0) {
          *puVar1 = 0x12;
        }
        goto LAB_3614f385;
      }
      goto LAB_3614f3e7;
    case 0x15:
      goto switchD_3614e1d4_caseD_15;
    case 0x16:
      goto switchD_3614e1d4_caseD_16;
    case 0x17:
      if (local_28 == 0) goto LAB_3614f3e7;
      *(byte *)local_20 = (byte)puVar1[0xe];
      local_20 = (uint *)((int)local_20 + 1);
      local_28 = local_28 - 1;
      *puVar1 = 0x12;
      goto LAB_3614f385;
    case 0x18:
      if (puVar1[2] != 0) {
        for (; uVar9 < 0x20; uVar9 = uVar9 + 8) {
          uVar11 = 0;
          if (uVar14 == 0) goto LAB_3614f3e7;
          uVar14 = uVar14 - 1;
          uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)((int)puVar10 + 1);
          local_38 = uVar15;
          local_30 = puVar10;
          local_34 = uVar14;
        }
        local_1c = local_1c - local_28;
        param_1[5] = param_1[5] + local_1c;
        puVar1[6] = puVar1[6] + local_1c;
        if (local_1c != 0) {
          if (puVar1[4] == 0) {
            uVar15 = FUN_36149820(puVar1[5],(byte *)((int)local_20 - local_1c),local_1c);
          }
          else {
            uVar15 = FUN_3614a050(puVar1[5],(uint *)((int)local_20 - local_1c),local_1c);
          }
          puVar1[5] = uVar15;
          param_1[0xc] = uVar15;
          uVar15 = local_38;
        }
        uVar6 = uVar15;
        if (puVar1[4] == 0) {
          uVar6 = ((uVar15 & 0xff00) + uVar15 * 0x10000) * 0x100 + (local_38 >> 0x10 & 0xff) * 0x100
                  + (uVar15 >> 0x18);
        }
        local_1c = local_28;
        if (uVar6 != puVar1[5]) {
          param_1[6] = (int)s_incorrect_data_check_362a69b8;
          uVar6 = uVar15;
          break;
        }
        uVar9 = 0;
        local_38 = 0;
        uVar15 = 0;
      }
      *puVar1 = 0x19;
    case 0x19:
      if ((puVar1[2] != 0) && (puVar1[4] != 0)) {
        for (; uVar9 < 0x20; uVar9 = uVar9 + 8) {
          uVar11 = 0;
          if (uVar14 == 0) goto LAB_3614f3e7;
          uVar14 = uVar14 - 1;
          uVar15 = uVar15 + ((uint)(byte)*puVar10 << ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)((int)puVar10 + 1);
          local_38 = uVar15;
          local_34 = uVar14;
          local_30 = puVar10;
        }
        if (uVar15 != puVar1[6]) {
          param_1[6] = (int)s_incorrect_length_check_362a69d0;
          uVar6 = uVar15;
          break;
        }
        uVar9 = 0;
        uVar15 = 0;
      }
      *puVar1 = 0x1a;
switchD_3614e1d4_caseD_1a:
      local_14 = 1;
      uVar11 = uVar14;
      goto LAB_3614f3e7;
    case 0x1a:
      goto switchD_3614e1d4_caseD_1a;
    case 0x1b:
      local_14 = -3;
      goto LAB_3614f3e7;
    case 0x1c:
      goto switchD_3614e1d4_caseD_1c;
    default:
      return -2;
    }
    *puVar1 = 0x1b;
    uVar15 = uVar6;
LAB_3614f385:
    uVar6 = *puVar1;
  } while( true );
}

