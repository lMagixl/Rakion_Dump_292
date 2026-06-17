
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CMesh::SplitSurfaces(struct MeshLOD &) */

void __thiscall CMesh::SplitSurfaces(CMesh *this,MeshLOD *param_1)

{
  void *pvVar1;
  MeshLOD *pMVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  bool bVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  char *pcVar14;
  int *piVar15;
  char *pcVar16;
  CShader *pCVar17;
  undefined4 *puVar18;
  int *piVar19;
  int iVar20;
  undefined4 *puVar21;
  ushort uVar22;
  MeshLOD *pMVar23;
  ushort uVar24;
  undefined1 *puVar25;
  int *piVar26;
  ushort uVar27;
  undefined4 *puVar28;
  char **ppcVar29;
  MeshLOD **ppMVar30;
  undefined4 uVar31;
  char *local_128;
  undefined4 local_124;
  char *local_120;
  uint local_11c;
  int local_118;
  char *local_114;
  char *local_110;
  int local_10c;
  uint local_108;
  MeshLOD *local_104;
  int local_100;
  void *local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  void *local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int *local_dc;
  MeshLOD *local_d8;
  char local_d4 [4];
  byte local_d0 [4];
  int local_cc;
  void *local_c8;
  int local_c4;
  void *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  void *local_b0;
  int local_ac;
  int *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int *local_8c;
  int local_88;
  undefined4 *local_84;
  int local_80;
  void *local_7c;
  int local_78;
  void *local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 *local_64;
  short *local_60;
  int *local_5c;
  int local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  uint local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  short *local_28;
  int *local_24;
  ushort local_20 [4];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x158860  3651  ?SplitSurfaces@CMesh@@QAEXAAUMeshLOD@@@Z */
  pMVar23 = param_1;
  puStack_c = &LAB_36219f19;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffecc;
  local_18 = DAT_362abd90;
  local_cc = 0;
  local_c8 = (void *)0x0;
  local_b4 = 0;
  local_b0 = (void *)0x0;
  local_80 = 0;
  local_7c = (void *)0x0;
  local_88 = 0;
  local_84 = (undefined4 *)0x0;
  local_68 = 0;
  local_64 = (undefined4 *)0x0;
  local_f0 = 0;
  local_ec = (void *)0x0;
  local_e8 = 0;
  local_e4 = 0x10;
  local_100 = 0;
  local_fc = (void *)0x0;
  local_f8 = 0;
  local_f4 = 0x10;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  iVar8 = FUN_3615a2c0((undefined4 *)(param_1 + 0x20));
  local_58 = iVar8;
  local_dc = (int *)FUN_3615a300((undefined4 *)(pMVar23 + 0x28));
  if ((iVar8 == 0) && (local_dc == (int *)0x0)) {
    local_8._0_1_ = 4;
    FUN_3615b9e0(&local_f0);
    local_8._0_1_ = 3;
    FUN_3615be20(&local_68);
    local_8._0_1_ = 2;
    FUN_3615bde0(&local_88);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_36017530(&local_80);
  }
  else {
    FUN_36155690((undefined4 *)pMVar23);
    iVar8 = 0;
    local_10c = 0;
    local_4c = 0;
    local_118 = FUN_3615a280((undefined4 *)(pMVar23 + 0x18));
    if (0 < local_118) {
      local_50 = (undefined4 *)(*(int *)(pMVar23 + 0x1c) + 0x40);
      local_24 = (int *)local_118;
      do {
        iVar9 = FUN_3615a400(local_50);
        iVar8 = iVar9 * 3 + iVar8;
        local_50 = local_50 + 0x12;
        local_24 = (int *)((int)local_24 + -1);
      } while (local_24 != (int *)0x0);
      local_24 = (int *)0x0;
      local_10c = iVar8;
    }
    local_8c = (int *)FUN_3615a240((undefined4 *)(pMVar23 + 0x10));
    if (0 < (int)local_8c) {
      FUN_3615b070(&local_80,(int)local_8c);
    }
    if (0 < (int)local_8c) {
      local_30 = (int *)((int)local_7c + 8);
      piVar19 = (int *)(-(int)local_7c - 8);
      local_24 = local_8c;
      local_38 = piVar19;
      do {
        if (iVar8 != 0) {
          *local_30 = iVar8;
          iVar9 = thunk_FUN_361bf99c(iVar8 * 8 + 8);
          local_30[1] = iVar9;
          piVar19 = local_38;
        }
        local_30[-2] = *(int *)(*(int *)(pMVar23 + 0x14) + (int)piVar19 + (int)local_30);
        local_30 = local_30 + 4;
        local_24 = (int *)((int)local_24 + -1);
      } while (local_24 != (int *)0x0);
    }
    if (iVar8 != 0) {
      local_38 = (int *)((iVar8 * 3 + 3) * 4);
      local_cc = iVar8;
      local_c8 = (void *)thunk_FUN_361bf99c((size_t)local_38);
      local_b4 = iVar8;
      local_b0 = (void *)thunk_FUN_361bf99c((size_t)local_38);
    }
    FUN_3615b8c0(&local_88,local_58);
    piVar19 = local_dc;
    FUN_3615b940(&local_68,(int)local_dc);
    if (0 < local_58) {
      iVar9 = 0;
      puVar21 = local_84;
      iVar8 = local_58;
      do {
        *puVar21 = *(undefined4 *)(*(int *)(pMVar23 + 0x24) + iVar9);
        puVar21 = puVar21 + 5;
        iVar9 = iVar9 + 0xc;
        iVar8 = iVar8 + -1;
        piVar19 = local_dc;
      } while (iVar8 != 0);
    }
    if (0 < (int)piVar19) {
      iVar8 = 0;
      puVar21 = local_64;
      local_24 = piVar19;
      do {
        iVar9 = *(int *)(pMVar23 + 0x2c);
        *puVar21 = *(undefined4 *)(iVar9 + iVar8);
        puVar21[1] = *(undefined4 *)(iVar9 + iVar8 + 4);
        puVar21 = puVar21 + 6;
        iVar8 = iVar8 + 0x10;
        local_24 = (int *)((int)local_24 + -1);
      } while (local_24 != (int *)0x0);
    }
    for (local_38 = (int *)0x0; (int)local_38 < local_118; local_38 = (int *)((int)local_38 + 1)) {
      local_60 = (short *)(*(int *)(pMVar23 + 0x1c) + (int)local_38 * 0x48);
      local_104 = (MeshLOD *)FUN_3615a400((undefined4 *)(local_60 + 0x20));
      local_9c = 0;
      local_98 = (int *)0x0;
      local_94 = 0;
      local_90 = 0x10;
      local_ac = 0;
      local_a8 = (int *)0x0;
      local_a4 = 0;
      local_a0 = 0x10;
      local_c4 = 0;
      local_c0 = (void *)0x0;
      local_bc = 0;
      local_b8 = 0x10;
      local_78 = 0;
      local_74 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x10;
      local_8 = CONCAT31(local_8._1_3_,10);
      local_50 = (undefined4 *)0x0;
      if (0 < (int)local_104) {
        local_11c = (uint)(0 < local_58);
        do {
          iVar8 = *(int *)(local_60 + 0x22);
          sVar5 = *local_60;
          uVar24 = *(short *)(iVar8 + (int)local_50 * 6) + sVar5;
          uVar27 = *(short *)(iVar8 + 2 + (int)local_50 * 6) + sVar5;
          uVar22 = *(short *)(iVar8 + 4 + (int)local_50 * 6) + sVar5;
          local_20[0] = uVar24;
          local_20[1] = uVar27;
          local_20[2] = uVar22;
          local_30 = (int *)0x0;
          local_28 = (short *)0x0;
          do {
            uVar10 = FUN_361549d0(param_1,(uint)local_20[(int)local_28],&local_e0,(int *)&local_d8);
            local_30 = (int *)((uint)local_30 | uVar10);
            local_28 = (short *)((int)local_28 + 1);
          } while ((int)local_28 < 3);
          local_bc = 0;
          local_70 = 0;
          if (local_11c != 0) {
            iVar9 = *(int *)(param_1 + 0x34);
            iVar8 = iVar9 + (uint)uVar24 * 8;
            puVar25 = (undefined1 *)(iVar9 + (uint)uVar27 * 8);
            local_40 = (int *)(iVar8 - (int)puVar25);
            iVar9 = iVar9 + (uint)uVar22 * 8;
            local_28 = (short *)(iVar9 + 4);
            local_48 = (int *)(iVar9 - (int)puVar25);
            local_2c = (int *)(iVar8 - iVar9);
            local_24 = (int *)0x4;
            do {
              local_d0[0] = puVar25[(int)local_40];
              local_d0[1] = *puVar25;
              local_d0[2] = *(undefined1 *)((int)local_48 + (int)puVar25);
              local_d4[0] = *(char *)((int)local_2c + (int)local_28);
              local_d4[1] = puVar25[4];
              local_d4[2] = (char)*local_28;
              iVar8 = 0;
              do {
                bVar3 = local_d0[iVar8];
                if ((bVar3 != 0) || (local_d4[iVar8] != '\0')) {
                  local_bc = local_bc + 1;
                  iVar9 = FUN_3600bef0(&local_c4);
                  if (iVar9 < local_bc) {
                    iVar9 = FUN_3600bef0(&local_c4);
                    FUN_36026aa0(&local_c4,iVar9 + local_b8);
                  }
                  *(uint *)((int)local_c0 + local_bc * 4 + -4) = (uint)bVar3;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < 3);
              puVar25 = puVar25 + 1;
              local_28 = (short *)((int)local_28 + 1);
              local_24 = (int *)((int)local_24 + -1);
            } while (local_24 != (int *)0x0);
            local_40 = (int *)FUN_36026a70((int)&local_c4);
            iVar8 = 0;
            if (0 < (int)local_40) {
              do {
                iVar9 = *(int *)((int)local_c0 + iVar8 * 4);
                bVar6 = false;
                iVar11 = FUN_36026a70((int)&local_78);
                iVar20 = 0;
                if (iVar11 < 1) {
LAB_36158d63:
                  iVar20 = local_70 + 1;
                  local_70 = iVar20;
                  iVar11 = FUN_3600bef0(&local_78);
                  if (iVar11 < iVar20) {
                    iVar11 = FUN_3600bef0(&local_78);
                    FUN_36026aa0(&local_78,iVar11 + local_6c);
                  }
                  *(int *)((int)local_74 + local_70 * 4 + -4) = iVar9;
                }
                else {
                  do {
                    if (iVar9 == *(int *)((int)local_74 + iVar20 * 4)) {
                      bVar6 = true;
                    }
                    iVar20 = iVar20 + 1;
                  } while (iVar20 < iVar11);
                  if (!bVar6) goto LAB_36158d63;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)local_40);
            }
          }
          piVar19 = &local_ac;
          if (local_30 == (int *)0x0) {
            piVar19 = &local_9c;
          }
          local_28 = (short *)FUN_3615a6e0((int)piVar19);
          local_24 = (int *)0x0;
          if (0 < (int)local_28) {
            local_40 = (int *)((int)local_a8 - (int)local_98);
            piVar19 = local_98;
LAB_36158de0:
            piVar15 = piVar19;
            if (local_30 != (int *)0x0) {
              piVar15 = (int *)((int)local_40 + (int)piVar19);
            }
            iVar9 = 0;
            local_48 = piVar15;
            local_2c = piVar19;
            local_e0 = FUN_36026a70((int)&local_78);
            iVar8 = 0;
            if (0 < local_e0) {
              do {
                if (*(int *)(piVar15[5] + *(int *)((int)local_74 + iVar8 * 4) * 4) == -1) {
                  iVar9 = iVar9 + 1;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < local_e0);
              piVar19 = local_2c;
              if (0x18 < iVar9) {
                uVar12 = *(undefined4 *)(local_60 + 4);
                ppMVar30 = &param_1;
                puVar21 = (undefined4 *)ska_IDToString((long)ppMVar30);
                local_8._0_1_ = 0xb;
                CPrintF(s_Triangle__d_in_Surface___s__has_m_3623ca7c,local_50,*puVar21,0x18,ppMVar30
                        ,uVar12);
                local_8 = CONCAT31(local_8._1_3_,10);
                StringFree((char *)param_1);
                if (local_78 != 0) {
                  operator_delete__(local_74);
                }
                if (local_c4 != 0) {
                  operator_delete__(local_c0);
                }
                local_8._0_1_ = 7;
                if ((local_ac != 0) && (local_a8 != (int *)0x0)) {
                  piVar19 = local_a8 + -1;
                  _eh_vector_destructor_iterator_(local_a8,0x4c,local_a8[-1],FUN_3615b420);
                  operator_delete__(piVar19);
                }
                local_8 = CONCAT31(local_8._1_3_,6);
                if ((local_9c != 0) && (local_98 != (int *)0x0)) {
                  piVar19 = local_98 + -1;
                  _eh_vector_destructor_iterator_(local_98,0x4c,local_98[-1],FUN_3615b420);
                  operator_delete__(piVar19);
                }
                if (local_100 != 0) {
                  operator_delete__(local_fc);
                }
                local_8._0_1_ = 4;
                if ((local_f0 != 0) && (local_ec != (void *)0x0)) {
                  pvVar1 = (void *)((int)local_ec + -4);
                  _eh_vector_destructor_iterator_
                            (local_ec,0x48,*(int *)((int)local_ec + -4),MeshSurface::~MeshSurface);
                  operator_delete__(pvVar1);
                }
                if ((local_68 == 0) || (local_64 == (undefined4 *)0x0)) goto LAB_36159e2b;
                iVar8 = local_64[-1];
                puVar21 = local_64;
                goto LAB_36159e1d;
              }
            }
            if (0x19 < piVar15[6] + iVar9) goto code_r0x36158e38;
            iVar8 = piVar15[2];
            piVar15[2] = iVar8 + 1;
            iVar9 = FUN_3615a400(piVar15);
            if (iVar9 < iVar8 + 1) {
              iVar8 = FUN_3615a400(piVar15);
              FUN_3615a740(piVar15,iVar8 + piVar15[3]);
            }
            local_28 = (short *)(piVar15[1] + -6 + piVar15[2] * 6);
            local_2c = (int *)(local_4c * 8);
            local_54 = (undefined4 *)((int)local_b0 + local_4c * 0xc);
            local_24 = (int *)((int)local_c8 - (int)local_b0);
            local_40 = (int *)((int)local_20 - (int)local_28);
            local_30 = (int *)0x0;
            do {
              uVar10 = (uint)*(ushort *)((int)local_40 + (int)local_28);
              puVar28 = (undefined4 *)((int)local_24 + (int)local_54);
              puVar21 = (undefined4 *)(*(int *)(param_1 + 4) + uVar10 * 0xc);
              *puVar28 = *puVar21;
              puVar28[1] = puVar21[1];
              puVar28[2] = puVar21[2];
              puVar21 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar10 * 0xc);
              *local_54 = *puVar21;
              local_54[1] = puVar21[1];
              local_54[2] = puVar21[2];
              *local_28 = (short)local_4c + (short)local_30;
              if (0 < (int)local_8c) {
                iVar8 = 0;
                local_34 = (int *)((int)local_7c + 0xc);
                local_44 = local_8c;
                do {
                  iVar9 = *(int *)(*(int *)(param_1 + 0x14) + 0xc + iVar8);
                  iVar11 = *local_34;
                  *(undefined4 *)((int)local_2c + iVar11) = *(undefined4 *)(iVar9 + uVar10 * 8);
                  *(undefined4 *)((int)local_2c + iVar11 + 4) =
                       *(undefined4 *)(iVar9 + 4 + uVar10 * 8);
                  local_34 = local_34 + 4;
                  iVar8 = iVar8 + 0x10;
                  local_44 = (int *)((int)local_44 + -1);
                } while (local_44 != (int *)0x0);
              }
              local_3c = 0;
              local_34 = (int *)0x0;
              local_108 = uVar10;
              iVar8 = FUN_36154960(param_1,uVar10,(int *)&local_34,(int *)&local_3c);
              if (iVar8 != 0) {
                local_44 = (int *)((int)local_30 + local_4c);
                do {
                  piVar19 = local_34;
                  puVar21 = local_84;
                  iVar8 = *(int *)(*(int *)(param_1 + 0x24) + (int)local_34 * 0xc + 8);
                  puVar28 = local_84 + (int)local_34 * 5 + 1;
                  local_84[(int)local_34 * 5 + 3] = local_84[(int)local_34 * 5 + 3] + 1;
                  local_34 = (int *)(iVar8 + local_3c * 8);
                  iVar8 = FUN_3600c3d0(puVar28);
                  if (iVar8 < (int)puVar21[(int)piVar19 * 5 + 3]) {
                    iVar8 = FUN_3600c3d0(puVar28);
                    FUN_3615a410(puVar28,iVar8 + puVar21[(int)piVar19 * 5 + 4]);
                  }
                  puVar21 = (undefined4 *)
                            (puVar21[(int)piVar19 * 5 + 2] + -8 + puVar21[(int)piVar19 * 5 + 3] * 8)
                  ;
                  puVar21[1] = local_34[1];
                  *puVar21 = local_44;
                  local_34 = (int *)((int)piVar19 + 1);
                  iVar8 = FUN_36154960(param_1,uVar10,(int *)&local_34,(int *)&local_3c);
                } while (iVar8 != 0);
              }
              local_34 = (int *)0x0;
              local_3c = 0;
              iVar8 = FUN_361549d0(param_1,uVar10,(int *)&local_34,(int *)&local_3c);
              if (iVar8 != 0) {
                local_44 = (int *)((int)local_30 + local_4c);
                do {
                  piVar19 = local_34;
                  puVar21 = local_64;
                  iVar11 = local_3c * 0x1c;
                  iVar8 = *(int *)((int)local_34 * 0x10 + 0xc + *(int *)(param_1 + 0x2c));
                  puVar28 = local_64 + (int)local_34 * 6 + 2;
                  local_64[(int)local_34 * 6 + 4] = local_64[(int)local_34 * 6 + 4] + 1;
                  iVar9 = FUN_3600c450(puVar28);
                  if (iVar9 < (int)puVar21[(int)piVar19 * 6 + 4]) {
                    iVar9 = FUN_3600c450(puVar28);
                    FUN_3615a4a0(puVar28,iVar9 + puVar21[(int)piVar19 * 6 + 5]);
                  }
                  puVar21 = (undefined4 *)
                            (puVar21[(int)piVar19 * 6 + 3] + -0x1c +
                            puVar21[(int)piVar19 * 6 + 4] * 0x1c);
                  puVar28 = (undefined4 *)(iVar11 + iVar8);
                  puVar18 = puVar21;
                  for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar18 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar18 = puVar18 + 1;
                  }
                  *puVar21 = local_44;
                  local_34 = (int *)((int)piVar19 + 1);
                  iVar8 = FUN_361549d0(param_1,local_108,(int *)&local_34,(int *)&local_3c);
                } while (iVar8 != 0);
              }
              local_30 = (int *)((int)local_30 + 1);
              local_54 = local_54 + 3;
              local_2c = local_2c + 2;
              local_28 = local_28 + 1;
            } while ((int)local_30 < 3);
            local_4c = local_4c + 3;
            iVar8 = 0;
            if (0 < local_e0) {
              do {
                piVar19 = (int *)(local_48[5] + *(int *)((int)local_74 + iVar8 * 4) * 4);
                if (*piVar19 == -1) {
                  *piVar19 = 1;
                  local_48[6] = local_48[6] + 1;
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < local_e0);
            }
            goto LAB_361596cc;
          }
LAB_36159152:
          local_48 = (int *)0x0;
          iVar8 = FUN_36026a70((int)&local_100);
          psVar7 = local_60;
          iVar9 = 0;
          if (0 < iVar8) {
            do {
              if (*(int *)((int)local_fc + iVar9 * 4) == *(int *)(local_60 + 4)) {
                local_48 = (int *)0x1;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar8);
          }
          if (local_30 == (int *)0x0) {
            iVar9 = local_94 + 1;
            local_94 = iVar9;
            iVar8 = FUN_3615a890(&local_9c);
            if (iVar8 < iVar9) {
              iVar8 = FUN_3615a890(&local_9c);
              FUN_3615c010(&local_9c,iVar8 + local_90);
            }
            piVar15 = local_98 + local_94 * 0x13 + -0x13;
            piVar19 = &local_9c;
          }
          else {
            iVar9 = local_a4 + 1;
            local_a4 = iVar9;
            iVar8 = FUN_3615a890(&local_ac);
            if (iVar8 < iVar9) {
              iVar8 = FUN_3615a890(&local_ac);
              FUN_3615c010(&local_ac,iVar8 + local_a0);
            }
            piVar15 = local_a8 + local_a4 * 0x13 + -0x13;
            piVar19 = &local_ac;
          }
          local_40 = piVar15;
          uVar12 = FUN_3615a6e0((int)piVar19);
          if (local_48 == (int *)0x0) {
            piVar15[7] = *(int *)(psVar7 + 4);
            piVar15[8] = *(int *)(psVar7 + 0x1a);
            iVar9 = local_f8 + 1;
            local_f8 = iVar9;
            iVar8 = FUN_3600bef0(&local_100);
            if (iVar8 < iVar9) {
              iVar8 = FUN_3600bef0(&local_100);
              FUN_36026aa0(&local_100,iVar8 + local_f4);
            }
            *(undefined4 *)((int)local_fc + local_f8 * 4 + -4) = *(undefined4 *)(psVar7 + 4);
          }
          else {
            uVar31 = *(undefined4 *)(psVar7 + 4);
            ppcVar29 = &local_110;
            ska_IDToString((long)ppcVar29);
            local_8._0_1_ = 0xc;
            CTString::CTString((CTString *)&local_120,(long)&local_120,(char *)0x0,&DAT_3623cab8,
                               uVar12,ppcVar29,uVar31);
            local_8._0_1_ = 0xd;
            CTString::operator+((CTString *)&local_110,(CTString *)&local_114);
            local_8._0_1_ = 0xf;
            StringFree(local_120);
            lVar13 = ska_StringToID((CTString *)&local_114);
            piVar15[7] = lVar13;
            piVar15[8] = *(uint *)(psVar7 + 0x1a) | 1;
            local_8._0_1_ = 0xc;
            StringFree(local_114);
            local_8 = CONCAT31(local_8._1_3_,10);
            StringFree(local_110);
          }
          psVar7 = local_60;
          FUN_360100e0(piVar15 + 10,(undefined4 *)(local_60 + 8));
          FUN_360100e0(piVar15 + 0xc,(undefined4 *)(psVar7 + 0xc));
          FUN_3615ace0(piVar15 + 0xe,(undefined4 *)(psVar7 + 0x10));
          FUN_36010b30(piVar15 + 0x10,(undefined4 *)(psVar7 + 0x14));
          piVar15[0x12] = *(int *)(psVar7 + 0x18);
          if (*(int *)(local_60 + 6) != 0) {
            pcVar14 = StringDuplicate(*(char **)(*(int *)(local_60 + 6) + 0xc));
            StringFree((char *)piVar15[9]);
            piVar15[9] = (int)pcVar14;
          }
          iVar8 = local_58;
          if (local_58 != 0) {
            piVar15[4] = local_58;
            iVar9 = thunk_FUN_361bf99c(local_58 * 4 + 4);
            piVar15[5] = iVar9;
          }
          iVar9 = 0;
          piVar15[6] = 0;
          if (0 < iVar8) {
            do {
              iVar11 = iVar9 * 4;
              iVar9 = iVar9 + 1;
              *(undefined4 *)(piVar15[5] + iVar11) = 0xffffffff;
            } while (iVar9 < iVar8);
          }
          iVar8 = piVar15[2];
          piVar15[2] = iVar8 + 1;
          iVar9 = FUN_3615a400(piVar15);
          if (iVar9 < iVar8 + 1) {
            iVar8 = FUN_3615a400(piVar15);
            FUN_3615a740(piVar15,iVar8 + piVar15[3]);
          }
          local_34 = (int *)(piVar15[1] + -6 + piVar15[2] * 6);
          local_3c = local_4c * 8;
          local_54 = (undefined4 *)((int)local_b0 + local_4c * 0xc);
          local_24 = (int *)((int)local_c8 - (int)local_b0);
          local_e0 = (int)local_20 - (int)local_34;
          local_30 = (int *)0x0;
          do {
            pMVar23 = (MeshLOD *)(uint)*(ushort *)(local_e0 + (int)local_34);
            puVar28 = (undefined4 *)((int)local_54 + (int)local_24);
            puVar21 = (undefined4 *)(*(int *)(param_1 + 4) + (int)pMVar23 * 0xc);
            *puVar28 = *puVar21;
            puVar28[1] = puVar21[1];
            puVar28[2] = puVar21[2];
            puVar21 = (undefined4 *)(*(int *)(param_1 + 0xc) + (int)pMVar23 * 0xc);
            *local_54 = *puVar21;
            local_54[1] = puVar21[1];
            local_54[2] = puVar21[2];
            *(short *)local_34 = (short)local_30 + (short)local_4c;
            if (0 < (int)local_8c) {
              iVar8 = 0;
              local_2c = (int *)((int)local_7c + 0xc);
              local_48 = local_8c;
              do {
                iVar9 = *local_2c;
                iVar11 = *(int *)(*(int *)(param_1 + 0x14) + iVar8 + 0xc);
                *(undefined4 *)(local_3c + iVar9) = *(undefined4 *)(iVar11 + (int)pMVar23 * 8);
                *(undefined4 *)(local_3c + 4 + iVar9) =
                     *(undefined4 *)(iVar11 + 4 + (int)pMVar23 * 8);
                local_2c = local_2c + 4;
                iVar8 = iVar8 + 0x10;
                local_48 = (int *)((int)local_48 + -1);
              } while (local_48 != (int *)0x0);
            }
            local_2c = (int *)0x0;
            local_28 = (short *)0x0;
            local_d8 = pMVar23;
            iVar8 = FUN_36154960(param_1,(int)pMVar23,(int *)&local_28,(int *)&local_2c);
            if (iVar8 != 0) {
              local_44 = (int *)((int)local_30 + local_4c);
              do {
                psVar7 = local_28;
                puVar21 = local_84;
                local_108 = *(int *)(*(int *)(param_1 + 0x24) + (int)local_28 * 0xc + 8) +
                            (int)local_2c * 8;
                puVar28 = local_84 + (int)local_28 * 5 + 1;
                local_84[(int)local_28 * 5 + 3] = local_84[(int)local_28 * 5 + 3] + 1;
                iVar8 = FUN_3600c3d0(puVar28);
                if (iVar8 < (int)puVar21[(int)psVar7 * 5 + 3]) {
                  iVar8 = FUN_3600c3d0(puVar28);
                  FUN_3615a410(puVar28,iVar8 + puVar21[(int)psVar7 * 5 + 4]);
                }
                puVar21 = (undefined4 *)
                          (puVar21[(int)psVar7 * 5 + 2] + -8 + puVar21[(int)psVar7 * 5 + 3] * 8);
                puVar21[1] = *(undefined4 *)(local_108 + 4);
                *puVar21 = local_44;
                local_28 = (short *)((int)psVar7 + 1);
                iVar8 = FUN_36154960(param_1,(int)pMVar23,(int *)&local_28,(int *)&local_2c);
              } while (iVar8 != 0);
            }
            local_28 = (short *)0x0;
            local_2c = (int *)0x0;
            iVar8 = FUN_361549d0(param_1,(int)pMVar23,(int *)&local_28,(int *)&local_2c);
            if (iVar8 != 0) {
              local_44 = (int *)((int)local_30 + local_4c);
              do {
                psVar7 = local_28;
                puVar21 = local_64;
                iVar11 = (int)local_2c * 0x1c;
                iVar8 = *(int *)((int)local_28 * 0x10 + 0xc + *(int *)(param_1 + 0x2c));
                puVar28 = local_64 + (int)local_28 * 6 + 2;
                local_64[(int)local_28 * 6 + 4] = local_64[(int)local_28 * 6 + 4] + 1;
                iVar9 = FUN_3600c450(puVar28);
                if (iVar9 < (int)puVar21[(int)psVar7 * 6 + 4]) {
                  iVar9 = FUN_3600c450(puVar28);
                  FUN_3615a4a0(puVar28,iVar9 + puVar21[(int)psVar7 * 6 + 5]);
                }
                puVar21 = (undefined4 *)
                          (puVar21[(int)psVar7 * 6 + 3] + -0x1c +
                          puVar21[(int)psVar7 * 6 + 4] * 0x1c);
                puVar28 = (undefined4 *)(iVar11 + iVar8);
                puVar18 = puVar21;
                for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar18 = *puVar28;
                  puVar28 = puVar28 + 1;
                  puVar18 = puVar18 + 1;
                }
                *puVar21 = local_44;
                local_28 = (short *)((int)psVar7 + 1);
                iVar8 = FUN_361549d0(param_1,(int)local_d8,(int *)&local_28,(int *)&local_2c);
              } while (iVar8 != 0);
            }
            local_30 = (int *)((int)local_30 + 1);
            local_54 = local_54 + 3;
            local_3c = local_3c + 8;
            local_34 = (int *)((int)local_34 + 2);
          } while ((int)local_30 < 3);
          local_4c = local_4c + 3;
          iVar8 = FUN_36026a70((int)&local_78);
          iVar9 = 0;
          if (0 < iVar8) {
            do {
              piVar19 = (int *)(local_40[5] + *(int *)((int)local_74 + iVar9 * 4) * 4);
              if (*piVar19 == -1) {
                *piVar19 = 1;
                local_40[6] = local_40[6] + 1;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar8);
          }
LAB_361596cc:
          local_50 = (undefined4 *)((int)local_50 + 1);
          pMVar23 = param_1;
        } while ((int)local_50 < (int)local_104);
      }
      for (local_2c = (int *)0x0; (int)local_2c < 2; local_2c = (int *)((int)local_2c + 1)) {
        local_3c = (uint)(local_2c == (int *)0x0);
        piVar19 = &local_ac;
        if (local_3c == 0) {
          piVar19 = &local_9c;
        }
        puVar21 = (undefined4 *)FUN_3615a6e0((int)piVar19);
        local_40 = (int *)0x0;
        local_50 = puVar21;
        if (0 < (int)puVar21) {
          iVar9 = local_e8 + (int)puVar21;
          local_e8 = iVar9;
          iVar8 = FUN_3615a280(&local_f0);
          if (iVar8 < iVar9) {
            iVar8 = ((int)puVar21 + -1) / local_e4;
            iVar9 = FUN_3615a280(&local_f0);
            FUN_3615be60(&local_f0,iVar9 + local_e4 * (iVar8 + 1));
          }
          local_40 = (int *)((int)local_ec + (local_e8 - (int)puVar21) * 0x48);
        }
        for (local_24 = (int *)0x0; (int)local_24 < (int)puVar21;
            local_24 = (int *)((int)local_24 + 1)) {
          piVar19 = local_40 + (int)local_24 * 0x12;
          piVar15 = local_a8;
          if (local_3c == 0) {
            piVar15 = local_98;
          }
          piVar26 = piVar15 + (int)local_24 * 0x13;
          piVar19[2] = piVar15[(int)local_24 * 0x13 + 7];
          piVar19[0xd] = piVar26[8];
          local_48 = piVar19;
          local_44 = piVar26;
          FUN_360100e0(piVar19 + 4,piVar26 + 10);
          FUN_360100e0(piVar19 + 6,piVar26 + 0xc);
          FUN_3615ace0(piVar19 + 8,piVar26 + 0xe);
          FUN_36010b30(piVar19 + 10,piVar26 + 0x10);
          piVar19[0xc] = piVar26[0x12];
          piVar19[3] = 0;
          pcVar14 = (char *)piVar26[9];
          pcVar16 = pcVar14;
          do {
            cVar4 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar4 != '\0');
          if (pcVar16 != pcVar14 + 1 && -1 < (int)pcVar16 - (int)(pcVar14 + 1)) {
            local_8._0_1_ = 0x10;
            local_128 = StringDuplicate(pcVar14);
            local_124 = 0;
            local_8._0_1_ = 0x11;
            pCVar17 = CStock_CShader::Obtain_t(_pShaderStock,(CTFileName *)&local_128);
            piVar19[3] = (int)pCVar17;
            local_8 = CONCAT31(local_8._1_3_,0x10);
            StringFree(local_128);
          }
          local_8 = 10;
          ska_IDToString((long)&local_5c);
          local_8 = CONCAT31(local_8._1_3_,0x13);
          if (local_3c != 0) {
            piVar19[0xd] = piVar19[0xd] | 2;
          }
          *piVar19 = 0;
          piVar19[1] = local_10c;
          iVar8 = FUN_3615a5b0((int)piVar26);
          if (iVar8 != 0) {
            piVar19[0x10] = iVar8;
            iVar9 = thunk_FUN_361bf99c((iVar8 * 3 + 3) * 2);
            piVar19[0x11] = iVar9;
          }
          puVar21 = (undefined4 *)piVar26[1];
          puVar28 = (undefined4 *)piVar19[0x11];
          for (uVar10 = (uint)(iVar8 * 6) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar28 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar28 = puVar28 + 1;
          }
          for (uVar10 = iVar8 * 6 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar28 = *(undefined1 *)puVar21;
            puVar21 = (undefined4 *)((int)puVar21 + 1);
            puVar28 = (undefined4 *)((int)puVar28 + 1);
          }
          local_8 = CONCAT31(local_8._1_3_,10);
          StringFree((char *)local_5c);
          puVar21 = local_50;
        }
        pMVar23 = param_1;
      }
      if (local_78 != 0) {
        operator_delete__(local_74);
        local_78 = 0;
        local_74 = (void *)0x0;
      }
      if (local_c4 != 0) {
        operator_delete__(local_c0);
        local_c4 = 0;
        local_c0 = (void *)0x0;
      }
      local_8._0_1_ = 7;
      if (local_ac != 0) {
        if (local_a8 != (int *)0x0) {
          piVar19 = local_a8 + -1;
          _eh_vector_destructor_iterator_(local_a8,0x4c,local_a8[-1],FUN_3615b420);
          operator_delete__(piVar19);
        }
        local_ac = 0;
        local_a8 = (int *)0x0;
      }
      local_8._0_1_ = 6;
      if (local_9c != 0) {
        if (local_98 != (int *)0x0) {
          piVar19 = local_98 + -1;
          _eh_vector_destructor_iterator_(local_98,0x4c,local_98[-1],FUN_3615b420);
          operator_delete__(piVar19);
        }
        local_9c = 0;
        local_98 = (int *)0x0;
      }
    }
    FUN_3615a8f0(pMVar23,&local_cc);
    FUN_3615a9a0(pMVar23 + 8,&local_b4);
    FUN_3615b5d0(pMVar23 + 0x10,&local_80);
    pMVar2 = pMVar23 + 0x20;
    local_104 = pMVar2;
    if (*(int *)(pMVar23 + 0x20) != 0) {
      pvVar1 = *(void **)(pMVar23 + 0x24);
      if (pvVar1 != (void *)0x0) {
        local_5c = (int *)((int)pvVar1 + -4);
        _eh_vector_destructor_iterator_(pvVar1,0xc,*local_5c,MeshWeightMap::~MeshWeightMap);
        operator_delete__(local_5c);
      }
      *(undefined4 *)pMVar2 = 0;
      *(undefined4 *)(pMVar23 + 0x24) = 0;
    }
    pMVar2 = pMVar23 + 0x28;
    local_d8 = pMVar2;
    if (*(int *)(pMVar23 + 0x28) != 0) {
      pvVar1 = *(void **)(pMVar23 + 0x2c);
      if (pvVar1 != (void *)0x0) {
        local_5c = (int *)((int)pvVar1 + -4);
        _eh_vector_destructor_iterator_(pvVar1,0x10,*local_5c,MeshMorphMap::~MeshMorphMap);
        operator_delete__(local_5c);
      }
      *(undefined4 *)pMVar2 = 0;
      *(undefined4 *)(pMVar23 + 0x2c) = 0;
    }
    if (*(int *)(pMVar23 + 0x30) != 0) {
      operator_delete__(*(void **)(pMVar23 + 0x34));
      *(undefined4 *)(pMVar23 + 0x30) = 0;
      *(undefined4 *)(pMVar23 + 0x34) = 0;
    }
    local_24 = (int *)FUN_3615a6d0((int)&local_f0);
    pMVar2 = pMVar23 + 0x18;
    if (*(int *)pMVar2 != 0) {
      pvVar1 = *(void **)(pMVar23 + 0x1c);
      if (pvVar1 != (void *)0x0) {
        local_5c = (int *)((int)pvVar1 + -4);
        _eh_vector_destructor_iterator_(pvVar1,0x48,*local_5c,MeshSurface::~MeshSurface);
        operator_delete__(local_5c);
      }
      *(int *)pMVar2 = 0;
      *(undefined4 *)(pMVar23 + 0x1c) = 0;
    }
    FUN_3615b0f0(pMVar2,(int)local_24);
    if (0 < (int)local_24) {
      iVar8 = 0;
      local_38 = local_24;
      do {
        MeshSurface::operator=
                  ((MeshSurface *)(*(int *)(pMVar23 + 0x1c) + iVar8),
                   (MeshSurface *)(iVar8 + (int)local_ec));
        iVar8 = iVar8 + 0x48;
        local_38 = (int *)((int)local_38 + -1);
      } while (local_38 != (int *)0x0);
    }
    iVar8 = local_58;
    if ((0 < local_58) && (FUN_3615b170(local_104,local_58), 0 < iVar8)) {
      local_24 = (int *)0x0;
      puVar21 = local_84 + 2;
      local_38 = (int *)iVar8;
      do {
        puVar28 = (undefined4 *)(*(int *)(param_1 + 0x24) + (int)local_24);
        *puVar28 = puVar21[-2];
        iVar8 = FUN_3615a610((int)(puVar21 + -1));
        if (0 < iVar8) {
          puVar28[1] = iVar8;
          puVar18 = (undefined4 *)thunk_FUN_361bf99c(iVar8 * 8 + 8);
          puVar28[2] = puVar18;
          puVar28 = (undefined4 *)*puVar21;
          for (uVar10 = (uint)(iVar8 * 8) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar18 = *puVar28;
            puVar28 = puVar28 + 1;
            puVar18 = puVar18 + 1;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)puVar18 = *(undefined1 *)puVar28;
            puVar28 = (undefined4 *)((int)puVar28 + 1);
            puVar18 = (undefined4 *)((int)puVar18 + 1);
          }
        }
        local_24 = (int *)((int)local_24 + 0xc);
        puVar21 = puVar21 + 5;
        local_38 = (int *)((int)local_38 + -1);
      } while (local_38 != (int *)0x0);
    }
    piVar19 = local_dc;
    pMVar23 = param_1;
    if ((0 < (int)local_dc) &&
       (FUN_3615b1f0(local_d8,(int)local_dc), pMVar23 = param_1, 0 < (int)piVar19)) {
      local_24 = (int *)0x0;
      puVar21 = local_64 + 2;
      local_38 = piVar19;
      do {
        puVar28 = (undefined4 *)(*(int *)(pMVar23 + 0x2c) + (int)local_24);
        *puVar28 = puVar21[-2];
        puVar28[1] = puVar21[-1];
        iVar8 = FUN_3615a670((int)puVar21);
        if (0 < iVar8) {
          puVar28[2] = iVar8;
          puVar18 = (undefined4 *)thunk_FUN_361bf99c(iVar8 * 0x1c + 0x1c);
          puVar28[3] = puVar18;
          puVar28 = (undefined4 *)puVar21[1];
          for (uVar10 = (uint)(iVar8 * 0x1c) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar18 = *puVar28;
            puVar28 = puVar28 + 1;
            puVar18 = puVar18 + 1;
          }
          for (iVar8 = 0; pMVar23 = param_1, iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)puVar18 = *(undefined1 *)puVar28;
            puVar28 = (undefined4 *)((int)puVar28 + 1);
            puVar18 = (undefined4 *)((int)puVar18 + 1);
          }
        }
        local_24 = (int *)((int)local_24 + 0x10);
        puVar21 = puVar21 + 6;
        local_38 = (int *)((int)local_38 + -1);
      } while (local_38 != (int *)0x0);
      local_38 = (int *)0x0;
    }
    puVar21 = local_64;
    *(uint *)(pMVar23 + 0x48) = *(uint *)(pMVar23 + 0x48) & 0xfffffff7;
    FUN_36158730((int)pMVar23);
    if (local_100 != 0) {
      operator_delete__(local_fc);
    }
    local_8._0_1_ = 4;
    if ((local_f0 != 0) && (local_ec != (void *)0x0)) {
      pvVar1 = (void *)((int)local_ec + -4);
      _eh_vector_destructor_iterator_
                (local_ec,0x48,*(int *)((int)local_ec + -4),MeshSurface::~MeshSurface);
      operator_delete__(pvVar1);
    }
    if ((local_68 != 0) && (puVar21 != (undefined4 *)0x0)) {
      iVar8 = puVar21[-1];
LAB_36159e1d:
      local_8._0_1_ = 3;
      _eh_vector_destructor_iterator_(puVar21,0x18,iVar8,FUN_3615b370);
      operator_delete__(puVar21 + -1);
    }
LAB_36159e2b:
    local_8._0_1_ = 2;
    if ((local_88 != 0) && (local_84 != (undefined4 *)0x0)) {
      puVar21 = local_84 + -1;
      _eh_vector_destructor_iterator_(local_84,0x14,local_84[-1],FUN_3615b320);
      operator_delete__(puVar21);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if ((local_80 != 0) && (local_7c != (void *)0x0)) {
      pvVar1 = (void *)((int)local_7c + -4);
      _eh_vector_destructor_iterator_
                (local_7c,0x10,*(int *)((int)local_7c + -4),MeshUVMap::~MeshUVMap);
      operator_delete__(pvVar1);
    }
    if (local_b4 != 0) {
      operator_delete__(local_b0);
    }
    if (local_cc != 0) {
      operator_delete__(local_c8);
    }
  }
  ExceptionList = local_10;
  return;
code_r0x36158e38:
  local_24 = (int *)((int)local_24 + 1);
  piVar19 = piVar19 + 0x13;
  local_2c = piVar19;
  if ((int)local_28 <= (int)local_24) goto LAB_36159152;
  goto LAB_36158de0;
}

