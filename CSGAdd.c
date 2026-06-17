
/* public: void __thiscall CWorld::CSGAdd(class CEntity &,class CWorld &,class CEntity &,class
   CPlacement3D const &) */

void __thiscall
CWorld::CSGAdd(CWorld *this,CEntity *param_1,CWorld *param_2,CEntity *param_3,CPlacement3D *param_4)

{
                    /* 0xd5280  1104  ?CSGAdd@CWorld@@QAEXAAVCEntity@@AAV1@0ABVCPlacement3D@@@Z */
  DoCSGOperation(this,param_1,param_2,param_3,param_4,CObject3D::CSGAddMaterial,
                 CObject3D::CSGAddRooms);
  CopyAllEntitiesExceptOne(this,param_2,param_3,param_4);
  if (*(int *)(this + 0x158) == 0) {
    CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(this + 0x34));
    *(undefined4 *)(this + 0x158) = 1;
  }
  return;
}

