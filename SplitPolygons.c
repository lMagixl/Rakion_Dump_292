
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CWorld::SplitPolygons(class CEntity &,class CSelection<class
   CBrushPolygon,256> &,class CWorld &,class CEntity &,class CPlacement3D const &) */

void __thiscall
CWorld::SplitPolygons
          (CWorld *this,CEntity *param_1,CSelection<class_CBrushPolygon,256> *param_2,
          CWorld *param_3,CEntity *param_4,CPlacement3D *param_5)

{
  CBrushMip *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  CObject3D local_88 [20];
  CObject3D local_74 [20];
  CObject3D local_60 [20];
  CSelection<class_CBrushSector,4> local_4c [16];
  int local_3c [4];
  CSelection<class_CBrushSector,4> local_2c [16];
  CBrushMip *local_1c;
  CWorld *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xd5720  3649
                       ?SplitPolygons@CWorld@@QAEXAAVCEntity@@AAV?$CSelection@VCBrushPolygon@@$0BAA@@@AAV1@0ABVCPlacement3D@@@Z
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36214d75;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  ExceptionList = &local_10;
  local_18 = this;
  pCVar1 = GetBrushMip(this,param_4);
  iVar5 = 0;
  if (pCVar1 != (CBrushMip *)0x0) {
    local_1c = pCVar1;
    iVar2 = FUN_360cb720((int)param_2);
    FUN_360cc7f0(local_3c);
    local_8 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = FUN_360cb0a0(param_2,iVar5);
        iVar3 = *(int *)(iVar3 + 0x1ac);
        iVar4 = FUN_360cbfa0(local_3c,iVar3);
        if (iVar4 == 0) {
          FUN_360cc810(local_3c,iVar3);
        }
        iVar5 = iVar5 + 1;
        pCVar1 = local_1c;
      } while (iVar5 < iVar2);
    }
    FUN_360ccae0((undefined4 *)param_2);
    FUN_360cc7f0((undefined4 *)local_4c);
    local_8._0_1_ = 1;
    CBrushMip::SelectAllSectors(pCVar1,local_4c);
    CObject3D::CObject3D(local_74);
    local_b8 = _DAT_36227d78;
    local_a0 = _DAT_36227d80;
    local_b0 = _DAT_36227d78;
    local_98 = _DAT_36227d80;
    local_a8 = _DAT_36227d78;
    local_90 = _DAT_36227d80;
    local_8 = CONCAT31(local_8._1_3_,2);
    CopySourceBrushSectorsToObject
              (param_3,param_4,local_4c,param_5,local_74,(CPlacement3D *)(param_1 + 0x3c),
               (AABBox<double,3> *)&local_b8);
    iVar5 = FUN_360cb790((int)local_3c);
    for (iVar2 = 0; iVar2 < iVar5; iVar2 = iVar2 + 1) {
      iVar3 = FUN_360cb0d0(local_3c,iVar2);
      pCVar1 = *(CBrushMip **)(iVar3 + 0x38);
      FUN_360cc7f0((undefined4 *)local_2c);
      local_8._0_1_ = 3;
      FUN_360d7380(local_2c,iVar3);
      CObject3D::CObject3D(local_60);
      local_8._0_1_ = 4;
      CBrushMip::ToObject3D(pCVar1,local_60,local_2c);
      CBrushMip::DeleteSelectedSectors(pCVar1,local_2c);
      CObject3D::CObject3D(local_88);
      local_8._0_1_ = 5;
      CObject3D::CSGSplitPolygons(local_88,local_60,local_74);
      local_8 = CONCAT31(local_8._1_3_,6);
      CBrushMip::AddFromObject3D_t(pCVar1,local_88);
      local_8 = 5;
      CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)(pCVar1 + 0x14));
      FindShadowLayers(local_18,(AABBox<float,3> *)(pCVar1 + 0x24),0,1);
      local_8._0_1_ = 4;
      CObject3D::~CObject3D(local_88);
      local_8 = CONCAT31(local_8._1_3_,3);
      CObject3D::~CObject3D(local_60);
      FUN_360d7340((undefined4 *)local_2c);
      FUN_360cce00((int *)local_2c);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    CObject3D::~CObject3D(local_74);
    FUN_360d7340((undefined4 *)local_4c);
    FUN_360cce00((int *)local_4c);
    FUN_360cce00(local_3c);
  }
  ExceptionList = local_10;
  return;
}

