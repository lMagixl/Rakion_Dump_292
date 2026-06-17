
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CWorld::SplitSectors(class CEntity &,class CSelection<class
   CBrushSector,1> &,class CWorld &,class CEntity &,class CPlacement3D const &) */

void __thiscall
CWorld::SplitSectors
          (CWorld *this,CEntity *param_1,CSelection<class_CBrushSector,1> *param_2,CWorld *param_3,
          CEntity *param_4,CPlacement3D *param_5)

{
  CBrushMip *pCVar1;
  CBrushMip *this_00;
  int iVar2;
  undefined4 *puVar3;
  CBrushSector *pCVar4;
  float fVar5;
  CObject3D *pCVar6;
  float local_98;
  float local_94;
  float local_90;
  float local_84;
  CSelection<class_CBrushSector,1> *local_80;
  float local_7c;
  CSelection<class_CBrushSector,4> local_78 [16];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  CObject3D local_38 [20];
  AABBox<float,3> local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd60b0  3650
                       ?SplitSectors@CWorld@@QAEXAAVCEntity@@AAV?$CSelection@VCBrushSector@@$00@@AAV1@0ABVCPlacement3D@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214e38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360d3920();
  pCVar1 = GetBrushMip(this,param_1);
  if ((pCVar1 != (CBrushMip *)0x0) &&
     (this_00 = GetBrushMip(this,param_4), this_00 != (CBrushMip *)0x0)) {
    iVar2 = FUN_36043600((int)this_00);
    if (1 < iVar2) {
      FUN_360cc7f0(&local_98);
      local_4 = 0;
      CBrushMip::SelectAllSectors(this_00,(CSelection<class_CBrushSector,1> *)&local_98);
      JoinSectors(param_3,(CSelection<class_CBrushSector,1> *)&local_98);
      FUN_360cce30(&local_98);
      FUN_360cce00((int *)&local_98);
    }
    FUN_360cc7f0((undefined4 *)local_78);
    local_4 = 1;
    CBrushMip::SelectAllSectors(this_00,local_78);
    CObject3D::CObject3D(local_38);
    local_68 = _DAT_36227d78;
    local_50 = _DAT_36227d80;
    local_60 = _DAT_36227d78;
    local_48 = _DAT_36227d80;
    local_58 = _DAT_36227d78;
    local_40 = _DAT_36227d80;
    local_4 = CONCAT31(local_4._1_3_,2);
    CopySourceBrushSectorsToObject
              (param_3,param_4,local_78,param_5,local_38,(CPlacement3D *)(param_1 + 0x3c),
               (AABBox<double,3> *)&local_68);
    iVar2 = FUN_360cb790((int)param_2);
    if (iVar2 == 0) {
      puVar3 = FUN_360d7160(local_24,&local_68);
      CBrushMip::SelectSectorsInRange
                (pCVar1,param_2,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],puVar3[5]);
    }
    fVar5 = 0.0;
    local_80 = param_2;
    local_84 = 0.0;
    local_4 = CONCAT31(local_4._1_3_,3);
    iVar2 = FUN_360cb790((int)param_2);
    if (0 < iVar2) {
      do {
        FUN_3604b5c0(&local_98,local_38);
        pCVar6 = (CObject3D *)&local_98;
        local_4._0_1_ = 4;
        pCVar4 = (CBrushSector *)FUN_360cb0d0(param_2,(int)fVar5);
        SplitOneSector(this,pCVar4,pCVar6);
        local_4 = CONCAT31(local_4._1_3_,3);
        CObject3D::~CObject3D((CObject3D *)&local_98);
        fVar5 = (float)((int)fVar5 + 1);
        local_84 = fVar5;
        iVar2 = FUN_360cb790((int)param_2);
      } while ((int)fVar5 < iVar2);
    }
    local_4._0_1_ = 2;
    CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)(pCVar1 + 0x14));
    local_7c = (float)local_40;
    local_80 = (CSelection<class_CBrushSector,1> *)(float)local_48;
    local_84 = (float)local_50;
    local_90 = (float)local_58;
    local_94 = (float)local_60;
    local_98 = (float)local_68;
    FUN_360bef70(local_24,&local_98,&local_84);
    FindShadowLayers(this,local_24,0,1);
    FUN_360ccb10((undefined4 *)param_2);
    local_4 = CONCAT31(local_4._1_3_,1);
    CObject3D::~CObject3D(local_38);
    FUN_360d7340((undefined4 *)local_78);
    FUN_360cce00((int *)local_78);
  }
  ExceptionList = local_c;
  return;
}

