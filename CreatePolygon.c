
/* public: void __thiscall CWorld::CreatePolygon(class CSelection<class CBrushVertex,2> &) */

void __thiscall CWorld::CreatePolygon(CWorld *this,CSelection<class_CBrushVertex,2> *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  CBrushSector *pCVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  CBrushSector *this_00;
  double *pdVar10;
  double *pdVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  int local_134;
  int local_130;
  undefined8 local_12c;
  float local_124;
  float local_120;
  int local_11c;
  int *local_118;
  int *local_114;
  int *local_110;
  int local_10c;
  double local_108;
  int local_100;
  double local_fc;
  double local_f4;
  double local_ec;
  double local_e4;
  double local_dc;
  double local_d4;
  double local_cc;
  double local_c4;
  double local_bc;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  undefined4 local_74 [8];
  double local_54 [9];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd44c0  1430
                       ?CreatePolygon@CWorld@@QAEXAAV?$CSelection@VCBrushVertex@@$01@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214c59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_360cb7c0((int)param_1);
  if (iVar2 == 3) {
    this_00 = (CBrushSector *)0x0;
    iVar13 = 0;
    iVar2 = FUN_360cb7c0((int)param_1);
    pCVar6 = this_00;
    if (0 < iVar2) {
      do {
        iVar2 = FUN_360cb210(param_1,iVar13);
        this_00 = *(CBrushSector **)(iVar2 + 0x40);
        if (this_00 == (CBrushSector *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if ((pCVar6 != (CBrushSector *)0x0) && (pCVar6 != this_00)) {
          ExceptionList = local_c;
          return;
        }
        iVar13 = iVar13 + 1;
        iVar2 = FUN_360cb7c0((int)param_1);
        pCVar6 = this_00;
      } while (iVar13 < iVar2);
    }
    iVar2 = FUN_360cb210(param_1,0);
    local_10c = iVar2;
    iVar13 = FUN_360cb210(param_1,1);
    iVar3 = FUN_360cb210(param_1,2);
    local_108 = (double)CONCAT44(local_108._4_4_,*(undefined4 *)(this_00 + 0xc));
    iVar4 = FUN_360d6960((undefined4 *)(this_00 + 8));
    FUN_360d6880(this_00 + 8,iVar4 + 3);
    local_11c = *(int *)(this_00 + 0xc);
    local_114 = *(int **)(this_00 + 0x14);
    piVar5 = (int *)FUN_360d6990((undefined4 *)(this_00 + 0x10));
    local_100 = (int)piVar5 + 1;
    local_118 = piVar5;
    FUN_360d6e80(this_00 + 0x10,local_100);
    local_110 = *(int **)(this_00 + 0x14);
    pCVar6 = this_00 + 0x18;
    local_12c = (double)(ZEXT48(pCVar6) << 0x20);
    local_4 = 0;
    if (0 < *(int *)pCVar6) {
      do {
        piVar5 = (int *)((int)local_12c * 0x1d0 + *(int *)(pCVar6 + 4));
        iVar14 = 0;
        iVar2 = FUN_3600be20(piVar5 + 1);
        if (0 < iVar2) {
          do {
            piVar12 = (int *)(piVar5[2] + iVar14 * 8);
            *piVar12 = *piVar12 + (local_11c - local_108._0_4_);
            iVar14 = iVar14 + 1;
            iVar2 = FUN_3600be20(piVar5 + 1);
          } while (iVar14 < iVar2);
        }
        *piVar5 = *piVar5 + ((int)local_110 - (int)local_114);
        FUN_360325f0(piVar5 + 0x6c);
        local_12c._0_4_ = (int)local_12c + 1;
        pCVar6 = local_12c._4_4_;
        piVar5 = local_118;
        iVar2 = local_10c;
      } while ((int)local_12c < *(int *)local_12c._4_4_);
    }
    iVar14 = *(int *)(this_00 + 0xc);
    local_118 = (int *)(iVar14 + iVar4 * 0xc);
    *local_118 = iVar2;
    local_114 = local_118 + 3;
    local_110 = (int *)(iVar14 + (iVar4 * 3 + 6) * 4);
    local_118[1] = iVar13;
    local_118[4] = iVar3;
    *local_114 = iVar13;
    *local_110 = iVar3;
    local_110[1] = iVar2;
    iVar4 = (int)piVar5 * 0x50 + *(int *)(this_00 + 0x14);
    local_4 = 0xffffffff;
    puVar7 = FUN_3604fc60(local_74,(double *)(iVar2 + 0x20),(double *)(iVar13 + 0x20),
                          (double *)(iVar3 + 0x20));
    pdVar11 = (double *)(iVar4 + 0x28);
    pdVar10 = pdVar11;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pdVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
    local_124 = (float)*(double *)(iVar4 + 0x38);
    local_120 = (float)*(double *)(iVar4 + 0x40);
    *(float *)(iVar4 + 0x14) = (float)*pdVar11;
    *(float *)(iVar4 + 0x18) = (float)*(double *)(iVar4 + 0x30);
    *(float *)(iVar4 + 0x1c) = local_124;
    *(float *)(iVar4 + 0x20) = local_120;
    iVar2 = *(int *)(*(int *)(*(int *)(this_00 + 0x38) + 0x14) + 0x668);
    local_108 = (double)*(float *)(iVar2 + 0x44);
    local_12c = (double)*(float *)(iVar2 + 0x40);
    local_dc = (double)*(float *)(iVar2 + 0x3c);
    local_bc = (double)*(float *)(iVar2 + 0x54);
    local_b4 = (double)*(float *)(iVar2 + 0x58);
    local_ac = (double)*(float *)(iVar2 + 0x5c);
    local_a4 = (double)*(float *)(iVar2 + 0x60);
    local_9c = (double)*(float *)(iVar2 + 100);
    local_94 = (double)*(float *)(iVar2 + 0x68);
    local_8c = (double)*(float *)(iVar2 + 0x6c);
    local_84 = (double)*(float *)(iVar2 + 0x70);
    local_7c = (double)*(float *)(iVar2 + 0x74);
    pdVar10 = &local_bc;
    pdVar15 = local_54;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pdVar15 = *(undefined4 *)pdVar10;
      pdVar10 = (double *)((int)pdVar10 + 4);
      pdVar15 = (double *)((int)pdVar15 + 4);
    }
    puVar7 = local_74;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *(undefined4 *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + 4);
      puVar7 = puVar7 + 1;
    }
    puVar7 = (undefined4 *)FUN_3605dfb0(local_74,local_54);
    pdVar11 = &local_fc;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pdVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      pdVar11 = (double *)((int)pdVar11 + 4);
    }
    local_e4 = local_fc * local_dc + local_ec * local_108 + local_f4 * local_12c + local_e4;
    pdVar11 = &local_fc;
    pdVar10 = &local_dc;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pdVar10 = *(undefined4 *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + 4);
      pdVar10 = (double *)((int)pdVar10 + 4);
    }
    local_124 = (float)local_cc;
    local_12c = (double)CONCAT44((float)local_d4,(float)local_dc);
    local_120 = (float)local_c4;
    *(float *)(iVar4 + 4) = (float)local_dc;
    *(float *)(iVar4 + 8) = (float)local_d4;
    *(float *)(iVar4 + 0xc) = local_124;
    *(float *)(iVar4 + 0x10) = local_120;
    FUN_360cd910((float *)(iVar4 + 4),(undefined4 *)(iVar4 + 0x48),(undefined4 *)(iVar4 + 0x4c));
    operator_delete__(*(void **)(this_00 + 0x2c));
    iVar2 = local_100;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    FUN_360d72d0(this_00 + 0x28,local_100);
    if (0 < iVar2) {
      iVar9 = 0;
      iVar14 = 0;
      do {
        *(int *)(iVar9 + *(int *)(this_00 + 0x14)) = *(int *)(this_00 + 0x2c) + iVar14;
        iVar14 = iVar14 + 0x78;
        iVar9 = iVar9 + 0x50;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar14 = FUN_360d69b0((undefined4 *)(this_00 + 0x18));
    iVar9 = 0;
    local_12c = 0.0;
    local_4 = 1;
    FUN_360d7250(&local_12c,iVar14 + 1);
    iVar2 = iVar14;
    if (0 < iVar14) {
      do {
        local_11c = iVar2;
        CBrushPolygon::CopyPolygon
                  ((CBrushPolygon *)(iVar9 + (int)local_12c._4_4_),
                   (CBrushPolygon *)(*(int *)(this_00 + 0x1c) + iVar9));
        iVar9 = iVar9 + 0x1d0;
        iVar2 = local_11c + -1;
      } while (local_11c + -1 != 0);
      local_11c = 0;
    }
    FUN_360d7580(this_00 + 0x18,(int *)&local_12c);
    piVar12 = (int *)(iVar14 * 0x1d0 + *(int *)(this_00 + 0x1c));
    *piVar12 = iVar4;
    piVar12[1] = 3;
    piVar5 = (int *)thunk_FUN_361bf99c(0x20);
    piVar12[2] = (int)piVar5;
    *piVar5 = (int)local_118;
    *(undefined4 *)(piVar12[2] + 4) = 0;
    *(int **)(piVar12[2] + 8) = local_114;
    *(undefined4 *)(piVar12[2] + 0xc) = 0;
    *(int **)(piVar12[2] + 0x10) = local_110;
    *(undefined4 *)(piVar12[2] + 0x14) = 0;
    piVar12[3] = 3;
    piVar5 = (int *)thunk_FUN_361bf99c(0x10);
    piVar12[4] = (int)piVar5;
    *piVar5 = local_10c;
    *(int *)(piVar12[4] + 4) = iVar13;
    *(int *)(piVar12[4] + 8) = iVar3;
    piVar12[5] = 3;
    puVar7 = (undefined4 *)thunk_FUN_361bf99c(0x10);
    piVar12[6] = (int)puVar7;
    *puVar7 = 0;
    *(undefined4 *)(piVar12[6] + 4) = 1;
    *(undefined4 *)(piVar12[6] + 8) = 2;
    piVar12[0x6b] = (int)this_00;
    piVar12[0x31] = 0x7f7f7fff;
    piVar12[0x33] = -1;
    CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)(*(int *)(this_00 + 0x38) + 0x14));
    iVar2 = FUN_360d6960((undefined4 *)(this_00 + 8));
    if (*(int *)(this_00 + 0x30) != 0) {
      operator_delete__(*(void **)(this_00 + 0x34));
      *(undefined4 *)(this_00 + 0x30) = 0;
      *(undefined4 *)(this_00 + 0x34) = 0;
    }
    if (iVar2 != 0) {
      *(int *)(this_00 + 0x30) = iVar2;
      uVar8 = thunk_FUN_361bf99c(iVar2 * 8 + 8);
      *(undefined4 *)(this_00 + 0x34) = uVar8;
    }
    local_134 = 0;
    if (0 < iVar2) {
      local_130 = 0;
      do {
        piVar5 = (int *)(*(int *)(this_00 + 0x34) + local_134 * 8);
        iVar13 = *(int *)(*(int *)(this_00 + 0xc) + local_130);
        iVar3 = *(int *)(this_00 + 0xc) + local_130;
        *(int **)(iVar3 + 8) = piVar5;
        iVar13 = FUN_360d67e0(this_00,iVar13);
        *piVar5 = iVar13;
        iVar13 = FUN_360d67e0(this_00,*(int *)(iVar3 + 4));
        piVar5[1] = iVar13;
        local_134 = local_134 + 1;
        local_130 = local_130 + 0xc;
      } while (local_134 < iVar2);
    }
    CBrushSector::UpdateSector(this_00);
    local_4 = 0xffffffff;
    if (((int)local_12c != 0) && (local_12c._4_4_ != (void *)0x0)) {
      pvVar1 = (void *)((int)local_12c._4_4_ + -4);
      _eh_vector_destructor_iterator_
                (local_12c._4_4_,0x1d0,*(int *)((int)local_12c._4_4_ + -4),
                 CBrushPolygon::~CBrushPolygon);
      operator_delete__(pvVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

