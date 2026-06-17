
/* public: void __thiscall CBrushSector::CalculateBoundingBoxes(class CSimpleProjection3D_DOUBLE &)
    */

void __thiscall
CBrushSector::CalculateBoundingBoxes(CBrushSector *this,CSimpleProjection3D_DOUBLE *param_1)

{
  undefined1 uVar1;
  int iVar2;
  BSPPolygon<double,3> *pBVar3;
  int iVar4;
  float *pfVar5;
  CBrushPolygon *this_00;
  Vector<double,3> *pVVar6;
  int iVar7;
  Plane<double,3> *pPVar8;
  int local_78;
  int local_74;
  float local_6c;
  Plane<double,3> *local_68;
  float local_64;
  int local_60;
  Vector<double,3> *local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x13ddc0  1126
                       ?CalculateBoundingBoxes@CBrushSector@@QAEXAAVCSimpleProjection3D_DOUBLE@@@Z
                        */
  local_c = 0xffffffff;
  puStack_10 = &LAB_362198c6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_360d3920();
  iVar7 = 0;
  if ((((byte)this[0x4c] & 2) == 0) && (DAT_362fcc40 == 0)) {
    FUN_360325c0((undefined4 *)(this + 0x90));
  }
  local_60 = 0;
  local_5c = (Vector<double,3> *)0x0;
  local_c = 0;
  iVar2 = FUN_360fac30((undefined4 *)this);
  FUN_361401a0(&local_60,iVar2);
  local_30 = 3e+38;
  *(undefined4 *)(this + 0x6c) = 0x7f61b1e6;
  local_2c = 0x7f61b1e6;
  *(undefined4 *)(this + 0x70) = 0x7f61b1e6;
  local_28 = 0x7f61b1e6;
  *(undefined4 *)(this + 0x74) = 0x7f61b1e6;
  local_24 = -3e+38;
  *(undefined4 *)(this + 0x78) = 0xff61b1e6;
  local_20 = 0xff61b1e6;
  *(undefined4 *)(this + 0x7c) = 0xff61b1e6;
  local_1c = 0xff61b1e6;
  *(undefined4 *)(this + 0x80) = 0xff61b1e6;
  local_74 = 0;
  iVar2 = FUN_360fac30((undefined4 *)this);
  if (0 < iVar2) {
    local_78 = 0;
    pVVar6 = local_5c;
    do {
      *(Vector<double,3> **)(*(int *)(this + 4) + 0x38 + iVar7) = pVVar6;
      *(int *)(iVar7 + *(int *)(this + 4)) = *(int *)(this + 0x24) + local_78;
      CSimpleProjection3D_DOUBLE::ProjectCoordinate
                (param_1,(Vector<double,3> *)(*(int *)(this + 4) + 0x20 + iVar7),pVVar6);
      local_64 = (float)*(double *)(pVVar6 + 0x10);
      local_68 = (Plane<double,3> *)(float)*(double *)(pVVar6 + 8);
      local_6c = (float)*(double *)pVVar6;
      pfVar5 = (float *)(*(int *)(this + 4) + 4 + iVar7);
      *pfVar5 = local_6c;
      pfVar5[1] = (float)local_68;
      pfVar5[2] = local_64;
      local_50 = (float)*(double *)(*(int *)(this + 4) + 0x30 + iVar7);
      iVar2 = *(int *)(this + 4) + iVar7;
      local_54 = (float)*(double *)(iVar2 + 0x28);
      local_58 = (float)*(double *)(iVar2 + 0x20);
      *(float *)(iVar2 + 0x10) = local_58;
      *(float *)(iVar2 + 0x14) = local_54;
      *(float *)(iVar2 + 0x18) = local_50;
      pfVar5 = (float *)(*(int *)(this + 0x24) + local_78);
      *pfVar5 = local_58;
      pfVar5[1] = local_54;
      pfVar5[2] = local_50;
      local_30 = *(float *)(*(int *)(this + 4) + 0x10 + iVar7);
      iVar2 = *(int *)(this + 4) + 0x10 + iVar7;
      local_2c = *(undefined4 *)(iVar2 + 4);
      local_28 = *(undefined4 *)(iVar2 + 8);
      local_24 = local_30;
      local_20 = local_2c;
      local_1c = local_28;
      FUN_360b1850(this + 0x6c,&local_30);
      local_74 = local_74 + 1;
      local_78 = local_78 + 0xc;
      pVVar6 = pVVar6 + 0x18;
      iVar7 = iVar7 + 0x48;
      iVar2 = FUN_360fac30((undefined4 *)this);
    } while (local_74 < iVar2);
  }
  local_6c = 0.0;
  local_68 = (Plane<double,3> *)0x0;
  local_c = CONCAT31(local_c._1_3_,1);
  iVar7 = FUN_360d6990((undefined4 *)(this + 0x10));
  FUN_36140240(&local_6c,iVar7);
  local_74 = 0;
  iVar7 = FUN_360d6990((undefined4 *)(this + 0x10));
  if (0 < iVar7) {
    iVar7 = 0;
    local_78 = 0;
    pPVar8 = local_68;
    do {
      *(Plane<double,3> **)(*(int *)(this + 0x14) + 0x24 + iVar7) = pPVar8;
      *(int *)(iVar7 + *(int *)(this + 0x14)) = *(int *)(this + 0x2c) + local_78;
      CSimpleProjection3D_DOUBLE::Project
                (param_1,(Plane<double,3> *)(*(int *)(this + 0x14) + 0x28 + iVar7),pPVar8);
      local_44 = (float)*(double *)(pPVar8 + 0x10);
      local_48 = (float)*(double *)(pPVar8 + 8);
      local_4c = (float)*(double *)pPVar8;
      pfVar5 = (float *)(*(int *)(this + 0x14) + 4 + iVar7);
      local_24 = (float)*(double *)(pPVar8 + 0x18);
      *pfVar5 = local_4c;
      pfVar5[1] = local_48;
      pfVar5[2] = local_44;
      pfVar5[3] = local_24;
      local_50 = (float)*(double *)(*(int *)(this + 0x14) + 0x38 + iVar7);
      iVar2 = *(int *)(this + 0x14) + iVar7;
      local_54 = (float)*(double *)(iVar2 + 0x30);
      local_58 = (float)*(double *)(iVar2 + 0x28);
      local_34 = (float)*(double *)(iVar2 + 0x40);
      *(float *)(iVar2 + 0x14) = local_58;
      *(float *)(iVar2 + 0x18) = local_54;
      *(float *)(iVar2 + 0x1c) = local_50;
      *(float *)(iVar2 + 0x20) = local_34;
      pfVar5 = (float *)(*(int *)(this + 0x2c) + local_78);
      *pfVar5 = local_58;
      pfVar5[1] = local_54;
      pfVar5[2] = local_50;
      pfVar5[3] = local_34;
      CMappingVectors::FromPlane
                ((CMappingVectors *)((Plane<float,3> *)(local_78 + *(int *)(this + 0x2c)) + 0x10),
                 (Plane<float,3> *)(local_78 + *(int *)(this + 0x2c)));
      iVar2 = *(int *)(this + 0x14) + iVar7;
      FUN_360cd910((float *)(iVar2 + 4),(undefined4 *)(iVar2 + 0x48),(undefined4 *)(iVar2 + 0x4c));
      local_74 = local_74 + 1;
      pPVar8 = pPVar8 + 0x20;
      local_78 = local_78 + 0x78;
      iVar7 = iVar7 + 0x50;
      iVar2 = FUN_360d6990((undefined4 *)(this + 0x10));
    } while (local_74 < iVar2);
  }
  local_30 = 3e+38;
  *(undefined4 *)(this + 0x54) = 0x7f61b1e6;
  local_2c = 0x7f61b1e6;
  *(undefined4 *)(this + 0x58) = 0x7f61b1e6;
  local_28 = 0x7f61b1e6;
  *(undefined4 *)(this + 0x5c) = 0x7f61b1e6;
  local_24 = -3e+38;
  *(undefined4 *)(this + 0x60) = 0xff61b1e6;
  local_20 = 0xff61b1e6;
  local_1c = 0xff61b1e6;
  *(undefined4 *)(this + 100) = 0xff61b1e6;
  *(undefined4 *)(this + 0x68) = 0xff61b1e6;
  local_74 = 0;
  local_c._0_1_ = 2;
  if (0 < *(int *)(this + 0x18)) {
    do {
      CBrushPolygon::CalculateBoundingBox
                ((CBrushPolygon *)(*(int *)(this + 0x1c) + local_74 * 0x1d0));
      FUN_360b1850(this + 0x54,(float *)(*(int *)(this + 0x1c) + 0x194 + local_74 * 0x1d0));
      local_74 = local_74 + 1;
    } while (local_74 < *(int *)(this + 0x18));
  }
  local_c._0_1_ = 1;
  uVar1 = (undefined1)local_c;
  local_c._0_1_ = 1;
  if (((byte)this[0x4c] & 1) == 0) {
    FUN_360e05d0(*(int **)(this + 0x8c));
    iVar7 = *(int *)(*(int *)(*(int *)(this + 0x38) + 0x14) + 0x668);
    uVar1 = (undefined1)local_c;
    if ((iVar7 != 0) && (((*(byte *)(iVar7 + 0x10) & 2) != 0 || (*(int *)(iVar7 + 4) == 8)))) {
      iVar7 = FUN_360d69b0((undefined4 *)(this + 0x18));
      FUN_36054650((CListHead *)&local_30);
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_360562d0(&local_30,iVar7);
      iVar2 = 0;
      if (0 < iVar7) {
        local_74 = 0;
        do {
          iVar4 = *(int *)(this + 0x1c);
          pBVar3 = (BSPPolygon<double,3> *)FUN_36054990(&local_30,iVar2);
          CBrushPolygon::CreateBSPPolygon((CBrushPolygon *)(iVar4 + local_74),pBVar3);
          iVar2 = iVar2 + 1;
          local_74 = local_74 + 0x1d0;
        } while (iVar2 < iVar7);
      }
      FUN_360e3f80(*(void **)(this + 0x8c),&local_30);
      local_c._0_1_ = 1;
      thunk_FUN_36056320(&local_30);
      uVar1 = (undefined1)local_c;
    }
  }
  local_c._0_1_ = uVar1;
  *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & 0xfffffffc;
  iVar2 = 0;
  iVar7 = FUN_360d69b0((undefined4 *)(this + 0x18));
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      this_00 = (CBrushPolygon *)(*(int *)(this + 0x1c) + iVar7);
      if ((*(int *)(*(int *)(this + 0x1c) + 0xf8 + iVar7) == 0) || (*(int *)(this_00 + 0x120) < 0))
      {
        CBrushPolygon::InitializeShadowMap(this_00);
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + 0x1d0;
      iVar4 = FUN_360d69b0((undefined4 *)(this + 0x18));
    } while (iVar2 < iVar4);
  }
  if (local_6c != 0.0) {
    operator_delete__(local_68);
  }
  if (local_60 != 0) {
    operator_delete__(local_5c);
  }
  ExceptionList = local_14;
  return;
}

