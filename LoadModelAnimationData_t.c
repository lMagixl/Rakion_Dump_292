
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CEditModel::LoadModelAnimationData_t(class CTStream *,class
   Matrix<float,3,3> const &) */

void __thiscall
CEditModel::LoadModelAnimationData_t(CEditModel *this,CTStream *param_1,Matrix<float,3,3> *param_2)

{
  CEditModel *pCVar1;
  undefined2 *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  int iVar11;
  void *pvVar12;
  void *pvVar13;
  double *pdVar14;
  double *pdVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  float fVar19;
  int iVar20;
  CListNode *pCVar21;
  float *pfVar22;
  undefined4 *puVar23;
  float *pfVar24;
  CTStream *pCVar25;
  float10 fVar26;
  float local_1f8 [6];
  float local_1e0 [4];
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc [4];
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c [4];
  float local_18c [3];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  char *local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  char *local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  float local_130 [6];
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  void *local_fc;
  int local_f8;
  int local_f4;
  float local_f0 [6];
  int local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  char *local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  char *local_8c;
  void *local_88;
  CObject3D local_84 [20];
  CListNode *local_70 [3];
  CListNode *local_64;
  int local_60;
  float local_5c;
  float local_58;
  CEditModel *local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CListNode *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xad310  2551
                       ?LoadModelAnimationData_t@CEditModel@@AAEXPAVCTStream@@ABV?$Matrix@M$02$02@@@Z
                        */
  puStack_c = &LAB_362139b1;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdfc;
  local_8 = 0;
  ExceptionList = &local_10;
  local_54 = this;
  CObject3D::BatchLoading_t(1);
  CObject3D::CObject3D(local_84);
  local_8 = CONCAT31(local_8._1_3_,1);
  CListHead::Clear((CListHead *)local_70);
  for (iVar8 = 1; iVar8 < 4; iVar8 = iVar8 + 1) {
    local_f0[iVar8 + -1] = 3e+38;
    local_f0[iVar8 + 2] = -3e+38;
  }
  for (iVar8 = 1; iVar8 < 4; iVar8 = iVar8 + 1) {
    local_130[iVar8 + -1] = 3e+38;
    local_130[iVar8 + 2] = -3e+38;
  }
  iVar8 = *(int *)(this + 0x38);
  CModelData::ClearAnimations((CModelData *)(this + 0x18));
  if (*(int *)(this + 0x34) != 0) {
    CAnimData::LoadFromScript_t((CAnimData *)(this + 0x18),param_1,(CListHead *)local_70);
    if ((iVar8 != 0) && (lVar9 = CListHead::Count((CListHead *)local_70), lVar9 != iVar8)) {
      local_14c = s_If_you_are_updating_animations__y_36230930;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_14c,(ThrowInfo *)&DAT_3624f688);
    }
    lVar9 = CListHead::Count((CListHead *)local_70);
    *(long *)(this + 0x38) = lVar9;
    if (_ProgresRoutines != (code *)0x0) {
      (*_ProgresRoutines)(s_Calculating_bounding_boxes_____362309cc);
    }
    if (DAT_362ca418 != (code *)0x0) {
      lVar9 = CListHead::Count((CListHead *)local_70);
      (*DAT_362ca418)(lVar9);
    }
    FUN_360b2200(this + 0x4c,*(int *)(this + 0x38));
    if (((byte)this[0x1278] & 0x10) == 0) {
      FUN_360b1940(this + 0x3c,*(int *)(this + 0x38) * *(int *)(this + 0x34));
    }
    else {
      FUN_360b19c0(this + 0x44,*(int *)(this + 0x38) * *(int *)(this + 0x34));
    }
    iVar8 = 0;
    local_60 = 0;
    local_100 = 0;
    local_fc = (void *)0x0;
    local_f8 = 0;
    local_f4 = 0x10;
    local_8._0_1_ = 2;
    local_5c = 0.0;
    if (((-1 < DAT_362a5264) && (-1 < DAT_362a5268)) && (-1 < DAT_362a526c)) {
      local_5c = 1.4013e-45;
    }
    for (local_18 = local_70[0]; *(int *)local_18 != 0; local_18 = *(CListNode **)local_18) {
      pCVar21 = local_18 + -0x104;
      if (DAT_362ca41c != (code *)0x0) {
        (*DAT_362ca41c)(local_60);
      }
      CObject3D::Clear(local_84);
      pcVar10 = StringDuplicate((char *)pCVar21);
      local_8._0_1_ = 3;
      local_8c = StringDuplicate(pcVar10);
      local_88 = (void *)0x0;
      local_8._0_1_ = 4;
      CObject3D::LoadAny3DFormat_t(local_84,(CTFileName *)&local_8c,param_2,0);
      local_8._0_1_ = 3;
      StringFree(local_8c);
      local_8._0_1_ = 2;
      StringFree(pcVar10);
      iVar11 = FUN_3604a790(local_84,0);
      iVar11 = FUN_3604aa70(iVar11);
      if (*(int *)(local_54 + 0x34) != iVar11) {
        pcVar10 = StringDuplicate((char *)pCVar21);
        local_8._0_1_ = 5;
        ThrowF_t(s_File__s__one_of_animation_frame_f_362309f0,pcVar10);
        local_8._0_1_ = 2;
        StringFree(pcVar10);
      }
      if (local_5c != 0.0) {
        pvVar12 = (void *)FUN_3604a790(local_84,0);
        pvVar13 = (void *)FUN_3604a790(local_84,0);
        pdVar14 = (double *)FUN_3604a710(pvVar13,DAT_362a526c);
        iVar8 = DAT_362a5264;
        pdVar15 = (double *)FUN_3604a710(pvVar12,DAT_362a5264);
        local_118 = *pdVar14 - *pdVar15;
        local_110 = pdVar14[1] - pdVar15[1];
        local_108 = pdVar14[2] - pdVar15[2];
        local_58 = (float)local_108;
        local_64 = (CListNode *)(float)local_110;
        local_50 = (float)local_118;
        local_148 = local_118;
        local_140 = local_110;
        local_138 = local_108;
        pvVar12 = (void *)FUN_3604a790(local_84,0);
        pvVar13 = (void *)FUN_3604a790(local_84,0);
        pdVar14 = (double *)FUN_3604a710(pvVar13,iVar8);
        pdVar15 = (double *)FUN_3604a710(pvVar12,DAT_362a5268);
        local_180 = *pdVar14 - *pdVar15;
        local_c8 = local_180;
        local_178 = pdVar14[1] - pdVar15[1];
        local_c0 = local_178;
        local_170 = pdVar14[2] - pdVar15[2];
        local_b8 = local_170;
        local_38[0] = (float)local_170;
        fVar19 = (float)local_178;
        local_44 = (float)local_180;
        local_b0 = local_38[0] * (float)local_64 - fVar19 * local_58;
        local_24 = local_b0;
        local_ac = local_44 * local_58 - local_50 * local_38[0];
        local_a8 = local_50 * fVar19 - local_44 * (float)local_64;
        local_d4 = local_a8 * fVar19 - local_ac * local_38[0];
        local_50 = local_d4;
        local_d0 = local_b0 * local_38[0] - local_a8 * local_44;
        local_cc = local_ac * local_44 - local_b0 * fVar19;
        fVar3 = SQRT(local_a8 * local_a8 + local_ac * local_ac + local_b0 * local_b0);
        if ((float)_DAT_36223438 <= fVar3) {
          fVar3 = _DAT_36223384 / fVar3;
          local_28 = fVar3;
          local_20 = local_ac * fVar3;
        }
        else {
          local_20 = local_ac * _DAT_3622376c;
          fVar3 = _DAT_3622376c;
        }
        local_1c = local_a8 * fVar3;
        fVar4 = SQRT(local_d4 * local_d4 + local_d0 * local_d0 + local_cc * local_cc);
        if ((float)_DAT_36223438 <= fVar4) {
          fVar4 = _DAT_36223384 / fVar4;
          local_28 = fVar4;
          local_1d0 = local_d0 * fVar4;
          local_4c._0_2_ = SUB42(local_1d0,0);
          local_4c._2_2_ = (undefined2)((uint)local_1d0 >> 0x10);
        }
        else {
          local_1d0 = local_d0 * _DAT_3622376c;
          local_4c._0_2_ = SUB42(local_1d0,0);
          local_4c._2_2_ = (undefined2)((uint)local_1d0 >> 0x10);
          fVar4 = _DAT_3622376c;
        }
        local_1cc = local_cc * fVar4;
        local_48._0_2_ = SUB42(local_1cc,0);
        local_48._2_2_ = (undefined2)((uint)local_1cc >> 0x10);
        fVar6 = SQRT(local_38[0] * local_38[0] + fVar19 * fVar19 + local_44 * local_44);
        fVar7 = _DAT_3622376c;
        if ((float)_DAT_36223438 <= fVar6) {
          local_28 = _DAT_36223384 / fVar6;
          fVar7 = local_28;
        }
        local_3c = local_38[0] * fVar7;
        local_1e0[0] = local_b0 * fVar3;
        local_1e0[2] = local_a8 * fVar3;
        local_1e0[3] = local_d4 * fVar4;
        local_1e0[1] = local_20;
        local_1c8 = local_44 * fVar7;
        local_1c0 = local_38[0] * fVar7;
        local_1c4 = fVar19 * fVar7;
        pfVar22 = local_1e0;
        pfVar24 = local_1bc;
        local_4c = local_1d0;
        local_48 = (void *)local_1cc;
        for (iVar11 = 9; iVar8 = local_f8, iVar11 != 0; iVar11 = iVar11 + -1) {
          *pfVar24 = *pfVar22;
          pfVar22 = pfVar22 + 1;
          pfVar24 = pfVar24 + 1;
        }
      }
      FUN_3604a790(local_84,0);
      FUN_360502d0();
      pCVar1 = local_54;
      for (iVar11 = 1; iVar11 < 4; iVar11 = iVar11 + 1) {
        local_19c[iVar11] = 3e+38;
        local_19c[iVar11 + 3] = -3e+38;
      }
      local_f0[0] = local_19c[1];
      local_f0[1] = local_19c[2];
      local_f0[2] = local_19c[3];
      local_f0[3] = local_18c[0];
      local_f0[4] = local_18c[1];
      local_f0[5] = local_18c[2];
      for (iVar11 = 0; iVar11 < *(int *)(pCVar1 + 0x34); iVar11 = iVar11 + 1) {
        pvVar12 = (void *)FUN_3604a790(local_84,0);
        pdVar14 = (double *)FUN_3604a710(pvVar12,iVar11);
        local_a0 = (char *)(float)pdVar14[2];
        dVar5 = pdVar14[1];
        local_38[1] = (float)*pdVar14;
        local_38[2] = (float)dVar5;
        local_38[3] = (float)pdVar14[2];
        if (local_5c != 0.0) {
          pvVar12 = (void *)FUN_3604a790(local_84,0);
          pdVar14 = (double *)FUN_3604a710(pvVar12,DAT_362a5264);
          fVar19 = local_38[1] - (float)*pdVar14;
          fVar3 = (float)dVar5 - (float)pdVar14[1];
          fVar4 = (float)local_a0 - (float)pdVar14[2];
          local_98 = fVar19 * local_1bc[0] + fVar3 * local_1bc[1] + local_1bc[2] * fVar4;
          local_94 = fVar19 * local_1bc[3] + fVar3 * local_1ac + local_1a8 * fVar4;
          local_38[2] = local_94;
          local_38[1] = local_98;
          local_90 = fVar19 * local_1a4 + fVar3 * local_1a0 + fVar4 * local_19c[0];
          local_38[3] = local_90;
        }
        for (iVar16 = 1; iVar16 < 4; iVar16 = iVar16 + 1) {
          fVar19 = local_38[iVar16];
          local_1f8[iVar16 + 2] = fVar19;
          local_1e0[iVar16 + -7] = fVar19;
        }
        FUN_360b1850(local_f0,local_1f8);
        iVar8 = iVar8 + 1;
        local_f8 = iVar8;
        iVar16 = FUN_3604f2b0(&local_100);
        if (iVar16 < iVar8) {
          iVar8 = FUN_3604f2b0(&local_100);
          FUN_3604f450(&local_100,iVar8 + local_f4);
          iVar8 = local_f8;
        }
        pfVar22 = (float *)((int)local_fc + iVar8 * 0xc + -0xc);
        *pfVar22 = local_38[1];
        pfVar22[1] = local_38[2];
        pfVar22[2] = local_38[3];
      }
      FUN_3604a790(local_84,0);
      FUN_360502e0();
      iVar11 = local_60;
      pfVar22 = (float *)(*(int *)(pCVar1 + 0x50) + local_60 * 0x18);
      *pfVar22 = local_f0[0];
      pfVar22[1] = local_f0[1];
      pfVar22[2] = local_f0[2];
      pfVar22[3] = local_f0[3];
      pfVar22[4] = local_f0[4];
      pfVar22[5] = local_f0[5];
      FUN_360b1850(local_130,local_f0);
      local_60 = iVar11 + 1;
      this = local_54;
    }
    local_44 = local_130[3] - local_130[0];
    local_40 = local_130[4] - local_130[1];
    pCVar1 = this + 0x1280;
    local_3c = local_130[5] - local_130[2];
    local_38[1] = local_44 * _DAT_36227cf0;
    *(float *)pCVar1 = local_38[1];
    local_38[2] = local_40 * _DAT_36227cf0;
    *(float *)(this + 0x1284) = local_38[2];
    fVar19 = _DAT_3622376c;
    local_38[3] = local_3c * _DAT_36227cf0;
    *(float *)(this + 0x1288) = local_38[3];
    if (*(float *)pCVar1 == fVar19) {
      *(float *)pCVar1 = 1.0;
    }
    if (*(float *)(this + 0x1284) == _DAT_3622376c) {
      *(undefined4 *)(this + 0x1284) = 0x3f800000;
    }
    if (*(float *)(this + 0x1288) == _DAT_3622376c) {
      *(undefined4 *)(this + 0x1288) = 0x3f800000;
    }
    local_8c = (char *)0x0;
    local_88 = (void *)0x0;
    local_8._0_1_ = 6;
    FUN_360b2860(&local_8c,*(int *)(this + 0x34));
    CObject3D::Clear(local_84);
    local_a0 = StringDuplicate((char *)(local_70[0] + -0x104));
    local_8._0_1_ = 7;
    pcVar10 = StringDuplicate(local_a0);
    local_4c._0_2_ = SUB42(pcVar10,0);
    local_4c._2_2_ = (undefined2)((uint)pcVar10 >> 0x10);
    local_48._0_2_ = 0;
    local_48._2_2_ = 0;
    local_8._0_1_ = 8;
    CObject3D::LoadAny3DFormat_t(local_84,(CTFileName *)&local_4c,param_2,0);
    local_8._0_1_ = 7;
    StringFree((char *)CONCAT22(local_4c._2_2_,(undefined2)local_4c));
    FUN_3604a790(local_84,0);
    FUN_360502d0();
    iVar11 = 0;
    iVar8 = FUN_3604a790(local_84,0);
    pvVar12 = (void *)(iVar8 + 0x50);
    local_8._0_1_ = 9;
    while( true ) {
      local_48 = pvVar12;
      local_4c = (float)iVar11;
      iVar8 = FUN_3604a760((int)pvVar12);
      if (iVar8 <= iVar11) break;
      iVar8 = FUN_3604a750(pvVar12,iVar11);
      pvVar12 = (void *)(iVar8 + 0x4c);
      iVar8 = FUN_3604aa50((int)pvVar12);
      if (iVar8 != 3) {
        ThrowF_t(s_Non_triangle_polygon_encountered_36230a34,local_a0);
      }
      piVar17 = (int *)FUN_3604a700(pvVar12,0);
      piVar18 = (int *)FUN_3604a700(pvVar12,1);
      iVar8 = *piVar17;
      if (piVar17[1] == 0) {
        iVar11 = *(int *)(iVar8 + 0x14);
        iVar8 = *(int *)(iVar8 + 0x10);
      }
      else {
        iVar11 = *(int *)(iVar8 + 0x10);
        iVar8 = *(int *)(iVar8 + 0x14);
      }
      if (piVar18[1] == 0) {
        iVar16 = *(int *)(*piVar18 + 0x14);
      }
      else {
        iVar16 = *(int *)(*piVar18 + 0x10);
      }
      pvVar12 = (void *)FUN_3604a790(local_84,0);
      fVar19 = (float)thunk_FUN_360b1400(pvVar12,iVar8);
      local_58 = fVar19;
      pvVar12 = (void *)FUN_3604a790(local_84,0);
      iVar8 = thunk_FUN_360b1400(pvVar12,iVar11);
      pvVar12 = (void *)FUN_3604a790(local_84,0);
      iVar11 = thunk_FUN_360b1400(pvVar12,iVar16);
      puVar23 = (undefined4 *)((int)fVar19 * 0x10 + (int)local_88);
      iVar20 = *(int *)((int)fVar19 * 0x10 + 8 + (int)local_88) + 1;
      puVar23[2] = iVar20;
      iVar16 = FUN_3600bef0(puVar23);
      if (iVar16 < iVar20) {
        iVar16 = FUN_3600bef0(puVar23);
        FUN_36026aa0(puVar23,iVar16 + puVar23[3]);
      }
      *(int *)(puVar23[1] + -4 + puVar23[2] * 4) = iVar11;
      iVar16 = puVar23[2];
      puVar23[2] = iVar16 + 1;
      iVar20 = FUN_3600bef0(puVar23);
      if (iVar20 < iVar16 + 1) {
        iVar16 = FUN_3600bef0(puVar23);
        FUN_36026aa0(puVar23,iVar16 + puVar23[3]);
      }
      *(int *)(puVar23[1] + -4 + puVar23[2] * 4) = iVar8;
      puVar23 = (undefined4 *)(iVar8 * 0x10 + (int)local_88);
      iVar20 = *(int *)(iVar8 * 0x10 + 8 + (int)local_88) + 1;
      puVar23[2] = iVar20;
      iVar16 = FUN_3600bef0(puVar23);
      if (iVar16 < iVar20) {
        iVar16 = FUN_3600bef0(puVar23);
        FUN_36026aa0(puVar23,iVar16 + puVar23[3]);
      }
      fVar19 = local_58;
      *(float *)(puVar23[1] + -4 + puVar23[2] * 4) = local_58;
      puVar23[2] = puVar23[2] + 1;
      iVar16 = FUN_3600bef0(puVar23);
      if (iVar16 < (int)puVar23[2]) {
        iVar16 = FUN_3600bef0(puVar23);
        FUN_36026aa0(puVar23,iVar16 + puVar23[3]);
      }
      *(int *)(puVar23[1] + -4 + puVar23[2] * 4) = iVar11;
      puVar23 = (undefined4 *)(iVar11 * 0x10 + (int)local_88);
      iVar16 = *(int *)(iVar11 * 0x10 + 8 + (int)local_88) + 1;
      puVar23[2] = iVar16;
      iVar11 = FUN_3600bef0(puVar23);
      if (iVar11 < iVar16) {
        iVar11 = FUN_3600bef0(puVar23);
        FUN_36026aa0(puVar23,iVar11 + puVar23[3]);
      }
      *(int *)(puVar23[1] + -4 + puVar23[2] * 4) = iVar8;
      iVar8 = puVar23[2];
      puVar23[2] = iVar8 + 1;
      iVar11 = FUN_3600bef0(puVar23);
      pvVar12 = local_48;
      if (iVar11 < iVar8 + 1) {
        iVar8 = FUN_3600bef0(puVar23);
        FUN_36026aa0(puVar23,iVar8 + puVar23[3]);
        pvVar12 = local_48;
      }
      *(float *)(puVar23[1] + -4 + puVar23[2] * 4) = fVar19;
      iVar11 = (int)local_4c + 1;
      this = local_54;
    }
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_3604a790(local_84,0);
    FUN_360502e0();
    if (((byte)this[0x1278] & 0x10) == 0) {
      local_9c = _DAT_3622e43c / *(float *)(this + 0x1280);
      local_5c = _DAT_3622e43c / *(float *)(this + 0x1284);
      local_28 = _DAT_3622e43c;
    }
    else {
      local_9c = _DAT_36231940 / *(float *)(this + 0x1280);
      local_5c = _DAT_36231940 / *(float *)(this + 0x1284);
      local_28 = _DAT_36231940;
    }
    local_28 = local_28 / *(float *)(this + 0x1288);
    FUN_3605cd80(local_130,&local_98);
    *(float *)(this + 0x128c) = local_98;
    *(float *)(this + 0x1290) = local_94;
    *(float *)(this + 0x1294) = local_90;
    if (_ProgresRoutines != (code *)0x0) {
      (*_ProgresRoutines)(s_Calculating_gouraud_normals_and_s_36230a68);
    }
    if (DAT_362ca418 != (code *)0x0) {
      (*DAT_362ca418)(*(undefined4 *)(this + 0x38));
    }
    pCVar25 = (CTStream *)0x0;
    local_60 = 0;
    param_1 = (CTStream *)0x0;
    pvVar12 = local_48;
    iVar8 = (int)local_4c;
    for (local_a4 = 0; local_48 = pvVar12, local_4c = (float)iVar8, local_a4 < *(int *)(this + 0x38)
        ; local_a4 = local_a4 + 1) {
      if (DAT_362ca41c != (code *)0x0) {
        (*DAT_362ca41c)(local_60);
      }
      local_d8 = 0;
      pvVar12 = local_48;
      iVar8 = (int)local_4c;
      while( true ) {
        local_4c._2_2_ = (undefined2)((uint)iVar8 >> 0x10);
        local_4c._0_2_ = (undefined2)iVar8;
        local_48._2_2_ = (undefined2)((uint)pvVar12 >> 0x10);
        local_48._0_2_ = SUB42(pvVar12,0);
        if (*(int *)(this + 0x34) <= local_d8) break;
        pfVar22 = (float *)((int)local_fc + (int)pCVar25 * 0xc);
        fVar19 = (*(float *)((int)local_fc + (int)pCVar25 * 0xc + 8) - local_90) * local_28;
        if (((byte)this[0x1278] & 0x10) == 0) {
          local_154 = (int)ROUND(fVar19);
          local_15c = (int)ROUND((pfVar22[1] - local_94) * local_5c);
          local_18 = (CListNode *)((*pfVar22 - local_98) * local_9c);
          local_164 = (int)ROUND((float)local_18);
          puVar2 = (undefined2 *)(*(int *)(this + 0x40) + (int)pCVar25 * 4);
          *puVar2 = CONCAT11((undefined1)local_15c,(undefined1)local_164);
          *(undefined1 *)(puVar2 + 1) = (undefined1)local_154;
        }
        else {
          local_158 = (int)ROUND(fVar19);
          local_160 = (int)ROUND((pfVar22[1] - local_94) * local_5c);
          local_18 = (CListNode *)((*pfVar22 - local_98) * local_9c);
          local_150 = (int)ROUND((float)local_18);
          local_4c._2_2_ = (undefined2)local_150;
          puVar23 = (undefined4 *)(*(int *)(this + 0x48) + (int)pCVar25 * 8);
          local_48._0_2_ = (undefined2)local_160;
          *puVar23 = CONCAT22((undefined2)local_160,(undefined2)local_150);
          *(undefined2 *)(puVar23 + 1) = (undefined2)local_158;
        }
        iVar8 = *(int *)(local_54 + 0x34) * local_a4;
        local_58 = 0.0;
        local_24 = 0.0;
        local_20 = 0.0;
        local_1c = 0.0;
        pvVar12 = (void *)(local_d8 * 0x10 + (int)local_88);
        local_38[0] = 0.0;
        while( true ) {
          iVar11 = FUN_36026a70((int)pvVar12);
          if (iVar11 <= (int)local_38[0]) break;
          piVar17 = (int *)(*(int *)((int)pvVar12 + 4) + (int)local_38[0] * 4);
          pfVar24 = (float *)((int)local_fc + (*piVar17 + iVar8) * 0xc);
          local_140._4_4_ = *pfVar24 - *pfVar22;
          local_138._0_4_ = pfVar24[1] - pfVar22[1];
          local_138._4_4_ = pfVar24[2] - pfVar22[2];
          pfVar24 = (float *)((int)local_fc + (piVar17[1] + iVar8) * 0xc);
          local_130[3] = *pfVar24 - *pfVar22;
          local_130[4] = pfVar24[1] - pfVar22[1];
          local_130[5] = pfVar24[2] - pfVar22[2];
          fVar19 = SQRT(local_140._4_4_ * local_140._4_4_ +
                        (float)local_138 * (float)local_138 + local_138._4_4_ * local_138._4_4_);
          fVar3 = _DAT_3622376c;
          if ((float)_DAT_36223438 <= fVar19) {
            fVar3 = _DAT_36223384 / fVar19;
          }
          local_38[3] = local_138._4_4_ * fVar3;
          fVar19 = SQRT(local_130[3] * local_130[3] +
                        local_130[4] * local_130[4] + local_130[5] * local_130[5]);
          fVar4 = _DAT_3622376c;
          if ((float)_DAT_36223438 <= fVar19) {
            fVar4 = _DAT_36223384 / fVar19;
          }
          local_d4 = local_130[4] * fVar4 * local_38[3] -
                     local_130[5] * fVar4 * (float)local_138 * fVar3;
          local_d0 = local_130[5] * fVar4 * local_140._4_4_ * fVar3 -
                     local_130[3] * fVar4 * local_38[3];
          local_cc = local_130[3] * fVar4 * (float)local_138 * fVar3 -
                     local_130[4] * fVar4 * local_140._4_4_ * fVar3;
          local_18 = (CListNode *)
                     SQRT(local_d4 * local_d4 + local_d0 * local_d0 + local_cc * local_cc);
          if ((float)local_18 < _DAT_36227d20) {
            local_64 = (CListNode *)0xbf800000;
          }
          else {
            local_64 = local_18;
            if ((float)local_18 < _DAT_36223384 == ((float)local_18 == _DAT_36223384)) {
              local_64 = (CListNode *)0x3f800000;
            }
          }
          local_b0 = local_d4;
          local_ac = local_d0;
          local_a8 = local_cc;
          local_44 = local_130[3];
          local_40 = local_130[4];
          local_3c = local_130[5];
          local_38[1] = local_140._4_4_;
          local_38[2] = (float)local_138;
          fVar26 = (float10)_CIasin();
          fVar26 = fVar26 * (float10)_DAT_36227d14;
          local_58 = (float)((float10)local_58 + fVar26);
          local_f0[5] = _DAT_36223384 / (float)local_18;
          local_f0[3] = local_b0 * local_f0[5];
          local_f0[4] = local_ac * local_f0[5];
          local_f0[5] = local_a8 * local_f0[5];
          fVar19 = (float)((float10)local_f0[3] * fVar26);
          local_c0 = (double)CONCAT44(fVar19,(undefined4)local_c0);
          local_110 = (double)CONCAT44(fVar19,(undefined4)local_110);
          fVar3 = (float)((float10)local_f0[4] * fVar26);
          fVar4 = (float)((float10)local_f0[5] * fVar26);
          local_b8 = (double)CONCAT44(fVar4,fVar3);
          local_108 = (double)CONCAT44(fVar4,fVar3);
          local_38[0] = (float)((int)local_38[0] + 2);
          local_24 = fVar19 + local_24;
          local_20 = fVar3 + local_20;
          local_1c = fVar4 + local_1c;
        }
        fVar19 = _DAT_36223384 / local_58;
        local_24 = local_24 * fVar19;
        local_20 = local_20 * fVar19;
        fVar19 = fVar19 * local_1c;
        fVar3 = SQRT(local_24 * local_24 + local_20 * local_20 + fVar19 * fVar19);
        fVar4 = _DAT_3622376c;
        if ((float)_DAT_36223438 <= fVar3) {
          fVar4 = _DAT_36223384 / fVar3;
        }
        local_1c = fVar19 * fVar4;
        local_20 = local_20 * fVar4;
        local_24 = local_24 * fVar4;
        if (((byte)local_54[0x1278] & 0x10) == 0) {
          iVar8 = *(int *)(local_54 + 0x40);
          iVar11 = FUN_360bc480(&local_24);
          *(char *)(iVar8 + (int)param_1 * 4 + 3) = (char)iVar11;
        }
        else {
          iVar8 = *(int *)(local_54 + 0x48) + (int)param_1 * 8;
          FUN_360b4b80(&local_24,(undefined1 *)(iVar8 + 6),(undefined1 *)(iVar8 + 7));
        }
        iVar8 = CONCAT22(local_4c._2_2_,(undefined2)local_4c);
        pvVar12 = (void *)CONCAT22(local_48._2_2_,(undefined2)local_48);
        pCVar25 = param_1 + 1;
        local_d8 = local_d8 + 1;
        this = local_54;
        param_1 = pCVar25;
      }
      local_60 = local_60 + 1;
    }
    while (pCVar21 = local_70[0], local_70[0] = *(CListNode **)pCVar21,
          local_70[0] != (CListNode *)0x0) {
      if (pCVar21 + -0x104 != (CListNode *)0x0) {
        iVar8 = CListNode::IsLinked(pCVar21);
        if (iVar8 != 0) {
          CListNode::Remove(pCVar21);
        }
        operator_delete(pCVar21 + -0x104);
      }
    }
    *(float *)(local_54 + 0x1298) = -(local_9c * *(float *)(local_54 + 0x128c));
    *(float *)(local_54 + 0x129c) = -(local_5c * *(float *)(local_54 + 0x1290));
    *(float *)(local_54 + 0x12a0) = -(local_28 * *(float *)(local_54 + 0x1294));
    if (((byte)local_54[0x1278] & 0x10) == 0) {
      *(float *)(local_54 + 0x1280) = *(float *)(local_54 + 0x1280) * _DAT_36230718;
      *(float *)(local_54 + 0x1284) = *(float *)(local_54 + 0x1284) * _DAT_36230718;
      fVar19 = *(float *)(local_54 + 0x1288) * _DAT_36230718;
    }
    else {
      *(float *)(local_54 + 0x1280) = *(float *)(local_54 + 0x1280) * _DAT_3623193c;
      *(float *)(local_54 + 0x1284) = *(float *)(local_54 + 0x1284) * _DAT_3623193c;
      fVar19 = *(float *)(local_54 + 0x1288) * _DAT_3623193c;
    }
    *(float *)(local_54 + 0x1288) = fVar19;
    CObject3D::BatchLoading_t(0);
    local_8._0_1_ = 6;
    StringFree(local_a0);
    local_8 = CONCAT31(local_8._1_3_,2);
    if ((local_8c != (char *)0x0) && (local_88 != (void *)0x0)) {
      pvVar12 = (void *)((int)local_88 + -4);
      _eh_vector_destructor_iterator_(local_88,0x10,*(int *)((int)local_88 + -4),FUN_360b2640);
      operator_delete__(pvVar12);
    }
    if (local_100 != 0) {
      operator_delete__(local_fc);
    }
    local_8 = local_8 & 0xffffff00;
    CObject3D::~CObject3D(local_84);
    ExceptionList = local_10;
    return;
  }
  local_168 = s_I_Trying_to_update_model_s_anima_362308ea + 2;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_168,(ThrowInfo *)&DAT_3624f688);
}

