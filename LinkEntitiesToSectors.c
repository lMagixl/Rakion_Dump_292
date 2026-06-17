
/* public: void __thiscall CWorld::LinkEntitiesToSectors(void) */

void __thiscall CWorld::LinkEntitiesToSectors(CWorld *this)

{
  int *this_00;
  CWorld *this_01;
  int iVar1;
  CEntity *this_02;
  CBrushSector *this_03;
  int iVar2;
  int *piVar3;
  int local_28;
  CSetFPUPrecision local_20 [12];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0xc8d40  2540  ?LinkEntitiesToSectors@CWorld@@QAEXXZ */
  puStack_10 = &LAB_3621452a;
  local_14 = ExceptionList;
  this_01 = this + 0x15c;
  iVar2 = 0;
  local_c = 0;
  ExceptionList = &local_14;
  iVar1 = FUN_360caf20((int)this_01);
  if (0 < iVar1) {
    do {
      this_02 = (CEntity *)FUN_360cafb0(this_01,iVar2);
      CEntity::FindCollisionInfo(this_02);
      CEntity::UpdateSpatialRange(this_02);
      if (DAT_362fd6d8 == 0) {
        CEntity::FindSectorsAroundEntity(this_02);
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360caf20((int)this_01);
    } while (iVar2 < iVar1);
  }
  local_28 = 0;
  local_c = 1;
  iVar1 = FUN_360caf20((int)this_01);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this_01,local_28);
      if (((*(int *)(iVar1 + 4) == 4) && ((*(byte *)(iVar1 + 0x10) & 2) != 0)) &&
         ((*(uint *)(iVar1 + 8) & 0x200) != 0)) {
        DAT_362fcc40 = 1;
        CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)(iVar1 + 0x7c));
        DAT_362fcc40 = 0;
        CSetFPUPrecision::CSetFPUPrecision(local_20,1);
        for (piVar3 = *(int **)(*(int *)(iVar1 + 0x7c) + 0x674); *piVar3 != 0;
            piVar3 = (int *)*piVar3) {
          this_00 = piVar3 + -6;
          iVar2 = 0;
          local_c = CONCAT31(local_c._1_3_,3);
          iVar1 = FUN_36043600((int)this_00);
          if (0 < iVar1) {
            do {
              this_03 = (CBrushSector *)FUN_36043710(this_00,iVar2);
              CBrushSector::FindEntitiesInSector(this_03);
              iVar2 = iVar2 + 1;
              iVar1 = FUN_36043600((int)this_00);
            } while (iVar2 < iVar1);
          }
        }
        local_c = CONCAT31(local_c._1_3_,1);
        CSetFPUPrecision::~CSetFPUPrecision(local_20);
      }
      local_28 = local_28 + 1;
      iVar1 = FUN_360caf20((int)this_01);
    } while (local_28 < iVar1);
  }
  ExceptionList = local_14;
  return;
}

