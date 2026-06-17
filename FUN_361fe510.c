
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_361fe510(int param_1,uint param_2,undefined *param_3)

{
  int *piVar1;
  double dVar2;
  byte bVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined3 uVar10;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined3 uVar11;
  undefined4 extraout_EDX;
  uint *puVar12;
  uint *extraout_EDX_00;
  uint *extraout_EDX_01;
  uint *extraout_EDX_02;
  uint *extraout_EDX_03;
  uint *extraout_EDX_04;
  uint *extraout_EDX_05;
  uint *extraout_EDX_06;
  uint *extraout_EDX_07;
  int iVar13;
  uint *puVar14;
  uint *extraout_EDX_08;
  uint *extraout_EDX_09;
  uint *extraout_EDX_10;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  float *pfVar23;
  char local_949;
  size_t local_948;
  float fStack_944;
  byte *local_940;
  char local_939;
  uint *local_938;
  uint *local_934;
  float local_930;
  int local_92c;
  int local_928;
  uint *local_924;
  int iStack_920;
  int local_91c;
  undefined4 *puStack_918;
  uint local_914;
  int local_910;
  uint local_90c;
  byte *pbStack_908;
  int iStack_904;
  undefined4 uStack_900;
  int iStack_8fc;
  double local_8f8;
  undefined4 local_8f0;
  int local_8ec;
  undefined8 local_8e8;
  void *local_8e0;
  undefined4 local_8dc;
  undefined4 local_8d8;
  int local_8d4;
  float local_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  int local_8b4;
  int local_8b0;
  char local_8ac;
  void *local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  double dStack_894;
  double dStack_88c;
  uint uStack_884;
  undefined4 uStack_880;
  uint uStack_87c;
  undefined4 uStack_878;
  uint uStack_874;
  undefined4 uStack_870;
  uint uStack_86c;
  undefined4 uStack_868;
  uint uStack_864;
  undefined4 uStack_860;
  uint uStack_85c;
  undefined4 uStack_858;
  undefined4 local_854 [15];
  int iStack_818;
  undefined1 local_80c [1024];
  undefined1 local_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621cf71;
  pvStack_c = ExceptionList;
  local_928 = (int)*(short *)(*(int *)(param_1 + 4) + 0x30);
  local_92c = (int)*(short *)(*(int *)(param_1 + 4) + 0x2e);
  DAT_36383d74 = '\0';
  if (*(short *)(param_1 + 0x237e) == 0x20) {
    local_928 = local_928 / 2;
  }
  else if (*(short *)(param_1 + 0x237e) == 0x21) {
    DAT_36383d74 = '\x01';
  }
  if ((*(short *)(param_1 + 0x237e) == 0x1f) && (*(short *)(param_1 + 0x2380) == 0)) {
    DAT_36383d74 = '\x01';
  }
  local_910 = 1;
  if (*(short *)(param_1 + 0x23a8) == 0x51) {
    local_910 = 6;
    local_928 = local_928 / 6;
  }
  iVar9 = local_928;
  if (*(char *)(param_1 + 0x23a6) == '\0') {
    ExceptionList = &pvStack_c;
    FUN_361fdbd0();
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_361fdbb0();
  }
  if (9 < param_2) {
    local_914 = CONCAT31(local_914._1_3_,1);
    if (param_2 < 0xe) goto LAB_361fe5ef;
  }
  local_914 = local_914 & 0xffffff00;
LAB_361fe5ef:
  piVar5 = (int *)FUN_36203880();
  uVar15 = 0;
  local_934 = (uint *)0x0;
  switch(param_2) {
  case 10:
    uVar15 = 0;
    local_949 = '\x01';
    DAT_36383cd1 = '\0';
    local_934 = (uint *)0x0;
    break;
  case 0xb:
    local_949 = '\x01';
    DAT_36383cd1 = '\0';
    uVar15 = 0;
    local_934 = (uint *)0x2;
    break;
  case 0xc:
    local_949 = '\x01';
    DAT_36383cd1 = '\x01';
    uVar15 = 0x100;
    local_934 = (uint *)0x0;
    break;
  case 0xd:
    local_949 = '\x01';
    DAT_36383cd1 = '\x01';
    local_934 = (uint *)0x0;
    uVar15 = 0x200;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
    local_949 = '\0';
    local_948 = piVar5[1] * *piVar5 * 2;
    break;
  case 0x11:
  case 0x15:
  case 0x16:
    local_949 = '\0';
    local_948 = piVar5[1] * *piVar5 * 4;
    break;
  case 0x12:
    local_949 = '\0';
    local_948 = piVar5[1] * *piVar5 * 3;
    break;
  case 0x14:
    local_949 = '\0';
    local_948 = piVar5[1] * *piVar5;
  }
  if (param_3 == (undefined *)0x0) {
    if (local_949 == '\0') {
      FUN_362003c0(param_1,iVar9,local_92c,0,local_948,param_2);
    }
    else {
      local_948 = FUN_36200630(iVar9,local_92c,(uint)local_934 | uVar15);
      FUN_36200210(param_1,iVar9,local_92c,0,DAT_36383cd1,uVar15,local_934,local_948);
    }
  }
  uVar11 = (undefined3)(param_2 >> 8);
  if (DAT_36383d74 == '\0') {
    local_8c8 = local_928;
    local_8cc = local_92c;
    local_8ac = local_939;
    local_8a8 = (void *)0x0;
    local_8a0 = 0;
    local_8c0 = 0;
    local_8bc = 0;
    local_8b8 = 0;
    local_8b4 = 0;
    local_4 = 1;
    local_8a4 = 0;
    local_8b0 = 0;
    local_91c = 0;
    if (0 < local_910) {
      local_8d4 = local_928 * 4;
      do {
        iVar8 = local_8c8;
        iVar9 = local_8cc;
        local_92c = local_8cc;
        local_928 = local_8c8;
        FUN_362038b0(piVar5);
        piVar5 = (int *)FUN_36203880();
        if (*(short *)(param_1 + 0x237e) == 0x20) {
          local_90c = *(short *)(*(int *)(param_1 + 4) + 0x34) * local_91c * iVar8 * 2;
        }
        else {
          local_90c = *(short *)(*(int *)(param_1 + 4) + 0x34) * local_91c * iVar8;
        }
        FUN_362038e0(piVar5,param_1,iVar8,iVar9,local_90c,param_2,(char)local_914);
        DAT_36383cd0 = 1;
        FUN_362032d0(local_854,(undefined1 *)piVar5[2],iVar8,iVar9,local_8d4,4);
        local_4 = CONCAT31(local_4._1_3_,2);
        switch(*(undefined2 *)(param_1 + 0x2382)) {
        case 0x86:
          FUN_36203590(local_854,0,&LAB_362037a0);
          puVar14 = extraout_EDX_00;
          break;
        case 0x87:
          FUN_36202e30(local_854,0,&LAB_362037a0);
          puVar14 = extraout_EDX_01;
          break;
        case 0x88:
          FUN_36202f90(local_854,0,'\0',&LAB_362037a0);
          puVar14 = extraout_EDX_02;
          break;
        case 0x89:
          FUN_36202f90(local_854,0,'\x01',&LAB_362037a0);
          puVar14 = extraout_EDX_03;
          break;
        default:
          FUN_36202d20(local_854,0,&LAB_362037a0);
          puVar14 = extraout_EDX_04;
        }
        DAT_36383cd0 = 0;
        local_939 = '\0';
        local_934 = (uint *)0x0;
        local_930 = _DAT_3624cddc - (float)*(int *)(param_1 + 0x23a0) * _DAT_3624cf30;
        local_8d0 = local_930;
        do {
          if (*(char *)(param_1 + 0x23a5) != '\0') {
            puVar16 = (uint *)piVar5[2];
            uVar15 = 0;
            if (0 < piVar5[1]) {
              do {
                uVar17 = 0;
                if (0 < *piVar5) {
                  do {
                    uVar6 = FUN_361fe400(param_1,param_2,(undefined3 *)puVar16,uVar17,uVar15);
                    *puVar16 = uVar6;
                    puVar16 = puVar16 + 1;
                    uVar17 = uVar17 + 1;
                    puVar14 = extraout_EDX_05;
                  } while ((int)uVar17 < *piVar5);
                }
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < piVar5[1]);
            }
          }
          puVar16 = (uint *)0x0;
          uVar10 = (undefined3)(param_2 - 10 >> 8);
          switch(param_2 - 10) {
          case 0:
            puVar16 = FUN_361ffe50(piVar5,&local_948,
                                   CONCAT31(uVar10,*(undefined1 *)(param_1 + 0x23a6)),
                                   *(undefined1 *)(param_1 + 0x23a7));
            break;
          case 1:
            puVar16 = FUN_361fff40(piVar5,&local_948,
                                   CONCAT31((int3)((uint)puVar14 >> 8),
                                            *(undefined1 *)(param_1 + 0x23a6)));
            break;
          case 2:
            puVar16 = FUN_36200030(piVar5,&local_948,
                                   CONCAT31(uVar11,*(undefined1 *)(param_1 + 0x23a6)));
            break;
          case 3:
            puVar16 = FUN_36200120(piVar5,&local_948,
                                   CONCAT31(uVar10,*(undefined1 *)(param_1 + 0x23a6)));
            break;
          case 4:
            local_948 = piVar5[1] * *piVar5 * 2;
            puVar16 = malloc(piVar5[1] * *piVar5 * 2);
            puVar14 = (uint *)piVar5[2];
            local_940 = (byte *)0x0;
            puVar12 = puVar16;
            if (0 < piVar5[1] * *piVar5) {
              do {
                uVar15 = *puVar14;
                puVar14 = puVar14 + 1;
                *(ushort *)puVar12 =
                     (ushort)(uVar15 >> 0xc) & 0xf00 | (ushort)(uVar15 >> 8) & 0xf0 |
                     (ushort)(uVar15 >> 4) & 0xf | (ushort)(uVar15 >> 0x10) & 0xf000;
                local_940 = local_940 + 1;
                puVar12 = (uint *)((int)puVar12 + 2);
              } while ((int)local_940 < piVar5[1] * *piVar5);
            }
            break;
          case 5:
            local_948 = piVar5[1] * *piVar5 * 2;
            puVar16 = malloc(piVar5[1] * *piVar5 * 2);
            puVar14 = (uint *)piVar5[2];
            iVar9 = 0;
            puVar12 = puVar16;
            local_938 = puVar16;
            if (0 < piVar5[1] * *piVar5) {
              do {
                uVar15 = *puVar14;
                puVar14 = puVar14 + 1;
                iVar9 = iVar9 + 1;
                *(ushort *)puVar12 =
                     (ushort)(uVar15 >> 6) & 0x3e0 | (ushort)(uVar15 >> 3) & 0x1f |
                     (ushort)(uVar15 >> 0x10) & 0x8000 | (ushort)(uVar15 >> 9) & 0x7c00;
                puVar12 = (uint *)((int)puVar12 + 2);
              } while (iVar9 < piVar5[1] * *piVar5);
            }
            break;
          case 6:
            local_948 = piVar5[1] * *piVar5 * 2;
            puVar16 = malloc(piVar5[1] * *piVar5 * 2);
            puVar14 = (uint *)piVar5[2];
            local_940 = (byte *)0x0;
            puVar12 = puVar16;
            if (0 < piVar5[1] * *piVar5) {
              do {
                uVar15 = *puVar14;
                puVar14 = puVar14 + 1;
                *(ushort *)puVar12 =
                     (ushort)(uVar15 >> 5) & 0x7e0 | (ushort)(uVar15 >> 3) & 0x1f |
                     (ushort)(uVar15 >> 8) & 0xf800;
                puVar12 = (uint *)((int)puVar12 + 2);
                local_940 = local_940 + 1;
              } while ((int)local_940 < piVar5[1] * *piVar5);
            }
            break;
          case 7:
            local_948 = piVar5[1] * *piVar5 * 4;
            puVar16 = malloc(piVar5[1] * *piVar5 * 4);
            puVar14 = (uint *)piVar5[2];
            puVar12 = puVar16;
            for (uVar15 = piVar5[1] * *piVar5 & 0x3fffffff; uVar15 != 0; uVar15 = uVar15 - 1) {
              *puVar12 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar12 = puVar12 + 1;
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(char *)puVar12 = (char)*puVar14;
              puVar14 = (uint *)((int)puVar14 + 1);
              puVar12 = (uint *)((int)puVar12 + 1);
            }
            break;
          case 8:
            local_948 = piVar5[1] * *piVar5 * 3;
            puVar16 = malloc(piVar5[1] * *piVar5 * 3);
            iVar9 = 0;
            puVar14 = puVar16;
            puVar20 = (undefined1 *)piVar5[2];
            if (0 < piVar5[1] * *piVar5) {
              do {
                *(undefined1 *)puVar14 = *puVar20;
                *(undefined1 *)((int)puVar14 + 1) = puVar20[1];
                *(undefined1 *)((int)puVar14 + 2) = puVar20[2];
                puVar14 = (uint *)((int)puVar14 + 3);
                iVar9 = iVar9 + 1;
                puVar20 = puVar20 + 4;
              } while (iVar9 < piVar5[1] * *piVar5);
            }
            break;
          case 9:
            local_948 = piVar5[1] * *piVar5 * 2;
            puVar16 = malloc(piVar5[1] * *piVar5 * 2);
            puVar14 = (uint *)piVar5[2];
            local_940 = (byte *)0x0;
            puVar12 = puVar16;
            if (0 < piVar5[1] * *piVar5) {
              do {
                uVar15 = *puVar14;
                puVar14 = puVar14 + 1;
                *(ushort *)puVar12 =
                     (ushort)(uVar15 >> 6) & 0x3e0 | (ushort)(uVar15 >> 3) & 0x1f |
                     (ushort)(uVar15 >> 9) & 0x7c00;
                puVar12 = (uint *)((int)puVar12 + 2);
                local_940 = local_940 + 1;
              } while ((int)local_940 < piVar5[1] * *piVar5);
            }
            break;
          case 10:
            local_8c4 = CONCAT31(local_8c4._1_3_,*(short *)(*(int *)(param_1 + 4) + 0x34) == 3);
            puVar16 = FUN_36203d00((undefined4 *)piVar5[2],*piVar5,piVar5[1],4,&local_8c0,8,'\x04',
                                   *(char *)(param_1 + 0x23a4),local_8c4);
            local_948 = piVar5[1] * *piVar5;
            if (local_934 != (uint *)0x0) break;
            if (local_8b4 == 3) {
              if (0 < local_8b0) {
                puVar20 = local_40c + 1;
                puVar7 = (undefined1 *)((int)local_8a8 + 4);
                iVar9 = local_8b0;
                do {
                  puVar20[1] = puVar7[4];
                  *puVar20 = *puVar7;
                  puVar20[-1] = puVar7[-4];
                  puVar20[2] = 0xff;
                  puVar20 = puVar20 + 4;
                  iVar9 = iVar9 + -1;
                  puVar7 = puVar7 + 0xc;
                } while (iVar9 != 0);
              }
            }
            else if (0 < local_8b0) {
              puVar20 = local_40c + 1;
              puVar7 = (undefined1 *)((int)local_8a8 + 8);
              iVar9 = local_8b0;
              do {
                puVar20[1] = puVar7[-8];
                *puVar20 = puVar7[-4];
                puVar20[-1] = *puVar7;
                puVar20[2] = puVar7[4];
                puVar20 = puVar20 + 4;
                iVar9 = iVar9 + -1;
                puVar7 = puVar7 + 0x10;
              } while (iVar9 != 0);
            }
            if (param_3 != (undefined *)0x0) {
              (*(code *)param_3)(local_40c,0,0x400);
              break;
            }
            FUN_361fe3e0();
            goto LAB_361ff3a1;
          }
          if (param_3 == (undefined *)0x0) {
LAB_361ff3a1:
            if (local_949 == '\0') {
              FUN_361fe3e0();
            }
            else {
              FUN_362003a0();
            }
          }
          else {
            (*(code *)param_3)(puVar16,local_934,local_948);
          }
          free(puVar16);
          iVar9 = local_928;
          local_934 = (uint *)((int)local_934 + 1);
          puVar14 = extraout_EDX_06;
          if (*(char *)(param_1 + 0x232d) == '\x01') {
            local_930 = *(float *)(param_1 + 0x2330 + (int)local_934 * 4);
            puVar14 = local_934;
          }
          local_924 = (uint *)(_DAT_3624cddc - local_930);
          if ((local_928 < 2) && (local_92c < 2)) {
            local_939 = '\x01';
          }
          else {
            if (*(short *)(param_1 + 0x237e) == 0x20) {
              FUN_362038b0(piVar5);
              iVar8 = (iVar9 + 1) / 2;
              local_90c = local_90c + *(short *)(*(int *)(param_1 + 4) + 0x34) * iVar9;
              iVar9 = (local_92c + 1) / 2;
              local_92c = iVar9;
              local_928 = iVar8;
              piVar5 = (int *)FUN_36203880();
              FUN_362038e0(piVar5,param_1,iVar8,iVar9,local_90c,param_2,(char)local_914);
              puVar14 = extraout_EDX_07;
            }
            else {
              iVar9 = piVar5[1];
              if ((iVar9 < 3) || (*piVar5 < 3)) {
                puStack_918 = (undefined4 *)piVar5[2];
                local_938 = (uint *)0x0;
                if (0 < iVar9) {
                  do {
                    iVar8 = *piVar5;
                    pbStack_908 = (byte *)(piVar5[2] + iVar8 * (int)local_938 * 4);
                    local_940 = pbStack_908;
                    if (iVar9 != 1) {
                      local_940 = pbStack_908 + iVar8 * 4;
                    }
                    iStack_920 = 0;
                    if (0 < iVar8) {
                      iStack_904 = -(int)local_940;
                      do {
                        iVar9 = iStack_904;
                        pbVar21 = local_940;
                        pbVar19 = pbStack_908;
                        if (iVar8 != 1) {
                          iVar9 = iStack_904 + -4;
                          pbVar21 = local_940 + 4;
                          pbVar19 = pbStack_908 + 4;
                        }
                        fStack_944 = (float)((int)&uStack_900 + iVar9);
                        iVar8 = (int)pbVar19 - (int)pbVar21;
                        iVar13 = (int)local_940 - (int)pbVar21;
                        iVar9 = (int)pbStack_908 - (int)pbVar21;
                        iStack_8fc = 4;
                        do {
                          pbVar21[(int)fStack_944] =
                               (byte)((int)((uint)pbVar21[iVar9] + (uint)pbVar21[iVar13] +
                                            (uint)pbVar21[iVar8] + (uint)*pbVar21) >> 2);
                          pbVar21 = pbVar21 + 1;
                          iStack_8fc = iStack_8fc + -1;
                        } while (iStack_8fc != 0);
                        if (*(char *)(param_1 + 0x2384) != '\0') {
                          uStack_900 = CONCAT13((-(uStack_900._3_1_ < 0x7f) & 1U) - 1,
                                                (undefined3)uStack_900);
                        }
                        *puStack_918 = uStack_900;
                        puStack_918 = puStack_918 + 1;
                        pbStack_908 = pbStack_908 + 8;
                        local_940 = local_940 + 8;
                        iStack_904 = iStack_904 + -8;
                        iVar8 = *piVar5;
                        iStack_920 = iStack_920 + 2;
                      } while (iStack_920 < iVar8);
                      iStack_8fc = 0;
                    }
                    iVar9 = piVar5[1];
                    local_938 = (uint *)((int)local_938 + 2);
                  } while ((int)local_938 < iVar9);
                }
              }
              else {
                piVar1 = *(int **)(iStack_818 + (int)local_934 * 4);
                puVar18 = (undefined4 *)piVar1[2];
                puVar22 = (undefined4 *)piVar5[2];
                for (uVar15 = piVar1[1] * *piVar1 & 0x3fffffff; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *puVar22 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar22 = puVar22 + 1;
                }
                for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *(undefined1 *)puVar22 = *(undefined1 *)puVar18;
                  puVar18 = (undefined4 *)((int)puVar18 + 1);
                  puVar22 = (undefined4 *)((int)puVar22 + 1);
                }
              }
              *piVar5 = (*piVar5 + 1) / 2;
              piVar5[1] = (piVar5[1] + 1) / 2;
              local_928 = (local_928 + 1) / 2;
              puVar14 = (uint *)(local_92c + 1 >> 0x1f);
              local_92c = (local_92c + 1) / 2;
            }
            if (*(char *)(param_1 + 0x2387) != '\0') {
              iVar9 = 0;
              if (0 < piVar5[1]) {
                do {
                  iVar8 = iVar9 * *piVar5;
                  iVar9 = iVar9 + 1;
                  *(undefined1 *)(piVar5[2] + 3 + iVar8 * 4) = 0;
                  puVar14 = (uint *)piVar5[2];
                  *(undefined1 *)((int)puVar14 + iVar9 * *piVar5 * 4 + -1) = 0;
                } while (iVar9 < piVar5[1]);
              }
              iVar9 = 0;
              if (0 < *piVar5) {
                do {
                  *(undefined1 *)(piVar5[2] + 3 + iVar9 * 4) = 0;
                  puVar14 = (uint *)piVar5[2];
                  iVar8 = (piVar5[1] + -1) * *piVar5 + iVar9;
                  iVar9 = iVar9 + 1;
                  *(undefined1 *)((int)puVar14 + iVar8 * 4 + 3) = 0;
                } while (iVar9 < *piVar5);
              }
            }
            if (*(char *)(param_1 + 0x2388) != '\0') {
              iVar9 = 0;
              puVar20 = (undefined1 *)(param_1 + 0x238c);
              do {
                iVar8 = 0;
                if (0 < piVar5[1]) {
                  do {
                    iVar13 = iVar8 * *piVar5;
                    iVar8 = iVar8 + 1;
                    *(undefined1 *)(iVar9 + iVar13 * 4 + piVar5[2]) = *puVar20;
                    *(undefined1 *)(piVar5[2] + -4 + *piVar5 * iVar8 * 4 + iVar9) = *puVar20;
                  } while (iVar8 < piVar5[1]);
                }
                puVar14 = (uint *)0x0;
                if (0 < *piVar5) {
                  do {
                    *(undefined1 *)(iVar9 + (int)puVar14 * 4 + piVar5[2]) = *puVar20;
                    puVar16 = (uint *)((piVar5[1] + -1) * *piVar5 + (int)puVar14);
                    puVar14 = (uint *)((int)puVar14 + 1);
                    *(undefined1 *)(piVar5[2] + (int)puVar16 * 4 + iVar9) = *puVar20;
                  } while ((int)puVar14 < *piVar5);
                }
                iVar9 = iVar9 + 1;
                puVar20 = puVar20 + 1;
              } while (iVar9 < 3);
            }
            if (*(int *)(param_1 + 0x239c) <= (int)local_934) {
              if (*(char *)(param_1 + 0x2390) != '\0') {
                if (*(char *)(param_1 + 0x2385) == '\0') {
                  if (*(char *)(param_1 + 0x2386) == '\0') {
                    local_938 = (uint *)0x0;
                    if (0 < piVar5[1]) {
                      do {
                        iVar9 = 0;
                        puVar14 = (uint *)(*piVar5 * (int)local_938);
                        puVar20 = (undefined1 *)(piVar5[2] + (int)puVar14 * 4);
                        if (0 < *piVar5) {
                          do {
                            fStack_944 = (float)(uint)*(byte *)(param_1 + 0x2394);
                            uVar4 = ftol();
                            *puVar20 = uVar4;
                            fStack_944 = (float)(uint)*(byte *)(param_1 + 0x2395);
                            uVar4 = ftol();
                            puVar20[1] = uVar4;
                            fStack_944 = (float)(uint)*(byte *)(param_1 + 0x2396);
                            uVar4 = ftol();
                            puVar20[2] = uVar4;
                            iVar9 = iVar9 + 1;
                            puVar20 = puVar20 + 4;
                            puVar14 = extraout_EDX_10;
                          } while (iVar9 < *piVar5);
                        }
                        local_938 = (uint *)((int)local_938 + 1);
                      } while ((int)local_938 < piVar5[1]);
                    }
                  }
                  else {
                    iVar9 = 0;
                    if (0 < piVar5[1]) {
                      do {
                        puVar14 = (uint *)piVar5[2];
                        iVar8 = 0;
                        if (0 < *piVar5) {
                          pbVar21 = (byte *)((int)puVar14 + *piVar5 * iVar9 * 4 + 1);
                          do {
                            fStack_944 = (float)*pbVar21 * _DAT_3624cf14 * local_930;
                            bVar3 = ftol();
                            pbVar21[1] = bVar3;
                            bVar3 = ftol();
                            *pbVar21 = bVar3;
                            iVar8 = iVar8 + 1;
                            pbVar21 = pbVar21 + 4;
                            puVar14 = extraout_EDX_09;
                          } while (iVar8 < *piVar5);
                        }
                        iVar9 = iVar9 + 1;
                      } while (iVar9 < piVar5[1]);
                    }
                  }
                }
                else {
                  puStack_918 = (undefined4 *)0x0;
                  if (0 < piVar5[1]) {
                    do {
                      iStack_920 = 0;
                      puVar14 = (uint *)(*piVar5 * (int)puStack_918);
                      pfVar23 = (float *)(piVar5[2] + (int)puVar14 * 4);
                      if (0 < *piVar5) {
                        do {
                          fStack_944 = *pfVar23;
                          uStack_858 = 0;
                          uStack_85c = (uint)fStack_944 >> 0x10 & 0xff;
                          uStack_884 = (uint)fStack_944 >> 8 & 0xff;
                          uStack_880 = 0;
                          uStack_87c = (uint)fStack_944 & 0xff;
                          uStack_878 = 0;
                          uVar15 = (uint)fStack_944 >> 0x18;
                          dVar2 = ((double)uStack_85c * _DAT_3624cf28 - _DAT_3624cdd0) *
                                  (double)local_930;
                          dStack_894 = (double)local_930 *
                                       ((double)uStack_884 * _DAT_3624cf28 - _DAT_3624cdd0);
                          dStack_88c = (double)(float)local_924 *
                                       ((double)uStack_87c * _DAT_3624cf28 - _DAT_3624cdd0);
                          dVar2 = dVar2 * dVar2 + dStack_894 * dStack_894 + dStack_88c * dStack_88c;
                          if (_DAT_3624cf20 < ABS(dVar2)) {
                            dVar2 = _DAT_3624cdd0 / SQRT(dVar2);
                            dStack_894 = dVar2 * dStack_894;
                            dStack_88c = dVar2 * dStack_88c;
                          }
                          puVar14 = (uint *)ftol();
                          local_938 = (uint *)0xff;
                          if (puVar14 < (uint *)0x100) {
                            local_938 = puVar14;
                          }
                          uVar6 = ftol();
                          uVar17 = 0xff;
                          if (uVar6 < 0x100) {
                            uVar17 = uVar6;
                          }
                          uVar6 = ftol();
                          if (0xff < uVar6) {
                            uVar6 = 0xff;
                          }
                          *pfVar23 = (float)(((uVar15 << 8 | (uint)local_938) << 8 | uVar17) << 8 |
                                            uVar6);
                          iStack_920 = iStack_920 + 1;
                          puVar14 = local_938;
                          pfVar23 = pfVar23 + 1;
                        } while (iStack_920 < *piVar5);
                      }
                      puStack_918 = (undefined4 *)((int)puStack_918 + 1);
                    } while ((int)puStack_918 < piVar5[1]);
                  }
                }
              }
              if ((*(char *)(param_1 + 0x2391) != '\0') && (local_938 = (uint *)0x0, 0 < piVar5[1]))
              {
                do {
                  iVar9 = 0;
                  puVar14 = (uint *)(*piVar5 * (int)local_938);
                  if (0 < *piVar5) {
                    pbVar21 = (byte *)(piVar5[2] + (int)puVar14 * 4 + 3);
                    do {
                      fStack_944 = (float)(uint)*pbVar21;
                      bVar3 = ftol();
                      *pbVar21 = bVar3;
                      iVar9 = iVar9 + 1;
                      pbVar21 = pbVar21 + 4;
                      puVar14 = extraout_EDX_08;
                    } while (iVar9 < *piVar5);
                  }
                  local_938 = (uint *)((int)local_938 + 1);
                } while ((int)local_938 < piVar5[1]);
              }
              local_930 = local_930 * local_8d0;
            }
            if ((*(char *)(param_1 + 0x2385) != '\0') &&
               (puStack_918 = (undefined4 *)0x0, 0 < piVar5[1])) {
              do {
                puVar14 = (uint *)(*piVar5 * (int)puStack_918);
                iStack_920 = 0;
                pfVar23 = (float *)(piVar5[2] + (int)puVar14 * 4);
                if (0 < *piVar5) {
                  do {
                    fStack_944 = *pfVar23;
                    uStack_870 = 0;
                    uStack_874 = (uint)fStack_944 >> 0x10 & 0xff;
                    uStack_864 = (uint)fStack_944 >> 8 & 0xff;
                    uStack_860 = 0;
                    uStack_86c = (uint)fStack_944 & 0xff;
                    uStack_868 = 0;
                    uVar15 = (uint)fStack_944 >> 0x18;
                    local_8f8 = (double)uStack_874 * _DAT_3624cf28 - _DAT_3624cdd0;
                    dVar2 = (double)uStack_864 * _DAT_3624cf28 - _DAT_3624cdd0;
                    local_8e8 = (double)uStack_86c * _DAT_3624cf28 - _DAT_3624cdd0;
                    dVar2 = local_8f8 * local_8f8 + dVar2 * dVar2 + local_8e8 * local_8e8;
                    if (_DAT_3624cf20 < ABS(dVar2)) {
                      local_8e8 = (_DAT_3624cdd0 / SQRT(dVar2)) * local_8e8;
                    }
                    puVar14 = (uint *)ftol();
                    local_938 = (uint *)0xff;
                    if (puVar14 < (uint *)0x100) {
                      local_938 = puVar14;
                    }
                    uVar6 = ftol();
                    uVar17 = 0xff;
                    if (uVar6 < 0x100) {
                      uVar17 = uVar6;
                    }
                    uVar6 = ftol();
                    if (0xff < uVar6) {
                      uVar6 = 0xff;
                    }
                    *pfVar23 = (float)(((uVar15 << 8 | (uint)local_938) << 8 | uVar17) << 8 | uVar6)
                    ;
                    iStack_920 = iStack_920 + 1;
                    puVar14 = local_938;
                    pfVar23 = pfVar23 + 1;
                  } while (iStack_920 < *piVar5);
                }
                puStack_918 = (undefined4 *)((int)puStack_918 + 1);
              } while ((int)puStack_918 < piVar5[1]);
            }
          }
        } while (((*(short *)(param_1 + 0x237e) != 0x1f) ||
                 ((int)local_934 < (int)*(short *)(param_1 + 0x2380))) && (local_939 == '\0'));
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_36203400(local_854);
        local_91c = local_91c + 1;
      } while (local_91c < local_910);
    }
    FUN_362038b0(piVar5);
    operator_delete(local_8a8);
  }
  else {
    local_91c = 0;
    puVar14 = local_924;
    if (0 < local_910) {
      do {
        if (*(short *)(param_1 + 0x237e) == 0x20) {
          uVar15 = *(short *)(*(int *)(param_1 + 4) + 0x34) * local_91c * iVar9 * 2;
        }
        else {
          uVar15 = *(short *)(*(int *)(param_1 + 4) + 0x34) * local_91c * iVar9;
        }
        FUN_362038e0(piVar5,param_1,iVar9,local_92c,uVar15,param_2,(char)local_914);
        uVar10 = (undefined3)(param_2 - 10 >> 8);
        switch(param_2 - 10) {
        case 0:
          puVar14 = FUN_361ffe50(piVar5,&local_948,
                                 CONCAT31(uVar10,*(undefined1 *)(param_1 + 0x23a6)),
                                 *(undefined1 *)(param_1 + 0x23a7));
          break;
        case 1:
          puVar14 = FUN_361fff40(piVar5,&local_948,
                                 CONCAT31((int3)((uint)extraout_EDX >> 8),
                                          *(undefined1 *)(param_1 + 0x23a6)));
          break;
        case 2:
          puVar14 = FUN_36200030(piVar5,&local_948,
                                 CONCAT31(uVar11,*(undefined1 *)(param_1 + 0x23a6)));
          break;
        case 3:
          puVar14 = FUN_36200120(piVar5,&local_948,
                                 CONCAT31(uVar10,*(undefined1 *)(param_1 + 0x23a6)));
          break;
        case 4:
          local_948 = piVar5[1] * *piVar5 * 2;
          puVar14 = malloc(local_948);
          puVar16 = (uint *)piVar5[2];
          iVar9 = 0;
          puVar12 = puVar14;
          local_924 = puVar14;
          if (0 < piVar5[1] * *piVar5) {
            do {
              uVar15 = *puVar16;
              puVar16 = puVar16 + 1;
              iVar9 = iVar9 + 1;
              *(ushort *)puVar12 =
                   (ushort)(uVar15 >> 0x10) & 0xf000 | (ushort)(uVar15 >> 0xc) & 0xf00 |
                   (ushort)(uVar15 >> 8) & 0xf0 | (ushort)(uVar15 >> 4) & 0xf;
              puVar12 = (uint *)((int)puVar12 + 2);
            } while (iVar9 < piVar5[1] * *piVar5);
          }
          break;
        case 5:
          local_948 = piVar5[1] * *piVar5 * 2;
          puVar14 = malloc(local_948);
          puVar16 = (uint *)piVar5[2];
          iVar9 = 0;
          puVar12 = puVar14;
          local_924 = puVar14;
          if (0 < piVar5[1] * *piVar5) {
            do {
              uVar15 = *puVar16;
              puVar16 = puVar16 + 1;
              iVar9 = iVar9 + 1;
              *(ushort *)puVar12 =
                   (ushort)(uVar15 >> 9) & 0x7c00 | (ushort)(uVar15 >> 6) & 0x3e0 |
                   (ushort)(uVar15 >> 3) & 0x1f | (ushort)(uVar15 >> 0x10) & 0x8000;
              puVar12 = (uint *)((int)puVar12 + 2);
            } while (iVar9 < piVar5[1] * *piVar5);
          }
          break;
        case 6:
          local_948 = piVar5[1] * *piVar5 * 2;
          puVar14 = malloc(piVar5[1] * *piVar5 * 2);
          puVar16 = (uint *)piVar5[2];
          local_940 = (byte *)0x0;
          puVar12 = puVar14;
          if (0 < piVar5[1] * *piVar5) {
            do {
              uVar15 = *puVar16;
              puVar16 = puVar16 + 1;
              *(ushort *)puVar12 =
                   (ushort)(uVar15 >> 8) & 0xf800 | (ushort)(uVar15 >> 5) & 0x7e0 |
                   (ushort)(uVar15 >> 3) & 0x1f;
              puVar12 = (uint *)((int)puVar12 + 2);
              local_940 = local_940 + 1;
            } while ((int)local_940 < piVar5[1] * *piVar5);
          }
          break;
        case 7:
        case 0xb:
        case 0xc:
          local_948 = piVar5[1] * *piVar5 * 4;
          puVar14 = malloc(piVar5[1] * *piVar5 * 4);
          puVar16 = (uint *)piVar5[2];
          puVar12 = puVar14;
          for (uVar15 = piVar5[1] * *piVar5 & 0x3fffffff; uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar12 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar12 = puVar12 + 1;
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(char *)puVar12 = (char)*puVar16;
            puVar16 = (uint *)((int)puVar16 + 1);
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          break;
        case 8:
          local_948 = piVar5[1] * *piVar5 * 3;
          puVar14 = malloc(piVar5[1] * *piVar5 * 3);
          iVar9 = 0;
          puVar16 = puVar14;
          puVar20 = (undefined1 *)piVar5[2];
          if (0 < piVar5[1] * *piVar5) {
            do {
              *(undefined1 *)puVar16 = *puVar20;
              *(undefined1 *)((int)puVar16 + 1) = puVar20[1];
              *(undefined1 *)((int)puVar16 + 2) = puVar20[2];
              puVar16 = (uint *)((int)puVar16 + 3);
              iVar9 = iVar9 + 1;
              puVar20 = puVar20 + 4;
            } while (iVar9 < piVar5[1] * *piVar5);
          }
          break;
        case 9:
          local_948 = piVar5[1] * *piVar5 * 2;
          puVar14 = malloc(local_948);
          puVar16 = (uint *)piVar5[2];
          local_940 = (byte *)0x0;
          puVar12 = puVar14;
          if (0 < piVar5[1] * *piVar5) {
            do {
              uVar15 = *puVar16;
              puVar16 = puVar16 + 1;
              *(ushort *)puVar12 =
                   (ushort)(uVar15 >> 9) & 0x7c00 | (ushort)(uVar15 >> 6) & 0x3e0 |
                   (ushort)(uVar15 >> 3) & 0x1f;
              puVar12 = (uint *)((int)puVar12 + 2);
              local_940 = local_940 + 1;
            } while ((int)local_940 < piVar5[1] * *piVar5);
          }
          break;
        case 10:
          local_8e0 = (void *)0x0;
          local_8d8 = 0;
          local_8f8 = 0.0;
          local_8f0 = 0;
          local_8ec = 0;
          local_8e8 = (double)((ulonglong)CONCAT31(local_8e8._5_3_,local_939) << 0x20);
          local_8dc = 0;
          local_4 = 0;
          local_938 = (uint *)CONCAT31(local_938._1_3_,*(short *)(*(int *)(param_1 + 4) + 0x34) == 3
                                      );
          puVar14 = FUN_36203d00((undefined4 *)piVar5[2],*piVar5,piVar5[1],4,
                                 (undefined4 *)&local_8f8,8,'\x04',*(char *)(param_1 + 0x23a4),
                                 (int)local_938);
          local_948 = piVar5[1] * *piVar5;
          if (local_8ec == 3) {
            if (0 < (int)local_8e8) {
              puVar20 = local_80c + 1;
              puVar7 = (undefined1 *)((int)local_8e0 + 4);
              iVar9 = (int)local_8e8;
              do {
                puVar20[1] = puVar7[4];
                *puVar20 = *puVar7;
                puVar20[-1] = puVar7[-4];
                puVar20[2] = 0xff;
                puVar20 = puVar20 + 4;
                iVar9 = iVar9 + -1;
                puVar7 = puVar7 + 0xc;
              } while (iVar9 != 0);
            }
          }
          else if (0 < (int)local_8e8) {
            puVar20 = local_80c + 1;
            puVar7 = (undefined1 *)((int)local_8e0 + 8);
            iVar9 = (int)local_8e8;
            do {
              puVar20[1] = puVar7[-8];
              *puVar20 = puVar7[-4];
              puVar20[-1] = *puVar7;
              puVar20[2] = puVar7[4];
              puVar20 = puVar20 + 4;
              iVar9 = iVar9 + -1;
              puVar7 = puVar7 + 0x10;
            } while (iVar9 != 0);
          }
          if (param_3 == (undefined *)0x0) {
            FUN_361fe3e0();
          }
          else {
            (*(code *)param_3)(local_80c,0,0x400);
          }
          local_4 = 0xffffffff;
          operator_delete(local_8e0);
          local_8e0 = (void *)0x0;
          local_8dc = 0;
          local_8d8 = 0;
        }
        if (param_3 == (undefined *)0x0) {
          if (local_949 == '\0') {
            FUN_361fe3e0();
          }
          else {
            FUN_362003a0();
          }
        }
        else {
          (*(code *)param_3)(puVar14,0,local_948);
        }
        free(puVar14);
        local_91c = local_91c + 1;
        iVar9 = local_928;
      } while (local_91c < local_910);
    }
    FUN_362038b0(piVar5);
  }
  ExceptionList = pvStack_c;
  return 1;
}

