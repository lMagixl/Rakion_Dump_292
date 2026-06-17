
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361692e0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  int iVar34;
  float *pfVar35;
  int iVar36;
  byte *pbVar37;
  undefined4 *puVar38;
  float *pfVar39;
  float *pfVar40;
  undefined4 *puVar41;
  uint uVar42;
  float *pfVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  float *pfVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int *piVar51;
  float local_1c4 [12];
  float local_194 [12];
  float local_164 [3];
  undefined4 local_158;
  undefined4 local_148;
  undefined4 local_138;
  float local_134 [3];
  undefined4 local_128;
  undefined4 local_118;
  undefined4 local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float *local_98;
  float local_94;
  float local_90;
  float local_8c;
  float *local_88;
  float *local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float *local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 *local_4c;
  float *local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  float *local_38;
  float *local_34;
  undefined4 *local_30;
  int local_2c;
  float *local_28;
  float *local_24;
  byte *local_20;
  undefined4 *local_1c;
  int local_18;
  float *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621a5a8;
  local_10 = ExceptionList;
  _DAT_362fe178 = param_1[0x18];
  local_88 = (float *)(param_1 + 0x18);
  _DAT_362fe17c = param_1[0x19];
  _DAT_362fe180 = param_1[0x1a];
  _DAT_362fe184 = param_1[0x1b];
  _DAT_362fe188 = param_1[0x1c];
  _DAT_362fe18c = param_1[0x1d];
  _DAT_362fe190 = param_1[0x1e];
  _DAT_362fe194 = param_1[0x1f];
  _DAT_362fe198 = param_1[0x20];
  _DAT_362fe19c = param_1[0x21];
  _DAT_362fe1a0 = param_1[0x22];
  _DAT_362fe1a4 = param_1[0x23];
  _DAT_362fe20c = DAT_362fe200;
  _DAT_362fe210 = DAT_362fe204;
  _DAT_362fe214 = DAT_362fe208;
  DAT_362fe9e8 = (undefined4 *)0x0;
  DAT_362fe9f8 = 0;
  DAT_362fea08 = 0;
  DAT_362fea18 = 0;
  DAT_362fea28 = 0;
  DAT_362fea38 = 0;
  DAT_362fe1d0 = (undefined4 *)0x0;
  DAT_362fe1d4 = (undefined4 *)0x0;
  DAT_362fe1d8 = (undefined4 *)0x0;
  DAT_362fe1dc = (undefined4 *)0x0;
  DAT_362fe1e0 = 0;
  DAT_362fe1e4 = 0;
  local_44 = param_2[6] * 0x54 + *(int *)(*(int *)*param_2 + 0x18);
  if ((DAT_362fe1ac != 0) && ((*(byte *)(local_44 + 0x48) & 4) == 0)) {
    DAT_362fe1ac = 0;
  }
  local_24 = (float *)param_2[3];
  iVar44 = param_2[5];
  iVar36 = **(int **)(param_2[1] * 0x8c + DAT_362fe994);
  local_18 = 0;
  ExceptionList = &local_10;
  if ((iVar36 != 0) && (ExceptionList = &local_10, -1 < param_3)) {
    ExceptionList = &local_10;
    local_18 = FUN_3600c550((undefined4 *)(*(int *)(iVar36 + 0x18) + 4 + param_3 * 0x18));
  }
  puVar41 = DAT_362fe1c8;
  if (DAT_362a4128 == 0) {
    local_24 = (float *)0x0;
    iVar44 = 0;
    local_18 = 0;
  }
  iVar36 = param_2[4];
  local_34 = (float *)(iVar36 + iVar44);
  if ((DAT_362a412c != 0) && (0 < iVar44)) {
    if (iVar36 < (int)local_34) {
      pfVar35 = (float *)(DAT_362fe9c4 + 4 + iVar36 * 0xc);
      do {
        if (_DAT_362253e4 <= *pfVar35) {
          DAT_362fe1e0 = 1;
          local_3c = DAT_362fe1c8;
          DAT_362fe9e8 = DAT_362fe1c8;
          iVar34 = FUN_3615a190((undefined4 *)&DAT_362fe9e0);
          iVar44 = DAT_362fe9ec;
          puVar38 = puVar41;
          iVar36 = 0;
          if (iVar34 < (int)puVar41) {
            iVar36 = ((int)puVar41 + -1) / DAT_362fe9ec;
            iVar34 = FUN_3615a190((undefined4 *)&DAT_362fe9e0);
            FUN_36162540(&DAT_362fe9e0,iVar34 + (iVar36 + 1) * iVar44);
            puVar41 = DAT_362fe9e8;
            puVar38 = DAT_362fe1c8;
            iVar36 = DAT_362fe9f8;
          }
          DAT_362fe1d8 = (undefined4 *)(DAT_362fe9e4 + ((int)puVar41 - (int)local_3c) * 0xc);
          iVar36 = iVar36 + (int)puVar38;
          DAT_362fe9f8 = iVar36;
          iVar34 = FUN_3615a200((undefined4 *)&DAT_362fe9f0);
          iVar44 = DAT_362fe9fc;
          if (iVar34 < iVar36) {
            iVar36 = ((int)puVar38 + -1) / DAT_362fe9fc;
            iVar34 = FUN_3615a200((undefined4 *)&DAT_362fe9f0);
            FUN_3616e9c0(&DAT_362fe9f0,iVar34 + (iVar36 + 1) * iVar44);
            iVar36 = DAT_362fe9f8;
          }
          DAT_362fe1dc = (undefined4 *)(DAT_362fe9f4 + (iVar36 - (int)puVar38) * 0xc);
          iVar44 = FUN_3615a280((undefined4 *)(local_44 + 0x18));
          if (0 < iVar44) {
            local_14 = (float *)0x0;
            local_2c = iVar44;
            do {
              pbVar37 = (byte *)(*(int *)(local_44 + 0x1c) + (int)local_14);
              local_84 = (float *)(*(uint *)(pbVar37 + 0x34) & 2);
              if (local_84 != (float *)0x0) {
                iVar44 = *(int *)pbVar37;
                iVar36 = *(int *)(pbVar37 + 4);
                puVar38 = (undefined4 *)(DAT_362fe9e4 + iVar44 * 0xc);
                local_38 = (float *)(iVar36 * 3);
                puVar41 = DAT_362fe1bc + iVar44 * 3;
                pfVar35 = local_38;
                if (local_38 != (float *)0x0) {
                  for (; pfVar35 != (float *)0x0; pfVar35 = (float *)((int)pfVar35 + -1)) {
                    *puVar38 = *puVar41;
                    puVar41 = puVar41 + 1;
                    puVar38 = puVar38 + 1;
                  }
                }
                local_3c = (undefined4 *)(DAT_362fe9f4 + iVar44 * 0xc);
                local_40 = DAT_362fe1c0 + iVar44 * 3;
                pfVar35 = local_38;
                puVar41 = local_40;
                puVar38 = local_3c;
                if (local_38 != (float *)0x0) {
                  for (; pfVar35 != (float *)0x0; pfVar35 = (float *)((int)pfVar35 + -1)) {
                    *puVar38 = *puVar41;
                    puVar41 = puVar41 + 1;
                    puVar38 = puVar38 + 1;
                  }
                }
                DAT_362fe1e4 = DAT_362fe1e4 + iVar36;
              }
              local_14 = local_14 + 0x12;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          if (DAT_362fe1e0 != 0) {
            iVar44 = param_2[4];
            if (iVar44 < (int)local_34) {
              local_1c = (undefined4 *)(iVar44 * 0xc);
              local_34 = (float *)((int)local_34 - iVar44);
              do {
                piVar51 = (int *)((int)local_1c + DAT_362fe9c4);
                if (_DAT_362253e4 <= *(float *)((int)local_1c + DAT_362fe9c4 + 4)) {
                  iVar44 = *piVar51;
                  iVar36 = 0;
                  if (*(int *)(iVar44 + 4) == 0) {
                    iVar34 = FUN_3600c450((undefined4 *)(iVar44 + 8));
                    if (0 < iVar34) {
                      local_2c = 0;
                      do {
                        piVar1 = (int *)(*(int *)(iVar44 + 0xc) + local_2c);
                        iVar44 = *piVar1;
                        local_2c = local_2c + 0x1c;
                        iVar36 = iVar36 + 1;
                        DAT_362fe1d8[iVar44 * 3] =
                             (float)piVar1[1] * (float)piVar51[1] +
                             (_DAT_36223384 - (float)piVar51[1]) * (float)DAT_362fe1d8[iVar44 * 3];
                        DAT_362fe1d8[iVar44 * 3 + 1] =
                             (float)piVar1[2] * (float)piVar51[1] +
                             (_DAT_36223384 - (float)piVar51[1]) *
                             (float)DAT_362fe1d8[iVar44 * 3 + 1];
                        DAT_362fe1d8[iVar44 * 3 + 2] =
                             (float)piVar1[3] * (float)piVar51[1] +
                             (_DAT_36223384 - (float)piVar51[1]) *
                             (float)DAT_362fe1d8[iVar44 * 3 + 2];
                        DAT_362fe1dc[iVar44 * 3] =
                             (float)piVar1[4] * (float)piVar51[1] +
                             (_DAT_36223384 - (float)piVar51[1]) * (float)DAT_362fe1dc[iVar44 * 3];
                        DAT_362fe1dc[iVar44 * 3 + 1] =
                             (float)piVar1[5] * (float)piVar51[1] +
                             (_DAT_36223384 - (float)piVar51[1]) *
                             (float)DAT_362fe1dc[iVar44 * 3 + 1];
                        DAT_362fe1dc[iVar44 * 3 + 2] =
                             (float)piVar1[6] * (float)piVar51[1] +
                             (_DAT_36223384 - (float)piVar51[1]) *
                             (float)DAT_362fe1dc[iVar44 * 3 + 2];
                        iVar44 = *piVar51;
                        iVar34 = FUN_3600c450((undefined4 *)(iVar44 + 8));
                      } while (iVar36 < iVar34);
                    }
                  }
                  else {
                    iVar34 = FUN_3600c450((undefined4 *)(iVar44 + 8));
                    if (0 < iVar34) {
                      local_14 = (float *)0x0;
                      do {
                        puVar41 = DAT_362fe1bc;
                        iVar44 = *(int *)(iVar44 + 0xc);
                        iVar34 = *(int *)(iVar44 + (int)local_14);
                        iVar36 = iVar36 + 1;
                        DAT_362fe1d8[iVar34 * 3] =
                             (*(float *)(iVar44 + 4 + (int)local_14) -
                             (float)DAT_362fe1bc[iVar34 * 3]) * (float)piVar51[1] +
                             (float)DAT_362fe1d8[iVar34 * 3];
                        DAT_362fe1d8[iVar34 * 3 + 1] =
                             (*(float *)((int)local_14 + iVar44 + 8) -
                             (float)puVar41[iVar34 * 3 + 1]) * (float)piVar51[1] +
                             (float)DAT_362fe1d8[iVar34 * 3 + 1];
                        puVar38 = DAT_362fe1c0;
                        DAT_362fe1d8[iVar34 * 3 + 2] =
                             (*(float *)((int)local_14 + iVar44 + 0xc) -
                             (float)puVar41[iVar34 * 3 + 2]) * (float)piVar51[1] +
                             (float)DAT_362fe1d8[iVar34 * 3 + 2];
                        DAT_362fe1dc[iVar34 * 3] =
                             (*(float *)((int)local_14 + iVar44 + 0x10) - (float)puVar38[iVar34 * 3]
                             ) * (float)piVar51[1] + (float)DAT_362fe1dc[iVar34 * 3];
                        DAT_362fe1dc[iVar34 * 3 + 1] =
                             (*(float *)((int)local_14 + iVar44 + 0x14) -
                             (float)puVar38[iVar34 * 3 + 1]) * (float)piVar51[1] +
                             (float)DAT_362fe1dc[iVar34 * 3 + 1];
                        pfVar35 = (float *)((int)local_14 + iVar44 + 0x18);
                        local_14 = local_14 + 7;
                        DAT_362fe1dc[iVar34 * 3 + 2] =
                             (*pfVar35 - (float)puVar38[iVar34 * 3 + 2]) * (float)piVar51[1] +
                             (float)DAT_362fe1dc[iVar34 * 3 + 2];
                        iVar44 = *piVar51;
                        iVar34 = FUN_3600c450((undefined4 *)(iVar44 + 8));
                      } while (iVar36 < iVar34);
                    }
                  }
                }
                local_1c = local_1c + 3;
                local_34 = (float *)((int)local_34 + -1);
              } while (local_34 != (float *)0x0);
            }
            if (DAT_362fe1ac != 0) {
              FUN_36162dd0();
              puVar38 = (undefined4 *)(*DAT_362c46c8)(DAT_362a6bc4,0,DAT_362fe1e4,0x66);
              puVar41 = DAT_362fe1d8;
              for (uVar42 = DAT_362fe1e4 * 3 & 0x3fffffff; uVar42 != 0; uVar42 = uVar42 - 1) {
                *puVar38 = *puVar41;
                puVar41 = puVar41 + 1;
                puVar38 = puVar38 + 1;
              }
              for (iVar44 = 0; iVar44 != 0; iVar44 = iVar44 + -1) {
                *(undefined1 *)puVar38 = *(undefined1 *)puVar41;
                puVar41 = (undefined4 *)((int)puVar41 + 1);
                puVar38 = (undefined4 *)((int)puVar38 + 1);
              }
              (*DAT_362c46cc)(DAT_362a6bc4,0);
              puVar38 = (undefined4 *)(*DAT_362c46c8)(DAT_362a6bc8,0,DAT_362fe1e4,0x66);
              uVar33 = DAT_362a6bc8;
              puVar41 = DAT_362fe1dc;
              for (uVar42 = DAT_362fe1e4 * 3 & 0x3fffffff; uVar42 != 0; uVar42 = uVar42 - 1) {
                *puVar38 = *puVar41;
                puVar41 = puVar41 + 1;
                puVar38 = puVar38 + 1;
              }
              for (iVar44 = 0; iVar44 != 0; iVar44 = iVar44 + -1) {
                *(undefined1 *)puVar38 = *(undefined1 *)puVar41;
                puVar41 = (undefined4 *)((int)puVar41 + 1);
                puVar38 = (undefined4 *)((int)puVar38 + 1);
              }
              (*DAT_362c46cc)(uVar33,0);
            }
          }
          goto LAB_36169930;
        }
        iVar36 = iVar36 + 1;
        pfVar35 = pfVar35 + 3;
      } while (iVar36 < (int)local_34);
    }
    DAT_362fe1d8 = DAT_362fe1bc;
    DAT_362fe1dc = DAT_362fe1c0;
  }
LAB_36169930:
  puVar41 = DAT_362fe1c8;
  if ((0 < local_18) && (0 < (int)local_24)) {
    FUN_36168f20((int)param_1,(int)param_2,local_44);
    puVar41 = DAT_362fe1c8;
    if (DAT_362fe1ac == 0) {
      iVar44 = DAT_362fea08 + (int)DAT_362fe1c8;
      DAT_362fea08 = iVar44;
      iVar36 = FUN_3615a190((undefined4 *)&DAT_362fea00);
      puVar38 = puVar41;
      if (iVar36 < iVar44) {
        iVar44 = FUN_3615a190((undefined4 *)&DAT_362fea00);
        FUN_36162540(&DAT_362fea00,iVar44 + (((int)puVar41 + -1) / DAT_362fea0c + 1) * DAT_362fea0c)
        ;
        iVar44 = DAT_362fea08;
        puVar38 = DAT_362fe1c8;
      }
      DAT_362fe1d0 = (undefined4 *)(DAT_362fea04 + (iVar44 - (int)puVar41) * 0xc);
      iVar44 = DAT_362fea18 + (int)puVar38;
      DAT_362fea18 = iVar44;
      iVar36 = FUN_3615a200((undefined4 *)&DAT_362fea10);
      if (iVar36 < iVar44) {
        iVar44 = FUN_3615a200((undefined4 *)&DAT_362fea10);
        FUN_3616e9c0(&DAT_362fea10,iVar44 + (((int)puVar38 + -1) / DAT_362fea1c + 1) * DAT_362fea1c)
        ;
        iVar44 = DAT_362fea18;
      }
      DAT_362fe1d4 = (undefined4 *)(DAT_362fea14 + (iVar44 - (int)puVar38) * 0xc);
      iVar44 = FUN_3615a280((undefined4 *)(local_44 + 0x18));
      if (0 < iVar44) {
        local_40 = (undefined4 *)0x0;
        local_2c = 0;
        local_3c = (undefined4 *)iVar44;
        do {
          puVar41 = (undefined4 *)(*(int *)(local_44 + 0x1c) + local_2c);
          iVar44 = *(int *)((int)local_40 + DAT_362fea34 + 4) * 0x30 + DAT_362fea24;
          pfVar35 = *(float **)((int)local_40 + DAT_362fea34 + 8);
          pfVar40 = (float *)*puVar41;
          local_14 = (float *)puVar41[1];
          if (DAT_362a6bbc < 1) {
            local_18 = 1;
          }
          else {
            local_18 = DAT_362a6bbc;
            if (DAT_362a4134 < DAT_362a6bbc) {
              local_18 = DAT_362a4134;
            }
          }
          if (((*(byte *)(puVar41 + 0xd) & 2) == 0) || (DAT_362fe1e0 == 0)) {
            local_1c = DAT_362fe1d0;
            param_1 = DAT_362fe1d4;
            puVar41 = DAT_362fe1bc;
            puVar38 = DAT_362fe1c0;
          }
          else {
            param_1 = DAT_362fe1dc;
            local_1c = DAT_362fe1d8;
            puVar41 = DAT_362fe1d8;
            puVar38 = DAT_362fe1dc;
          }
          local_34 = pfVar35;
          local_30 = puVar38;
          local_28 = pfVar40;
          if (local_18 == 1) {
            local_20 = (byte *)((int)local_14 + (int)pfVar40);
            local_24 = pfVar40;
            if ((int)pfVar40 < (int)local_20) {
              local_14 = (float *)(param_1 + (int)pfVar40 * 3);
              local_48 = (float *)(puVar38 + (int)pfVar40 * 3 + 1);
              local_38 = (float *)((int)local_1c - (int)puVar41);
              local_18 = (int)puVar38 - (int)puVar41;
              local_28 = (float *)((int)param_1 - (int)puVar41);
              local_34 = (float *)(puVar41 + (int)pfVar40 * 3 + 2);
              local_30 = (undefined4 *)((int)local_1c - (int)puVar38);
              iVar36 = (int)local_1c - (int)param_1;
              do {
                fVar2 = local_34[-2];
                uVar42 = (uint)*(byte *)(DAT_362fe1c4 + (int)pfVar40 * 8);
                fVar3 = local_34[-1];
                fVar4 = *local_34;
                pfVar39 = (float *)(uVar42 * 0x30 + iVar44);
                pfVar43 = (float *)((uVar42 + (int)pfVar35) * 0x30 + iVar44);
                *(float *)(iVar36 + (int)local_14) =
                     fVar2 * *pfVar39 + fVar3 * pfVar39[1] + fVar4 * pfVar39[2] + pfVar39[3];
                *(float *)((int)local_30 + (int)local_48) =
                     fVar3 * pfVar39[5] + fVar2 * pfVar39[4] + fVar4 * pfVar39[6] + pfVar39[7];
                *(float *)((int)local_38 + (int)local_34) =
                     fVar3 * pfVar39[9] + fVar2 * pfVar39[8] + fVar4 * pfVar39[10] + pfVar39[0xb];
                fVar2 = local_48[-1];
                fVar3 = *local_48;
                fVar4 = *(float *)(local_18 + (int)local_34);
                *local_14 = fVar2 * *pfVar43 + fVar3 * pfVar43[1] + fVar4 * pfVar43[2];
                *(float *)(((int)param_1 - (int)puVar38) + (int)local_48) =
                     fVar2 * pfVar43[4] + fVar3 * pfVar43[5] + fVar4 * pfVar43[6];
                pfVar40 = (float *)((int)pfVar40 + 1);
                *(float *)((int)local_28 + (int)local_34) =
                     fVar2 * pfVar43[8] + fVar3 * pfVar43[9] + fVar4 * pfVar43[10];
                local_48 = local_48 + 3;
                local_34 = local_34 + 3;
                local_14 = local_14 + 3;
                local_24 = pfVar40;
                local_1c = (undefined4 *)((int)param_1 - (int)puVar38);
              } while ((int)pfVar40 < (int)local_20);
            }
          }
          else if (local_18 == 2) {
            local_20 = (byte *)((int)local_14 + (int)pfVar40);
            if ((int)pfVar40 < (int)local_20) {
              local_24 = (float *)(puVar38 + (int)pfVar40 * 3);
              local_48 = (float *)(puVar41 + (int)pfVar40 * 3 + 2);
              local_14 = (float *)(DAT_362fe1c4 + 4 + (int)pfVar40 * 8);
              local_18 = (int)puVar38 - (int)puVar41;
              local_30 = (undefined4 *)((int)local_1c - (int)puVar38);
              local_1c = (undefined4 *)((int)param_1 - (int)puVar38);
              param_1 = (undefined4 *)(local_20 + -(int)pfVar40);
              do {
                local_28 = (float *)(uint)*(byte *)local_14;
                fVar16 = (float)(int)local_28 * _DAT_362287a4;
                pfVar40 = (float *)((uint)*(byte *)(local_14 + -1) * 0x30 + iVar44);
                fVar17 = _DAT_36223384 - fVar16;
                pfVar39 = (float *)((uint)*(byte *)((int)local_14 + -3) * 0x30 + iVar44);
                fVar2 = local_48[-2];
                fVar3 = local_48[-1];
                fVar4 = *local_48;
                pfVar43 = (float *)(((uint)*(byte *)(local_14 + -1) + (int)pfVar35) * 0x30 + iVar44)
                ;
                pfVar47 = (float *)(((uint)*(byte *)((int)local_14 + -3) + (int)pfVar35) * 0x30 +
                                   iVar44);
                fVar5 = pfVar40[10];
                fVar6 = pfVar40[9];
                fVar7 = pfVar40[8];
                fVar8 = pfVar40[0xb];
                fVar9 = local_48[-2];
                fVar10 = local_48[-1];
                fVar11 = *local_48;
                local_a4 = (fVar9 * *pfVar39 + fVar10 * pfVar39[1] + fVar11 * pfVar39[2] +
                           pfVar39[3]) * fVar17 +
                           (fVar2 * *pfVar40 + fVar3 * pfVar40[1] + fVar4 * pfVar40[2] + pfVar40[3])
                           * fVar16;
                local_a0 = (fVar9 * pfVar39[4] + fVar10 * pfVar39[5] + fVar11 * pfVar39[6] +
                           pfVar39[7]) * fVar17 +
                           (fVar2 * pfVar40[4] + fVar3 * pfVar40[5] + fVar4 * pfVar40[6] +
                           pfVar40[7]) * fVar16;
                fVar12 = pfVar39[10];
                fVar13 = pfVar39[9];
                fVar14 = pfVar39[8];
                fVar15 = pfVar39[0xb];
                pfVar40 = (float *)((int)local_24 + (int)local_30);
                *pfVar40 = local_a4;
                pfVar40[1] = local_a0;
                local_9c = (fVar9 * fVar14 + fVar10 * fVar13 + fVar11 * fVar12 + fVar15) * fVar17 +
                           (fVar2 * fVar7 + fVar3 * fVar6 + fVar4 * fVar5 + fVar8) * fVar16;
                pfVar40[2] = local_9c;
                fVar2 = *local_24;
                fVar3 = local_24[1];
                fVar4 = *(float *)((int)local_48 + local_18);
                fVar5 = pfVar43[10];
                fVar6 = pfVar43[9];
                fVar7 = pfVar43[8];
                fVar8 = *local_24;
                fVar9 = local_24[1];
                fVar10 = *(float *)((int)local_48 + local_18);
                local_94 = (fVar8 * *pfVar47 + fVar9 * pfVar47[1] + fVar10 * pfVar47[2]) * fVar17 +
                           (fVar2 * *pfVar43 + fVar3 * pfVar43[1] + fVar4 * pfVar43[2]) * fVar16;
                pfVar40 = (float *)((int)local_1c + (int)local_24);
                local_24 = local_24 + 3;
                local_48 = local_48 + 3;
                local_90 = (fVar8 * pfVar47[4] + fVar9 * pfVar47[5] + fVar10 * pfVar47[6]) * fVar17
                           + (fVar2 * pfVar43[4] + fVar3 * pfVar43[5] + fVar4 * pfVar43[6]) * fVar16
                ;
                fVar11 = pfVar47[10];
                fVar12 = pfVar47[9];
                fVar13 = pfVar47[8];
                *pfVar40 = local_94;
                pfVar40[1] = local_90;
                local_14 = local_14 + 2;
                param_1 = (undefined4 *)((int)param_1 + -1);
                local_8c = (fVar8 * fVar13 + fVar9 * fVar12 + fVar10 * fVar11) * fVar17 +
                           (fVar2 * fVar7 + fVar3 * fVar6 + fVar4 * fVar5) * fVar16;
                pfVar40[2] = local_8c;
              } while (param_1 != (undefined4 *)0x0);
            }
          }
          else if (local_18 == 3) {
            local_20 = (byte *)((int)local_14 + (int)pfVar40);
            if ((int)pfVar40 < (int)local_20) {
              local_18 = (int)puVar38 - (int)puVar41;
              local_14 = (float *)(DAT_362fe1c4 + 2 + (int)pfVar40 * 8);
              local_20 = (byte *)((int)local_20 - (int)pfVar40);
              local_48 = (float *)(puVar41 + (int)pfVar40 * 3 + 2);
              local_24 = (float *)(puVar38 + (int)pfVar40 * 3);
              do {
                fVar23 = (float)*(byte *)((int)local_14 + 2) * _DAT_362287a4;
                local_28 = (float *)(((uint)*(byte *)((int)local_14 + -2) + (int)pfVar35) * 0x30 +
                                    iVar44);
                fVar24 = (float)*(byte *)((int)local_14 + 3) * _DAT_362287a4;
                local_38 = (float *)(((uint)*(byte *)((int)local_14 + -1) + (int)pfVar35) * 0x30 +
                                    iVar44);
                fVar25 = _DAT_36223384 - (fVar24 + fVar23);
                pfVar40 = (float *)((uint)*(byte *)((int)local_14 + -2) * 0x30 + iVar44);
                fVar2 = local_48[-2];
                fVar3 = local_48[-1];
                fVar4 = *local_48;
                pfVar39 = (float *)((uint)*(byte *)((int)local_14 + -1) * 0x30 + iVar44);
                pfVar47 = (float *)((uint)*(byte *)local_14 * 0x30 + iVar44);
                pfVar43 = (float *)(((int)pfVar35 + (uint)*(byte *)local_14) * 0x30 + iVar44);
                fVar5 = pfVar40[10];
                fVar6 = pfVar40[9];
                fVar7 = pfVar40[8];
                fVar8 = pfVar40[0xb];
                fVar9 = local_48[-2];
                fVar10 = local_48[-1];
                fVar11 = *local_48;
                fVar12 = pfVar39[10];
                fVar13 = pfVar39[9];
                fVar14 = pfVar39[8];
                fVar15 = pfVar39[0xb];
                fVar16 = local_48[-2];
                fVar17 = local_48[-1];
                fVar18 = *local_48;
                local_80 = (fVar16 * *pfVar47 + fVar17 * pfVar47[1] + fVar18 * pfVar47[2] +
                           pfVar47[3]) * fVar25 +
                           (fVar9 * *pfVar39 + fVar10 * pfVar39[1] + fVar11 * pfVar39[2] +
                           pfVar39[3]) * fVar24 +
                           (fVar2 * *pfVar40 + fVar3 * pfVar40[1] + fVar4 * pfVar40[2] + pfVar40[3])
                           * fVar23;
                local_7c = (fVar16 * pfVar47[4] + fVar17 * pfVar47[5] + fVar18 * pfVar47[6] +
                           pfVar47[7]) * fVar25 +
                           (fVar9 * pfVar39[4] + fVar10 * pfVar39[5] + fVar11 * pfVar39[6] +
                           pfVar39[7]) * fVar24 +
                           (fVar2 * pfVar40[4] + fVar3 * pfVar40[5] + fVar4 * pfVar40[6] +
                           pfVar40[7]) * fVar23;
                fVar19 = pfVar47[10];
                fVar20 = pfVar47[9];
                fVar21 = pfVar47[8];
                fVar22 = pfVar47[0xb];
                pfVar40 = (float *)(((int)local_1c - (int)puVar38) + (int)local_24);
                *pfVar40 = local_80;
                local_78 = (fVar16 * fVar21 + fVar17 * fVar20 + fVar18 * fVar19 + fVar22) * fVar25 +
                           (fVar9 * fVar14 + fVar10 * fVar13 + fVar11 * fVar12 + fVar15) * fVar24 +
                           (fVar2 * fVar7 + fVar3 * fVar6 + fVar4 * fVar5 + fVar8) * fVar23;
                pfVar40[1] = local_7c;
                pfVar40[2] = local_78;
                fVar2 = *local_24;
                fVar3 = local_24[1];
                fVar4 = *(float *)((int)local_48 + local_18);
                fVar5 = local_28[10];
                fVar6 = local_28[9];
                fVar7 = local_28[8];
                fVar8 = *local_24;
                fVar9 = local_24[1];
                fVar10 = *(float *)((int)local_48 + local_18);
                fVar11 = local_38[10];
                fVar12 = local_38[9];
                pfVar47 = local_48 + 3;
                fVar13 = local_38[8];
                pfVar40 = (float *)(((int)param_1 - (int)puVar38) + (int)local_24);
                pfVar39 = local_24 + 3;
                fVar14 = *local_24;
                fVar15 = local_24[1];
                fVar16 = *(float *)((int)local_48 + local_18);
                local_74 = (fVar14 * *pfVar43 + fVar15 * pfVar43[1] + fVar16 * pfVar43[2]) * fVar25
                           + (fVar8 * *local_38 + fVar9 * local_38[1] + fVar10 * local_38[2]) *
                             fVar24 + (fVar2 * *local_28 + fVar3 * local_28[1] + fVar4 * local_28[2]
                                      ) * fVar23;
                local_70 = (fVar14 * pfVar43[4] + fVar15 * pfVar43[5] + fVar16 * pfVar43[6]) *
                           fVar25 + (fVar8 * local_38[4] +
                                    fVar9 * local_38[5] + fVar10 * local_38[6]) * fVar24 +
                                    (fVar2 * local_28[4] + fVar3 * local_28[5] + fVar4 * local_28[6]
                                    ) * fVar23;
                fVar17 = pfVar43[10];
                fVar18 = pfVar43[9];
                fVar19 = pfVar43[8];
                *pfVar40 = local_74;
                pfVar40[1] = local_70;
                local_6c = (fVar14 * fVar19 + fVar15 * fVar18 + fVar16 * fVar17) * fVar25 +
                           (fVar8 * fVar13 + fVar9 * fVar12 + fVar10 * fVar11) * fVar24 +
                           (fVar2 * fVar7 + fVar3 * fVar6 + fVar4 * fVar5) * fVar23;
                pfVar40[2] = local_6c;
                local_14 = local_14 + 2;
                local_20 = (byte *)((int)local_20 + -1);
                local_48 = pfVar47;
                local_24 = pfVar39;
              } while (local_20 != (byte *)0x0);
              local_20 = (byte *)0x0;
              local_30 = (undefined4 *)((int)local_1c - (int)puVar38);
              local_1c = (undefined4 *)((int)param_1 - (int)puVar38);
            }
          }
          else if ((local_18 == 4) &&
                  (local_20 = (byte *)((int)local_14 + (int)pfVar40), (int)pfVar40 < (int)local_20))
          {
            local_24 = (float *)(puVar38 + (int)pfVar40 * 3);
            local_14 = (float *)(DAT_362fe1c4 + 2 + (int)pfVar40 * 8);
            local_18 = (int)puVar38 - (int)puVar41;
            pfVar39 = (float *)(puVar41 + (int)pfVar40 * 3 + 2);
            local_30 = (undefined4 *)((int)local_1c - (int)puVar38);
            local_38 = (float *)(local_20 + -(int)pfVar40);
            do {
              fVar30 = (float)*(byte *)((int)local_14 + 2) * _DAT_362287a4;
              fVar31 = (float)*(byte *)((int)local_14 + 3) * _DAT_362287a4;
              local_28 = (float *)((uint)*(byte *)local_14 * 0x30 + iVar44);
              local_68 = (float *)((uint)*(byte *)((int)local_14 + 1) * 0x30 + iVar44);
              local_48 = (float *)(((uint)*(byte *)((int)local_14 + -2) + (int)pfVar35) * 0x30 +
                                  iVar44);
              fVar32 = (float)*(byte *)(local_14 + 1) * _DAT_362287a4;
              local_98 = (float *)(((uint)*(byte *)((int)local_14 + -1) + (int)pfVar35) * 0x30 +
                                  iVar44);
              local_20 = (byte *)(_DAT_36223384 - (fVar32 + fVar31 + fVar30));
              pfVar40 = (float *)((uint)*(byte *)((int)local_14 + -2) * 0x30 + iVar44);
              fVar2 = pfVar39[-2];
              fVar3 = pfVar39[-1];
              local_84 = (float *)(((uint)*(byte *)local_14 + (int)pfVar35) * 0x30 + iVar44);
              fVar4 = *pfVar39;
              pfVar43 = (float *)((uint)*(byte *)((int)local_14 + -1) * 0x30 + iVar44);
              pfVar47 = (float *)(((uint)*(byte *)((int)local_14 + 1) + (int)pfVar35) * 0x30 +
                                 iVar44);
              fVar5 = pfVar40[10];
              fVar6 = pfVar40[9];
              fVar7 = pfVar40[8];
              fVar8 = pfVar40[0xb];
              fVar9 = pfVar39[-2];
              fVar10 = pfVar39[-1];
              fVar11 = *pfVar39;
              fVar12 = pfVar43[10];
              fVar13 = pfVar43[9];
              fVar14 = pfVar43[8];
              fVar15 = pfVar43[0xb];
              fVar16 = pfVar39[-2];
              fVar17 = pfVar39[-1];
              fVar18 = *pfVar39;
              fVar19 = local_28[10];
              fVar20 = local_28[9];
              fVar21 = local_28[8];
              fVar22 = local_28[0xb];
              fVar23 = pfVar39[-2];
              fVar24 = pfVar39[-1];
              fVar25 = *pfVar39;
              local_64 = (fVar23 * *local_68 + fVar24 * local_68[1] + fVar25 * local_68[2] +
                         local_68[3]) * (float)local_20 +
                         (fVar16 * *local_28 + fVar17 * local_28[1] + fVar18 * local_28[2] +
                         local_28[3]) * fVar32 +
                         (fVar9 * *pfVar43 + fVar10 * pfVar43[1] + fVar11 * pfVar43[2] + pfVar43[3])
                         * fVar31 +
                         (fVar2 * *pfVar40 + fVar3 * pfVar40[1] + fVar4 * pfVar40[2] + pfVar40[3]) *
                         fVar30;
              local_60 = (fVar23 * local_68[4] + fVar24 * local_68[5] + fVar25 * local_68[6] +
                         local_68[7]) * (float)local_20 +
                         (fVar16 * local_28[4] + fVar17 * local_28[5] + fVar18 * local_28[6] +
                         local_28[7]) * fVar32 +
                         (fVar9 * pfVar43[4] + fVar10 * pfVar43[5] + fVar11 * pfVar43[6] +
                         pfVar43[7]) * fVar31 +
                         (fVar2 * pfVar40[4] + fVar3 * pfVar40[5] + fVar4 * pfVar40[6] + pfVar40[7])
                         * fVar30;
              fVar26 = local_68[10];
              fVar27 = local_68[9];
              fVar28 = local_68[8];
              fVar29 = local_68[0xb];
              pfVar40 = (float *)((int)local_30 + (int)local_24);
              *pfVar40 = local_64;
              pfVar40[1] = local_60;
              local_5c = (fVar23 * fVar28 + fVar24 * fVar27 + fVar25 * fVar26 + fVar29) *
                         (float)local_20 +
                         (fVar16 * fVar21 + fVar17 * fVar20 + fVar18 * fVar19 + fVar22) * fVar32 +
                         (fVar9 * fVar14 + fVar10 * fVar13 + fVar11 * fVar12 + fVar15) * fVar31 +
                         (fVar2 * fVar7 + fVar3 * fVar6 + fVar4 * fVar5 + fVar8) * fVar30;
              pfVar40[2] = local_5c;
              fVar2 = *local_24;
              fVar3 = local_24[1];
              fVar4 = *(float *)(local_18 + (int)pfVar39);
              fVar5 = local_48[8];
              fVar6 = local_48[10];
              fVar7 = local_48[9];
              fVar8 = *local_24;
              fVar9 = local_24[1];
              fVar10 = *(float *)(local_18 + (int)pfVar39);
              fVar11 = local_98[10];
              fVar12 = local_98[9];
              fVar13 = local_98[8];
              fVar14 = *local_24;
              fVar15 = local_24[1];
              fVar16 = *(float *)(local_18 + (int)pfVar39);
              fVar17 = local_84[10];
              fVar18 = local_84[9];
              fVar19 = local_84[8];
              pfVar40 = (float *)(((int)param_1 - (int)puVar38) + (int)local_24);
              fVar20 = *local_24;
              fVar21 = local_24[1];
              fVar22 = *(float *)(local_18 + (int)pfVar39);
              local_58 = (fVar20 * *pfVar47 + fVar21 * pfVar47[1] + fVar22 * pfVar47[2]) *
                         (float)local_20 +
                         (fVar14 * *local_84 + fVar15 * local_84[1] + fVar16 * local_84[2]) * fVar32
                         + (fVar8 * *local_98 + fVar9 * local_98[1] + fVar10 * local_98[2]) * fVar31
                           + (fVar2 * *local_48 + fVar3 * local_48[1] + fVar4 * local_48[2]) *
                             fVar30;
              local_54 = (fVar20 * pfVar47[4] + fVar21 * pfVar47[5] + fVar22 * pfVar47[6]) *
                         (float)local_20 +
                         (fVar14 * local_84[4] + fVar15 * local_84[5] + fVar16 * local_84[6]) *
                         fVar32 + (fVar8 * local_98[4] + fVar9 * local_98[5] + fVar10 * local_98[6])
                                  * fVar31 +
                                  (fVar3 * local_48[5] + fVar4 * local_48[6] + fVar2 * local_48[4])
                                  * fVar30;
              fVar23 = pfVar47[10];
              fVar24 = pfVar47[9];
              fVar25 = pfVar47[8];
              *pfVar40 = local_58;
              pfVar40[1] = local_54;
              local_50 = (fVar20 * fVar25 + fVar21 * fVar24 + fVar22 * fVar23) * (float)local_20 +
                         (fVar14 * fVar19 + fVar15 * fVar18 + fVar16 * fVar17) * fVar32 +
                         (fVar8 * fVar13 + fVar9 * fVar12 + fVar10 * fVar11) * fVar31 +
                         (fVar3 * fVar7 + fVar4 * fVar6 + fVar2 * fVar5) * fVar30;
              pfVar40[2] = local_50;
              local_14 = local_14 + 2;
              local_24 = local_24 + 3;
              pfVar39 = pfVar39 + 3;
              local_38 = (float *)((int)local_38 + -1);
              local_1c = (undefined4 *)((int)param_1 - (int)puVar38);
            } while (local_38 != (float *)0x0);
          }
          local_2c = local_2c + 0x48;
          local_40 = local_40 + 3;
          local_3c = (undefined4 *)((int)local_3c + -1);
        } while (local_3c != (undefined4 *)0x0);
        local_3c = (undefined4 *)0x0;
      }
    }
    else {
      DAT_362fe1d0 = DAT_362fe1bc;
      DAT_362fe1d4 = DAT_362fe1c0;
    }
    FUN_3608d7d0(&local_d4,local_88);
    local_cc = local_cc * _DAT_362fe214;
    local_bc = local_bc * _DAT_362fe214;
    local_c4 = _DAT_362fe20c * local_c4;
    _DAT_362fe214 = _DAT_362fe20c * local_b4 + _DAT_362fe210 * local_b0 + local_ac * _DAT_362fe214;
    _DAT_362fe20c = local_d4 * _DAT_362fe20c + local_d0 * _DAT_362fe210 + local_cc;
    _DAT_362fe210 = local_c4 + local_c0 * _DAT_362fe210 + local_bc;
    param_2[7] = DAT_362fe118;
    param_2[8] = DAT_362fe11c;
    param_2[9] = DAT_362fe120;
    param_2[10] = DAT_362fe124;
    param_2[0xb] = DAT_362fe128;
    param_2[0xc] = DAT_362fe12c;
    param_2[0xd] = DAT_362fe130;
    param_2[0xe] = DAT_362fe134;
    param_2[0xf] = DAT_362fe138;
    param_2[0x10] = DAT_362fe13c;
    param_2[0x11] = DAT_362fe140;
    param_2[0x12] = DAT_362fe144;
    param_2[0x13] = DAT_362fe118;
    param_2[0x14] = DAT_362fe11c;
    param_2[0x15] = DAT_362fe120;
    param_2[0x16] = DAT_362fe124;
    param_2[0x17] = DAT_362fe128;
    param_2[0x18] = DAT_362fe12c;
    param_2[0x19] = DAT_362fe130;
    param_2[0x1a] = DAT_362fe134;
    param_2[0x1b] = DAT_362fe138;
    param_2[0x1c] = DAT_362fe13c;
    param_2[0x1d] = DAT_362fe140;
    param_2[0x1e] = DAT_362fe144;
    ExceptionList = local_10;
    return;
  }
  if (DAT_362fe1a8 == 0) {
    piVar51 = (int *)(param_2[1] * 0x8c + DAT_362fe994);
    DAT_362fe1d0 = DAT_362fe1bc;
    DAT_362fe1d4 = DAT_362fe1c0;
    if ((*(byte *)(local_44 + 0x48) & 2) == 0) {
      FUN_36162680((float *)(param_2 + 7),(float *)&DAT_362fe118,(float *)(piVar51 + 3));
      FUN_36162680((float *)(param_2 + 0x13),(float *)&DAT_362fe118,(float *)(piVar51 + 0xf));
    }
    else {
      FUN_361665f0(&local_94,piVar51);
      local_d4 = local_94;
      local_d0 = 0.0;
      local_cc = 0.0;
      local_c8 = 0;
      local_c4 = 0.0;
      local_c0 = local_90;
      local_bc = 0.0;
      local_b8 = 0;
      local_b4 = 0.0;
      local_b0 = 0.0;
      local_ac = local_8c;
      local_a8 = 0;
      FUN_36162680(local_134,(float *)&DAT_362fe118,(float *)(piVar51 + 3));
      FUN_36162680(local_164,(float *)&DAT_362fe118,(float *)(piVar51 + 0xf));
      FUN_3616e690(local_134);
      local_128 = local_158;
      local_118 = local_148;
      local_108 = local_138;
      FUN_36162680((float *)(param_2 + 7),local_134,&local_d4);
      param_2[0x13] = param_2[7];
      param_2[0x14] = param_2[8];
      param_2[0x15] = param_2[9];
      param_2[0x16] = param_2[10];
      param_2[0x17] = param_2[0xb];
      param_2[0x18] = param_2[0xc];
      param_2[0x19] = param_2[0xd];
      param_2[0x1a] = param_2[0xe];
      param_2[0x1b] = param_2[0xf];
      param_2[0x1c] = param_2[0x10];
      param_2[0x1d] = param_2[0x11];
      param_2[0x1e] = param_2[0x12];
    }
    pfVar35 = local_88;
    FUN_3608d7d0(local_194,local_88);
    FUN_3608d7d0(local_1c4,(float *)(piVar51 + 0xf));
    FUN_36162680(&local_104,local_1c4,local_194);
    local_fc = local_fc * _DAT_362fe214;
    local_ec = local_ec * _DAT_362fe214;
    local_f4 = local_f4 * _DAT_362fe20c;
    _DAT_362fe214 = local_e4 * _DAT_362fe20c + local_e0 * _DAT_362fe210 + local_dc * _DAT_362fe214;
    _DAT_362fe20c = _DAT_362fe20c * local_104 + local_100 * _DAT_362fe210 + local_fc;
    _DAT_362fe210 = local_f4 + local_f0 * _DAT_362fe210 + local_ec;
    FUN_36162680((float *)&DAT_362fe178,pfVar35,(float *)(piVar51 + 3));
    ExceptionList = local_10;
    return;
  }
  local_48 = (float *)DAT_362fe1ac;
  local_4c = &DAT_362fe1ac;
  DAT_362fe1ac = 0;
  iVar44 = DAT_362fea08 + (int)DAT_362fe1c8;
  local_8 = 0;
  DAT_362fea08 = iVar44;
  iVar36 = FUN_3615a190((undefined4 *)&DAT_362fea00);
  puVar38 = puVar41;
  if (iVar36 < iVar44) {
    iVar44 = FUN_3615a190((undefined4 *)&DAT_362fea00);
    FUN_36162540(&DAT_362fea00,iVar44 + (((int)puVar41 + -1) / DAT_362fea0c + 1) * DAT_362fea0c);
    iVar44 = DAT_362fea08;
    puVar38 = DAT_362fe1c8;
  }
  DAT_362fe1d0 = (undefined4 *)(DAT_362fea04 + (iVar44 - (int)puVar41) * 0xc);
  iVar44 = DAT_362fea18 + (int)puVar38;
  DAT_362fea18 = iVar44;
  iVar36 = FUN_3615a200((undefined4 *)&DAT_362fea10);
  if (iVar36 < iVar44) {
    iVar44 = FUN_3615a200((undefined4 *)&DAT_362fea10);
    FUN_3616e9c0(&DAT_362fea10,iVar44 + (((int)puVar38 + -1) / DAT_362fea1c + 1) * DAT_362fea1c);
    iVar44 = DAT_362fea18;
  }
  DAT_362fe1d4 = (undefined4 *)(DAT_362fea14 + (iVar44 - (int)puVar38) * 0xc);
  iVar44 = param_2[1] * 0x8c + DAT_362fe994;
  local_3c = (undefined4 *)FUN_3615a280((undefined4 *)(local_44 + 0x18));
  if (0 < (int)local_3c) {
    local_2c = 0;
    do {
      iVar36 = *(int *)(local_44 + 0x1c);
      iVar34 = *(int *)(iVar36 + local_2c);
      puVar41 = DAT_362fe1c0;
      puVar38 = DAT_362fe1bc;
      if (((*(byte *)(iVar36 + 0x34 + local_2c) & 2) != 0) && (DAT_362fe1e0 != 0)) {
        puVar41 = DAT_362fe1dc;
        puVar38 = DAT_362fe1d8;
      }
      iVar36 = *(int *)(iVar36 + 4 + local_2c) + iVar34;
      if (iVar34 < iVar36) {
        iVar45 = (int)DAT_362fe1d0 - (int)puVar38;
        iVar46 = (int)DAT_362fe1d4 - (int)puVar38;
        iVar48 = (int)DAT_362fe1d0 - (int)puVar41;
        iVar49 = (int)DAT_362fe1d4 - (int)puVar41;
        iVar50 = (int)DAT_362fe1d0 - (int)DAT_362fe1d4;
        iVar36 = iVar36 - iVar34;
        pfVar35 = (float *)(puVar38 + iVar34 * 3 + 2);
        pfVar40 = (float *)(puVar41 + iVar34 * 3 + 1);
        pfVar39 = (float *)((int)DAT_362fe1d4 + iVar34 * 0xc);
        do {
          fVar2 = pfVar35[-2];
          fVar3 = pfVar35[-1];
          pfVar43 = pfVar35 + 3;
          fVar4 = *pfVar35;
          pfVar47 = pfVar40 + 3;
          iVar36 = iVar36 + -1;
          *(float *)(iVar50 + -0xc + (int)(pfVar39 + 3)) =
               fVar3 * *(float *)(iVar44 + 0x40) +
               fVar4 * *(float *)(iVar44 + 0x44) + fVar2 * *(float *)(iVar44 + 0x3c) +
               *(float *)(iVar44 + 0x48);
          *(float *)(iVar48 + -0xc + (int)pfVar47) =
               fVar3 * *(float *)(iVar44 + 0x50) +
               fVar4 * *(float *)(iVar44 + 0x54) + fVar2 * *(float *)(iVar44 + 0x4c) +
               *(float *)(iVar44 + 0x58);
          *(float *)(iVar45 + -0xc + (int)pfVar43) =
               fVar3 * *(float *)(iVar44 + 0x60) +
               fVar4 * *(float *)(iVar44 + 100) + fVar2 * *(float *)(iVar44 + 0x5c) +
               *(float *)(iVar44 + 0x68);
          fVar2 = pfVar40[-1];
          fVar3 = *pfVar40;
          fVar4 = *(float *)((undefined1 *)((int)puVar41 + (-0xc - (int)puVar38)) + (int)pfVar43);
          *pfVar39 = fVar2 * *(float *)(iVar44 + 0xc) +
                     fVar3 * *(float *)(iVar44 + 0x10) + fVar4 * *(float *)(iVar44 + 0x14);
          *(float *)(iVar49 + -0xc + (int)pfVar47) =
               fVar4 * *(float *)(iVar44 + 0x24) +
               fVar3 * *(float *)(iVar44 + 0x20) + fVar2 * *(float *)(iVar44 + 0x1c);
          *(float *)(iVar46 + -0xc + (int)pfVar43) =
               fVar4 * *(float *)(iVar44 + 0x34) +
               fVar3 * *(float *)(iVar44 + 0x30) + fVar2 * *(float *)(iVar44 + 0x2c);
          pfVar35 = pfVar43;
          pfVar40 = pfVar47;
          pfVar39 = pfVar39 + 3;
        } while (iVar36 != 0);
      }
      local_2c = local_2c + 0x48;
      local_3c = (undefined4 *)((int)local_3c + -1);
    } while (local_3c != (undefined4 *)0x0);
  }
  param_2[7] = DAT_362fe118;
  param_2[8] = DAT_362fe11c;
  param_2[9] = DAT_362fe120;
  param_2[10] = DAT_362fe124;
  param_2[0xb] = DAT_362fe128;
  param_2[0xc] = DAT_362fe12c;
  param_2[0xd] = DAT_362fe130;
  param_2[0xe] = DAT_362fe134;
  param_2[0xf] = DAT_362fe138;
  param_2[0x10] = DAT_362fe13c;
  param_2[0x11] = DAT_362fe140;
  param_2[0x12] = DAT_362fe144;
  param_2[0x13] = DAT_362fe118;
  param_2[0x14] = DAT_362fe11c;
  param_2[0x15] = DAT_362fe120;
  param_2[0x16] = DAT_362fe124;
  param_2[0x17] = DAT_362fe128;
  param_2[0x18] = DAT_362fe12c;
  param_2[0x19] = DAT_362fe130;
  param_2[0x1a] = DAT_362fe134;
  param_2[0x1b] = DAT_362fe138;
  param_2[0x1c] = DAT_362fe13c;
  param_2[0x1d] = DAT_362fe140;
  param_2[0x1e] = DAT_362fe144;
  DAT_362fe1ac = (int)local_48;
  ExceptionList = local_10;
  return;
}

