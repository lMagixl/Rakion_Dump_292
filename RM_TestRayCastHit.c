
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl RM_TestRayCastHit(class CModelInstance &,class Matrix<float,3,3> &,class
   Vector<float,3> &,class Vector<float,3> const &,class Vector<float,3> const &,float,long *) */

float __cdecl
RM_TestRayCastHit(CModelInstance *param_1,Matrix<float,3,3> *param_2,Vector<float,3> *param_3,
                 Vector<float,3> *param_4,Vector<float,3> *param_5,float param_6,long *param_7)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  long *plVar18;
  float fVar19;
  bool bVar20;
  int local_14c;
  int local_148;
  int local_144;
  long local_13c;
  int local_110;
  float local_e8;
  int local_d8;
  float local_d4;
  int local_d0;
  float local_c0 [4];
  int local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0 [4];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78 [4];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  char *local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x16cfb0  2938
                       ?RM_TestRayCastHit@@YAMAAVCModelInstance@@AAV?$Matrix@M$02$02@@AAV?$Vector@M$02@@ABV3@3MPAJ@Z
                        */
  puStack_8 = &LAB_3621a609;
  local_c = ExceptionList;
  local_e8 = 1e+06;
  local_14 = &DAT_362fe1a8;
  local_10 = DAT_362fe1a8;
  DAT_362fe1a8 = 1;
  local_1c = &DAT_362fe1ac;
  local_18 = DAT_362fe1ac;
  DAT_362fe1ac = 0;
  local_24 = &DAT_362a4134;
  local_20 = DAT_362a4134;
  DAT_362a4134 = 1;
  local_4 = 2;
  ExceptionList = &local_c;
  RM_SetObjectPlacement(param_1,param_2,param_3);
  RM_SetCurrentDistance(0.0);
  CalculateRenderingData(param_1);
  local_d8 = FUN_36162460(0x362fe990);
  if (1 < local_d8) {
    local_d8 = local_d8 + -1;
    local_b0 = 0x8c;
    do {
      iVar13 = *(int *)(local_b0 + 0x78 + DAT_362fe994);
      iVar15 = local_b0 + DAT_362fe994;
      iVar9 = *(int *)(local_b0 + 0x7c + DAT_362fe994) + iVar13;
      local_4c = iVar15;
      if (iVar13 < iVar9) {
        fVar19 = (float)(iVar13 * 0x7c);
        local_78[0] = (float)(iVar9 - iVar13);
        do {
          iVar9 = *(int *)((int)fVar19 + 0x18 + DAT_362fe9a4) * 0x54;
          iVar13 = *(int *)(**(int **)((int)fVar19 + DAT_362fe9a4) + 0x18);
          puVar1 = (undefined4 *)((int)fVar19 + DAT_362fe9a4);
          iVar17 = iVar9 + iVar13;
          if (*(int *)(iVar9 + 0x38 + iVar13) != -1) {
            local_c0[0] = fVar19;
            FUN_3616f7a0(iVar17);
            FUN_361692e0((undefined4 *)param_1,puVar1,*(int *)(iVar15 + 0x6c));
            fVar10 = (float)FUN_3615a280((undefined4 *)(iVar17 + 0x18));
            if (0 < (int)fVar10) {
              local_110 = 0;
              local_a0[0] = fVar10;
              do {
                piVar16 = (int *)(*(int *)(iVar17 + 0x1c) + local_110);
                local_d0 = FUN_3615a400(piVar16 + 0x10);
                if (0 < local_d0) {
                  local_144 = 0;
                  do {
                    iVar13 = *piVar16;
                    puVar11 = (ushort *)(piVar16[0x11] + local_144);
                    pfVar2 = (float *)(DAT_362fe1d0 + ((uint)*puVar11 + iVar13) * 0xc);
                    pfVar3 = (float *)(DAT_362fe1d0 + ((uint)puVar11[2] + iVar13) * 0xc);
                    local_c0[1] = *pfVar2;
                    local_c0[2] = pfVar2[1];
                    local_c0[3] = pfVar2[2];
                    pfVar2 = (float *)(DAT_362fe1d0 + ((uint)puVar11[1] + iVar13) * 0xc);
                    local_a0[1] = *pfVar2;
                    local_a0[2] = pfVar2[1];
                    local_a0[3] = pfVar2[2];
                    local_78[1] = *pfVar3;
                    local_78[2] = pfVar3[1];
                    local_78[3] = pfVar3[2];
                    FUN_360bbab0(&local_68,local_c0 + 1,local_a0 + 1,local_78 + 1);
                    fVar19 = (local_68 * *(float *)param_4 +
                             local_60 * *(float *)(param_4 + 8) + local_64 * *(float *)(param_4 + 4)
                             ) - local_5c;
                    fVar10 = (local_68 * *(float *)param_5 +
                             local_60 * *(float *)(param_5 + 8) + local_64 * *(float *)(param_5 + 4)
                             ) - local_5c;
                    if ((_DAT_3622376c <= fVar19) && (fVar10 <= fVar19)) {
                      fVar19 = fVar19 / (fVar19 - fVar10);
                      local_40 = (*(float *)param_5 - *(float *)param_4) * fVar19;
                      local_3c = (*(float *)(param_5 + 4) - *(float *)(param_4 + 4)) * fVar19;
                      local_38 = (*(float *)(param_5 + 8) - *(float *)(param_4 + 8)) * fVar19;
                      fVar19 = *(float *)param_4 + local_40;
                      fVar10 = *(float *)(param_4 + 4) + local_3c;
                      fVar6 = *(float *)(param_4 + 8) + local_38;
                      fVar7 = SQRT((fVar19 - *(float *)param_4) * (fVar19 - *(float *)param_4) +
                                   (fVar10 - *(float *)(param_4 + 4)) *
                                   (fVar10 - *(float *)(param_4 + 4)) +
                                   (fVar6 - *(float *)(param_4 + 8)) *
                                   (fVar6 - *(float *)(param_4 + 8)));
                      local_30 = fVar19;
                      local_2c = fVar10;
                      local_28 = fVar6;
                      if (fVar7 <= param_6) {
                        FUN_360cd910(&local_68,&local_34,&local_48);
                        iVar15 = local_34;
                        iVar13 = local_48;
                        local_58 = (&local_34)[local_34];
                        pfVar2 = local_a0 + local_48;
                        local_54 = (&local_34)[local_48];
                        pfVar3 = local_c0 + local_48;
                        pfVar4 = local_a0 + local_34;
                        pfVar5 = local_c0 + local_34;
                        local_50 = 0;
                        CIntersector::AddEdge
                                  ((CIntersector *)&local_58,*pfVar5,*pfVar3,local_a0[local_34],
                                   local_a0[local_48]);
                        CIntersector::AddEdge
                                  ((CIntersector *)&local_58,*pfVar4,*pfVar2,local_78[iVar15],
                                   local_78[iVar13]);
                        CIntersector::AddEdge
                                  ((CIntersector *)&local_58,local_78[iVar15],local_78[iVar13],
                                   *pfVar5,*pfVar3);
                        uVar12 = local_50 & 0x80000001;
                        bVar20 = uVar12 == 0;
                        if ((int)uVar12 < 0) {
                          bVar20 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
                        }
                        if (((!bVar20) && (fVar7 < local_e8)) &&
                           (local_e8 = fVar7, param_7 != (long *)0x0)) {
                          local_ac = fVar19 - local_c0[1];
                          local_a8 = fVar10 - local_c0[2];
                          local_a4 = fVar6 - local_c0[3];
                          fVar7 = SQRT(local_ac * local_ac +
                                       local_a8 * local_a8 + local_a4 * local_a4);
                          local_84 = fVar19 - local_a0[1];
                          local_80 = fVar10 - local_a0[2];
                          local_7c = fVar6 - local_a0[3];
                          fVar8 = SQRT(local_84 * local_84 +
                                       local_80 * local_80 + local_7c * local_7c);
                          local_90 = fVar19 - local_78[1];
                          local_8c = fVar10 - local_78[2];
                          local_88 = fVar6 - local_78[3];
                          fVar19 = SQRT(local_90 * local_90 +
                                        local_8c * local_8c + local_88 * local_88);
                          if (fVar8 <= fVar7) {
                            iVar13 = piVar16[0x11];
                            if (fVar19 <= fVar8) goto LAB_3616d770;
                            uVar12 = (uint)*(ushort *)(local_144 + 2 + iVar13);
                          }
                          else {
                            iVar13 = piVar16[0x11];
                            if (fVar19 <= fVar7) {
LAB_3616d770:
                              uVar12 = (uint)*(ushort *)(local_144 + 4 + iVar13);
                            }
                            else {
                              uVar12 = (uint)*(ushort *)(local_144 + iVar13);
                            }
                          }
                          iVar13 = *piVar16;
                          local_148 = FUN_3615a2c0((undefined4 *)(iVar17 + 0x20));
                          local_d4 = 0.0;
                          local_13c = -1;
                          if (0 < local_148) {
                            local_14c = 0;
                            do {
                              plVar18 = (long *)(*(int *)(iVar17 + 0x24) + local_14c);
                              iVar15 = FUN_3600c3d0(plVar18 + 1);
                              iVar9 = 0;
                              if (0 < iVar15) {
                                piVar14 = (int *)plVar18[2];
                                do {
                                  if ((*piVar14 == uVar12 + iVar13) &&
                                     (local_d4 < (float)piVar14[1])) {
                                    local_13c = *plVar18;
                                    local_d4 = (float)((int *)plVar18[2])[iVar9 * 2 + 1];
                                    ska_IDToString((long)&local_44);
                                    StringFree(local_44);
                                    break;
                                  }
                                  iVar9 = iVar9 + 1;
                                  piVar14 = piVar14 + 2;
                                } while (iVar9 < iVar15);
                              }
                              local_14c = local_14c + 0xc;
                              local_148 = local_148 + -1;
                            } while (local_148 != 0);
                          }
                          *param_7 = local_13c;
                        }
                      }
                    }
                    local_144 = local_144 + 6;
                    local_d0 = local_d0 + -1;
                  } while (local_d0 != 0);
                }
                local_110 = local_110 + 0x48;
                local_a0[0] = (float)((int)local_a0[0] + -1);
              } while (local_a0[0] != 0.0);
              local_a0[0] = 0.0;
              iVar15 = local_4c;
              fVar19 = local_c0[0];
            }
            FUN_3616e810(iVar17);
          }
          fVar19 = (float)((int)fVar19 + 0x7c);
          local_78[0] = (float)((int)local_78[0] + -1);
          local_c0[0] = fVar19;
        } while (local_78[0] != 0.0);
      }
      local_b0 = local_b0 + 0x8c;
      local_d8 = local_d8 + -1;
    } while (local_d8 != 0);
  }
  FUN_36163450();
  DAT_362a4134 = local_20;
  DAT_362fe1ac = local_18;
  DAT_362fe1a8 = local_10;
  ExceptionList = local_c;
  return local_e8;
}

