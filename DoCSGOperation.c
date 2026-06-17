
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CWorld::DoCSGOperation(class CEntity &,class CWorld &,class CEntity
   &,class CPlacement3D const &,void (__thiscall CObject3D::*)(class CObject3D &,class CObject3D
   &),void (__thiscall CObject3D::*)(class CObject3D &,class CObject3D &)) */

void __thiscall
CWorld::DoCSGOperation
          (CWorld *this,CEntity *param_1,CWorld *param_2,CEntity *param_3,CPlacement3D *param_4,
          _func_void_CObject3D_ptr_CObject3D_ptr *param_5,
          _func_void_CObject3D_ptr_CObject3D_ptr *param_6)

{
  CBrushMip *pCVar1;
  CBrushMip *this_00;
  int iVar2;
  CObject3D local_dc [20];
  CObject3D local_c8 [20];
  CObject3D local_b4 [20];
  CSelection<class_CBrushSector,4> local_a0 [16];
  CSelection<class_CBrushSector,4> local_90 [16];
  CObject3D aCStack_80 [20];
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xd4f00  1520
                       ?DoCSGOperation@CWorld@@QAEXAAVCEntity@@AAV1@0ABVCPlacement3D@@P8CObject3D@@AEXAAV4@3@Z4@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214cd2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360d3920();
  pCVar1 = GetBrushMip(this,param_1);
  this_00 = GetBrushMip(this,param_3);
  if ((pCVar1 != (CBrushMip *)0x0) && (this_00 != (CBrushMip *)0x0)) {
    FUN_360cc7f0((undefined4 *)local_a0);
    local_4 = 0;
    CBrushMip::SelectOpenSector(this_00,local_a0);
    CObject3D::CObject3D(local_b4);
    local_6c = _DAT_36227d78;
    local_54 = _DAT_36227d80;
    local_64 = _DAT_36227d78;
    local_4c = _DAT_36227d80;
    local_5c = _DAT_36227d78;
    local_44 = _DAT_36227d80;
    local_4._0_1_ = 1;
    CopySourceBrushSectorsToObject
              (param_2,param_3,local_a0,param_4,local_b4,(CPlacement3D *)(param_1 + 0x3c),
               (AABBox<double,3> *)&local_6c);
    iVar2 = FUN_3604a7d0((int)local_b4);
    if (0 < iVar2) {
      CObject3D::CObject3D(local_dc);
      local_4._0_1_ = 2;
      CObject3D::TurnPortalsToWalls(local_b4);
      iVar2 = FUN_36043600((int)pCVar1);
      if (iVar2 < 1) {
        CObject3D::operator=(local_dc,local_b4);
      }
      else {
        CObject3D::CObject3D(local_c8);
        local_4._0_1_ = 3;
        MoveTargetBrushPartToObject(this,param_1,(AABBox<double,3> *)&local_6c,local_c8);
        (*param_5)(local_c8,local_b4);
        local_4._0_1_ = 2;
        CObject3D::~CObject3D(local_c8);
      }
      AddObjectToBrush(this,local_dc,param_1);
      local_4._0_1_ = 1;
      CObject3D::~CObject3D(local_dc);
    }
    FUN_360cc7f0((undefined4 *)local_90);
    local_4._0_1_ = 4;
    CBrushMip::SelectClosedSectors(this_00,local_90);
    CObject3D::CObject3D(aCStack_80);
    uStack_3c = _DAT_36227d78;
    uStack_24 = _DAT_36227d80;
    uStack_34 = _DAT_36227d78;
    uStack_1c = _DAT_36227d80;
    uStack_2c = _DAT_36227d78;
    uStack_14 = _DAT_36227d80;
    local_4._0_1_ = 5;
    CopySourceBrushSectorsToObject
              (param_2,param_3,local_90,param_4,aCStack_80,(CPlacement3D *)(param_1 + 0x3c),
               (AABBox<double,3> *)&uStack_3c);
    iVar2 = FUN_3604a7d0((int)aCStack_80);
    if (0 < iVar2) {
      CObject3D::CObject3D(local_dc);
      local_4._0_1_ = 6;
      iVar2 = FUN_36043600((int)pCVar1);
      if (iVar2 < 1) {
        CObject3D::operator=(local_dc,aCStack_80);
      }
      else {
        CObject3D::CObject3D(local_c8);
        local_4._0_1_ = 7;
        MoveTargetBrushPartToObject(this,param_1,(AABBox<double,3> *)&uStack_3c,local_c8);
        (*param_6)(local_c8,aCStack_80);
        local_4._0_1_ = 6;
        CObject3D::~CObject3D(local_c8);
      }
      AddObjectToBrush(this,local_dc,param_1);
      local_4._0_1_ = 5;
      CObject3D::~CObject3D(local_dc);
    }
    local_4._0_1_ = 4;
    CObject3D::~CObject3D(aCStack_80);
    FUN_360d7340((undefined4 *)local_90);
    FUN_360cce00((int *)local_90);
    local_4 = (uint)local_4._1_3_ << 8;
    CObject3D::~CObject3D(local_b4);
    FUN_360d7340((undefined4 *)local_a0);
    FUN_360cce00((int *)local_a0);
  }
  ExceptionList = local_c;
  return;
}

