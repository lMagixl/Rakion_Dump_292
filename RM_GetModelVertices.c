
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_GetModelVertices(class CModelInstance &,class CStaticStackArray<class
   Vector<float,3> > &,class Matrix<float,3,3> &,class Vector<float,3> &,float,float) */

void __cdecl
RM_GetModelVertices(CModelInstance *param_1,CStaticStackArray<class_Vector<float,3>_> *param_2,
                   Matrix<float,3,3> *param_3,Vector<float,3> *param_4,float param_5,float param_6)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  float *pfVar27;
  int local_6c;
  int local_68;
  int local_60;
  int local_58;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar12 = DAT_362fe1ac;
  uVar11 = DAT_362fe1a8;
                    /* 0x16c690  2916
                       ?RM_GetModelVertices@@YAXAAVCModelInstance@@AAV?$CStaticStackArray@V?$Vector@M$02@@@@AAV?$Matrix@M$02$02@@AAV?$Vector@M$02@@MM@Z
                        */
  uVar10 = DAT_362a4134;
  puStack_8 = &LAB_3621a5e7;
  local_c = ExceptionList;
  DAT_362fe1a8 = 1;
  DAT_362fe1ac = 0;
  DAT_362a4134 = 1;
  uVar4 = *(undefined4 *)(param_1 + 0xe8);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  local_4 = 3;
  RM_SetObjectPlacement(param_1,param_3,param_4);
  RM_SetCurrentDistance(param_6);
  CalculateRenderingData(param_1);
  local_48 = FUN_36162460(0x362fe990);
  if (1 < local_48) {
    local_48 = local_48 + -1;
    local_4c = 0x8c;
    iVar25 = DAT_362fe994;
    do {
      iVar13 = *(int *)(local_4c + 0x78 + iVar25);
      local_44 = *(int *)(local_4c + 0x7c + iVar25) + iVar13;
      if (iVar13 < local_44) {
        piVar1 = (int *)(local_4c + 0x6c + iVar25);
        iVar22 = iVar13 * 0x7c;
        local_44 = local_44 - iVar13;
        do {
          puVar23 = (undefined4 *)(iVar22 + DAT_362fe9a4);
          iVar26 = *(int *)(iVar22 + 0x18 + DAT_362fe9a4) * 0x54 +
                   *(int *)(**(int **)(iVar22 + DAT_362fe9a4) + 0x18);
          FUN_3616f7a0(iVar26);
          FUN_361692e0((undefined4 *)param_1,puVar23,*piVar1);
          iVar13 = FUN_3604f2e0((int)param_2);
          iVar25 = DAT_362fe1c8;
          iVar20 = *(int *)(param_2 + 8) + DAT_362fe1c8;
          *(int *)(param_2 + 8) = iVar20;
          iVar14 = FUN_3604f2b0((undefined4 *)param_2);
          if (iVar14 < iVar20) {
            iVar14 = *(int *)(param_2 + 0xc);
            iVar20 = FUN_3604f2b0((undefined4 *)param_2);
            FUN_3604f450(param_2,iVar20 + ((iVar25 + -1) / iVar14 + 1) * iVar14);
          }
          local_40 = FUN_3615a280((undefined4 *)(iVar26 + 0x18));
          if (0 < local_40) {
            local_58 = 0;
            do {
              iVar25 = *(int *)(iVar26 + 0x1c);
              iVar14 = *(int *)(iVar25 + local_58);
              iVar20 = *(int *)(iVar25 + 4 + local_58);
              if (((*(byte *)(iVar25 + 0x34 + local_58) & 2) == 0) || (DAT_362fe1e0 == 0)) {
                local_60 = DAT_362fe1d4;
                iVar25 = DAT_362fe1d0;
              }
              else {
                local_60 = DAT_362fe1dc;
                iVar25 = DAT_362fe1d8;
              }
              if (param_5 == _DAT_3622376c) {
                iVar15 = 0;
                if (3 < iVar20) {
                  puVar23 = (undefined4 *)(iVar25 + 8 + iVar14 * 0xc);
                  iVar18 = (iVar14 + 1 + iVar13) * 0xc;
                  local_68 = (iVar20 - 4U >> 2) + 1;
                  iVar15 = local_68 * 4;
                  do {
                    iVar21 = *(int *)(param_2 + 4);
                    *(undefined4 *)(iVar21 + -0xc + iVar18) = puVar23[-2];
                    *(undefined4 *)(iVar21 + -8 + iVar18) = puVar23[-1];
                    *(undefined4 *)(iVar21 + iVar18 + -4) = *puVar23;
                    iVar21 = *(int *)(param_2 + 4);
                    *(undefined4 *)(iVar21 + iVar18) = puVar23[1];
                    iVar21 = iVar21 + iVar18;
                    *(undefined4 *)(iVar21 + 4) = puVar23[2];
                    *(undefined4 *)(iVar21 + 8) = puVar23[3];
                    puVar16 = (undefined4 *)(*(int *)(param_2 + 4) + 0xc + iVar18);
                    *puVar16 = puVar23[4];
                    puVar16[1] = puVar23[5];
                    puVar16[2] = puVar23[6];
                    puVar16 = (undefined4 *)(*(int *)(param_2 + 4) + 0x18 + iVar18);
                    *puVar16 = puVar23[7];
                    puVar16[1] = puVar23[8];
                    puVar16[2] = puVar23[9];
                    puVar23 = puVar23 + 0xc;
                    iVar18 = iVar18 + 0x30;
                    local_68 = local_68 + -1;
                  } while (local_68 != 0);
                }
                if (iVar15 < iVar20) {
                  iVar18 = (iVar13 + iVar14 + iVar15) * 0xc;
                  puVar23 = (undefined4 *)(iVar25 + 8 + (iVar14 + iVar15) * 0xc);
                  iVar20 = iVar20 - iVar15;
                  do {
                    puVar16 = (undefined4 *)(*(int *)(param_2 + 4) + iVar18);
                    *puVar16 = puVar23[-2];
                    puVar16[1] = puVar23[-1];
                    uVar5 = *puVar23;
                    iVar18 = iVar18 + 0xc;
                    puVar23 = puVar23 + 3;
                    iVar20 = iVar20 + -1;
                    puVar16[2] = uVar5;
                  } while (iVar20 != 0);
                }
              }
              else {
                local_68 = 0;
                if (3 < iVar20) {
                  pfVar19 = (float *)(iVar14 * 0xc + 0x10 + local_60);
                  pfVar17 = (float *)(iVar14 * 0xc + 8 + iVar25);
                  iVar15 = (iVar14 + 1 + iVar13) * 0xc;
                  local_6c = (iVar20 - 4U >> 2) + 1;
                  local_68 = local_6c * 4;
                  do {
                    fVar3 = *(float *)((local_60 - iVar25) + (int)pfVar17);
                    fVar6 = pfVar17[-1];
                    fVar7 = *pfVar17;
                    fVar8 = pfVar19[-3];
                    pfVar24 = (float *)(*(int *)(param_2 + 4) + -0xc + iVar15);
                    *pfVar24 = pfVar17[-2] + pfVar19[-4] * param_5;
                    pfVar24[1] = fVar6 + fVar8 * param_5;
                    pfVar24[2] = fVar7 + fVar3 * param_5;
                    fVar3 = pfVar17[2];
                    fVar6 = pfVar17[3];
                    fVar7 = *pfVar19;
                    fVar8 = pfVar19[1];
                    pfVar24 = (float *)(*(int *)(param_2 + 4) + iVar15);
                    *pfVar24 = pfVar17[1] + pfVar19[-1] * param_5;
                    pfVar24[1] = fVar3 + fVar7 * param_5;
                    pfVar24[2] = fVar6 + fVar8 * param_5;
                    fVar3 = pfVar17[5];
                    fVar6 = pfVar17[6];
                    fVar7 = pfVar19[3];
                    fVar8 = pfVar19[4];
                    pfVar24 = (float *)(*(int *)(param_2 + 4) + 0xc + iVar15);
                    *pfVar24 = pfVar17[4] + pfVar19[2] * param_5;
                    pfVar24[1] = fVar3 + fVar7 * param_5;
                    pfVar24[2] = fVar6 + fVar8 * param_5;
                    pfVar24 = pfVar17 + 7;
                    fVar3 = pfVar17[8];
                    fVar6 = pfVar17[9];
                    pfVar27 = pfVar19 + 5;
                    fVar7 = pfVar19[6];
                    fVar8 = pfVar19[7];
                    pfVar17 = pfVar17 + 0xc;
                    pfVar19 = pfVar19 + 0xc;
                    pfVar2 = (float *)(*(int *)(param_2 + 4) + 0x18 + iVar15);
                    *pfVar2 = *pfVar24 + *pfVar27 * param_5;
                    pfVar2[1] = fVar3 + fVar7 * param_5;
                    iVar15 = iVar15 + 0x30;
                    pfVar2[2] = fVar6 + fVar8 * param_5;
                    local_6c = local_6c + -1;
                  } while (local_6c != 0);
                }
                if (local_68 < iVar20) {
                  iVar15 = (iVar14 + local_68) * 0xc;
                  pfVar19 = (float *)(iVar15 + local_60);
                  pfVar17 = (float *)(iVar15 + 8 + iVar25);
                  iVar14 = (iVar13 + iVar14 + local_68) * 0xc;
                  local_6c = iVar20 - local_68;
                  do {
                    pfVar24 = pfVar17 + -2;
                    fVar3 = *(float *)((int)pfVar17 + (local_60 - iVar25));
                    fVar6 = pfVar17[-1];
                    fVar7 = *pfVar17;
                    fVar8 = *pfVar19;
                    fVar9 = pfVar19[1];
                    pfVar17 = pfVar17 + 3;
                    pfVar19 = pfVar19 + 3;
                    pfVar27 = (float *)(*(int *)(param_2 + 4) + iVar14);
                    *pfVar27 = *pfVar24 + fVar8 * param_5;
                    pfVar27[1] = fVar6 + fVar9 * param_5;
                    iVar14 = iVar14 + 0xc;
                    pfVar27[2] = fVar7 + fVar3 * param_5;
                    local_6c = local_6c + -1;
                  } while (local_6c != 0);
                }
              }
              local_58 = local_58 + 0x48;
              local_40 = local_40 + -1;
            } while (local_40 != 0);
          }
          FUN_3616e810(iVar26);
          iVar22 = iVar22 + 0x7c;
          local_44 = local_44 + -1;
          iVar25 = DAT_362fe994;
        } while (local_44 != 0);
      }
      local_4c = local_4c + 0x8c;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  FUN_36163450();
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  DAT_362fe1ac = uVar12;
  DAT_362a4134 = uVar10;
  DAT_362fe1a8 = uVar11;
  ExceptionList = local_c;
  return;
}

