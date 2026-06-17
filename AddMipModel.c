
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CEditModel::AddMipModel(class CObject3D *) */

void __thiscall CEditModel::AddMipModel(CEditModel *this,CObject3D *param_1)

{
  uint *puVar1;
  CEditModel *pCVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  void *pvVar6;
  double *pdVar7;
  void *pvVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  void *this_00;
  int *piVar14;
  int *piVar15;
  ModelTextureVertex *pMVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  ModelTextureVertex *this_01;
  int local_5c;
  int local_54;
  int *local_50;
  int local_4c;
  int local_44;
  int local_3c;
  int *local_38;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0xaa410  990  ?AddMipModel@CEditModel@@AAEXPAVCObject3D@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_36213738;
  local_14 = ExceptionList;
  uVar18 = 1 << ((byte)*(int *)(this + 0x6c) & 0x1f);
  pCVar2 = this + *(int *)(this + 0x6c) * 0x60 + 0xf0;
  iVar5 = 0;
  ExceptionList = &local_14;
  if (0 < *(int *)(this + 0x34)) {
    ExceptionList = &local_14;
    do {
      *(uint *)(*(int *)(this + 0x68) + iVar5 * 4) =
           *(uint *)(*(int *)(this + 0x68) + iVar5 * 4) & ~uVar18;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0x34));
  }
  iVar5 = FUN_3604a790(param_1,0);
  iVar5 = FUN_3604aa70(iVar5);
  iVar19 = 0;
  if (0 < iVar5) {
    do {
      local_5c = 0;
      if (0 < *(int *)(this + 0x34)) {
        pfVar17 = *(float **)(this + 0x58);
        do {
          pvVar6 = (void *)FUN_3604a790(param_1,0);
          pdVar7 = (double *)FUN_3604a710(pvVar6,iVar19);
          if (ABS(SQRT(((float)*pdVar7 - *pfVar17) * ((float)*pdVar7 - *pfVar17) +
                       ((float)pdVar7[1] - pfVar17[1]) * ((float)pdVar7[1] - pfVar17[1]) +
                       ((float)pdVar7[2] - pfVar17[2]) * ((float)pdVar7[2] - pfVar17[2]))) <
              _DAT_36228818) {
            puVar1 = (uint *)(*(int *)(this + 0x68) + local_5c * 4);
            *puVar1 = *puVar1 | uVar18;
            pvVar6 = (void *)FUN_3604a790(param_1,0);
            iVar9 = FUN_3604a710(pvVar6,iVar19);
            *(int *)(iVar9 + 0x1c) = local_5c;
            goto LAB_360aa5ea;
          }
          local_5c = local_5c + 1;
          pfVar17 = pfVar17 + 3;
        } while (local_5c < *(int *)(this + 0x34));
      }
      pvVar6 = (void *)FUN_3604a790(param_1,0);
      pvVar8 = (void *)FUN_3604a790(param_1,0);
      iVar9 = FUN_3604a710(pvVar8,iVar19);
      pvVar8 = (void *)FUN_3604a790(param_1,0);
      puVar10 = (undefined8 *)FUN_3604a710(pvVar8,iVar19);
      iVar11 = FUN_3604a710(pvVar6,iVar19);
      ThrowF_t(s_Vertex_from_mip_model__d_with_nu_36231458,*(undefined4 *)(this + 0x6c),iVar19,
               *puVar10,*(undefined8 *)(iVar9 + 8),*(undefined8 *)(iVar11 + 0x10));
LAB_360aa5ea:
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar5);
  }
  iVar5 = FUN_3604a790(param_1,0);
  iVar5 = FUN_3604a760(iVar5 + 0x50);
  *(int *)pCVar2 = iVar5;
  FUN_3600bf20(pCVar2 + 0x10,iVar5);
  iVar5 = FUN_3604a790(param_1,0);
  iVar5 = FUN_36054350(iVar5 + 0x28);
  FUN_3600c050(pCVar2 + 0x20,iVar5);
  iVar19 = 0;
  iVar5 = FUN_3604a790(param_1,0);
  iVar5 = FUN_36054350(iVar5 + 0x28);
  if (0 < iVar5) {
    local_5c = 0;
    do {
      puVar20 = (undefined4 *)(*(int *)(pCVar2 + 0x24) + local_5c);
      puVar20[0x10] = 0x40000000;
      puVar20[0x11] = 0x80000000;
      iVar5 = FUN_3604a790(param_1,0);
      iVar5 = FUN_3604f3f0((void *)(iVar5 + 0x28),iVar19);
      pcVar12 = StringDuplicate(*(char **)(iVar5 + 8));
      local_c = 0;
      pcVar13 = StringDuplicate(pcVar12);
      StringFree((char *)*puVar20);
      *puVar20 = pcVar13;
      local_c = 0xffffffff;
      StringFree(pcVar12);
      puVar20[2] = 0x3f800000;
      puVar20[3] = 0x3f800000;
      puVar20[4] = 0x3f800000;
      puVar20[5] = 0;
      puVar20[6] = 0;
      puVar20[7] = 0;
      puVar20[8] = 0x3f800000;
      iVar5 = FUN_3604a790(param_1,0);
      iVar5 = FUN_3604f3f0((void *)(iVar5 + 0x28),iVar19);
      puVar20[1] = *(uint *)(iVar5 + 0x14) | 0xff;
      local_5c = local_5c + 0x70;
      puVar20[0x13] = 1;
      puVar20[0x14] = 0;
      puVar20[0x12] = 0xa0;
      iVar19 = iVar19 + 1;
      iVar5 = FUN_3604a790(param_1,0);
      iVar5 = FUN_36054350(iVar5 + 0x28);
    } while (iVar19 < iVar5);
  }
  iVar5 = *(int *)pCVar2;
  iVar19 = 0;
  local_5c = 0;
  if (0 < iVar5) {
    do {
      iVar9 = FUN_3604a790(param_1,0);
      iVar9 = FUN_3604a750((void *)(iVar9 + 0x50),iVar19);
      iVar9 = FUN_3604aa50(iVar9 + 0x4c);
      local_5c = local_5c + iVar9;
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar5);
  }
  local_54 = 0;
  local_3c = 0;
  local_38 = (int *)0x0;
  local_c = 1;
  if (local_5c != 0) {
    local_38 = (int *)thunk_FUN_361bf99c((local_5c * 3 + 3) * 4);
    local_3c = local_5c;
  }
  iVar5 = FUN_3604a790(param_1,0);
  pvVar6 = (void *)(iVar5 + 0x50);
  local_4c = 0;
  iVar5 = FUN_3604a760((int)pvVar6);
  if (0 < iVar5) {
    do {
      iVar5 = FUN_3604a790(param_1,0);
      iVar19 = FUN_3604a750(pvVar6,local_4c);
      iVar5 = thunk_FUN_360b1430((void *)(iVar5 + 0x28),*(int *)(iVar19 + 0x60));
      iVar19 = FUN_3604a750(pvVar6,local_4c);
      pvVar8 = (void *)(iVar19 + 0x4c);
      iVar9 = 0;
      iVar19 = FUN_3604aa50((int)pvVar8);
      if (0 < iVar19) {
        local_50 = local_38 + local_54 * 3;
        do {
          *local_50 = iVar5;
          this_00 = (void *)FUN_3604a790(param_1,0);
          piVar14 = (int *)FUN_3604a700(pvVar8,iVar9);
          iVar19 = thunk_FUN_360b1400(this_00,*(int *)(*piVar14 + 0x10));
          local_50[2] = iVar19;
          local_50 = local_50 + 3;
          local_54 = local_54 + 1;
          iVar9 = iVar9 + 1;
          iVar19 = FUN_3604aa50((int)pvVar8);
        } while (iVar9 < iVar19);
      }
      local_4c = local_4c + 1;
      iVar5 = FUN_3604a760((int)pvVar6);
    } while (local_4c < iVar5);
  }
  local_50 = (int *)0x0;
  iVar5 = 0;
  piVar14 = local_38;
  if (0 < local_5c) {
    do {
      iVar19 = 0;
      if (0 < iVar5) {
        piVar15 = local_38;
        do {
          if ((*piVar15 == *piVar14) && (piVar15[2] == piVar14[2])) {
            piVar14[1] = local_38[iVar19 * 3 + 1];
            goto LAB_360aa969;
          }
          iVar19 = iVar19 + 1;
          piVar15 = piVar15 + 3;
        } while (iVar19 < iVar5);
      }
      piVar14[1] = (int)local_50;
      local_50 = (int *)((int)local_50 + 1);
LAB_360aa969:
      iVar5 = iVar5 + 1;
      piVar14 = piVar14 + 3;
    } while (iVar5 < local_5c);
  }
  if (local_50 != (int *)0x0) {
    *(int **)(pCVar2 + 0x18) = local_50;
    iVar5 = (int)local_50 + 1;
    pMVar16 = (ModelTextureVertex *)thunk_FUN_361bf99c(iVar5 * 0x34);
    local_c._0_1_ = 2;
    if (pMVar16 == (ModelTextureVertex *)0x0) {
      pMVar16 = (ModelTextureVertex *)0x0;
    }
    else {
      this_01 = pMVar16;
      if (-1 < (int)local_50) {
        do {
          ModelTextureVertex::ModelTextureVertex(this_01);
          iVar5 = iVar5 + -1;
          this_01 = this_01 + 0x34;
        } while (iVar5 != 0);
      }
    }
    local_c = CONCAT31(local_c._1_3_,1);
    *(ModelTextureVertex **)(pCVar2 + 0x1c) = pMVar16;
  }
  if (0 < local_5c) {
    piVar14 = local_38 + 1;
    do {
      iVar5 = piVar14[1];
      pvVar6 = (void *)FUN_3604a790(param_1,0);
      pdVar7 = (double *)FUN_3604a710(pvVar6,iVar5);
      dVar3 = pdVar7[1];
      dVar4 = pdVar7[2];
      pfVar17 = (float *)(*piVar14 * 0x34 + *(int *)(pCVar2 + 0x1c));
      *pfVar17 = (float)*pdVar7;
      pfVar17[1] = (float)dVar3;
      piVar14 = piVar14 + 3;
      local_5c = local_5c + -1;
      pfVar17[2] = (float)dVar4;
    } while (local_5c != 0);
  }
  local_44 = 0;
  local_5c = 0;
  if (0 < *(int *)pCVar2) {
    local_4c = 0;
    do {
      piVar14 = (int *)(*(int *)(pCVar2 + 0x14) + local_4c);
      iVar5 = local_5c;
      iVar19 = FUN_3604a790(param_1,0);
      iVar5 = FUN_3604a750((void *)(iVar19 + 0x50),iVar5);
      iVar5 = *(int *)(iVar5 + 0x60);
      iVar19 = FUN_3604a790(param_1,0);
      iVar5 = thunk_FUN_360b1430((void *)(iVar19 + 0x28),iVar5);
      piVar14[4] = iVar5;
      iVar5 = local_5c;
      iVar19 = FUN_3604a790(param_1,0);
      iVar5 = FUN_3604a750((void *)(iVar19 + 0x50),iVar5);
      piVar14[3] = *(uint *)(*(int *)(iVar5 + 0x60) + 0x14) | 0xff;
      iVar5 = local_5c;
      iVar19 = FUN_3604a790(param_1,0);
      iVar5 = FUN_3604a750((void *)(iVar19 + 0x50),iVar5);
      iVar5 = FUN_3604aa50(iVar5 + 0x4c);
      if (iVar5 != 0) {
        *piVar14 = iVar5;
        iVar19 = thunk_FUN_361bf99c(iVar5 * 8 + 8);
        piVar14[1] = iVar19;
      }
      iVar19 = 0;
      if (0 < iVar5) {
        local_50 = local_38 + local_44 * 3 + 1;
        local_44 = local_44 + iVar5;
        do {
          iVar9 = local_50[1];
          pvVar6 = (void *)FUN_3604a790(param_1,0);
          iVar9 = FUN_3604a710(pvVar6,iVar9);
          *(int *)(piVar14[1] + iVar19 * 8) = *(int *)(iVar9 + 0x1c) * 0x38 + *(int *)(this + 0x60);
          iVar9 = *local_50;
          local_50 = local_50 + 3;
          *(int *)(piVar14[1] + 4 + iVar19 * 8) = iVar9 * 0x34 + *(int *)(pCVar2 + 0x1c);
          iVar19 = iVar19 + 1;
        } while (iVar19 < iVar5);
      }
      local_5c = local_5c + 1;
      local_4c = local_4c + 0x1c;
    } while (local_5c < *(int *)pCVar2);
  }
  *(int *)(this + 0x6c) = *(int *)(this + 0x6c) + 1;
  if (local_3c != 0) {
    operator_delete__(local_38);
  }
  ExceptionList = local_14;
  return;
}

