
/* public: void __thiscall CWorld::CSGRemove(class CEntity &,class CWorld &,class CEntity &,class
   CPlacement3D const &) */

void __thiscall
CWorld::CSGRemove(CWorld *this,CEntity *param_1,CWorld *param_2,CEntity *param_3,
                 CPlacement3D *param_4)

{
  CBrushMip *this_00;
  int iVar1;
  CSelection<class_CBrushSector,1> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd5fd0  1110  ?CSGRemove@CWorld@@QAEXAAVCEntity@@AAV1@0ABVCPlacement3D@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214dfd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360d3920();
  this_00 = GetBrushMip(this,param_3);
  if (this_00 != (CBrushMip *)0x0) {
    iVar1 = FUN_36043600((int)this_00);
    if (1 < iVar1) {
      FUN_360cc7f0((undefined4 *)local_1c);
      local_4 = 0;
      CBrushMip::SelectAllSectors(this_00,local_1c);
      JoinSectors(param_2,local_1c);
      local_4 = 0xffffffff;
      FUN_360cce30((undefined4 *)local_1c);
      FUN_360cce00((int *)local_1c);
    }
    DoCSGOperation(this,param_1,param_2,param_3,param_4,CObject3D::CSGRemoveMaterial,
                   CObject3D::CSGRemoveMaterial);
    if (*(int *)(this + 0x158) == 0) {
      CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(this + 0x34));
      *(undefined4 *)(this + 0x158) = 1;
    }
  }
  ExceptionList = local_c;
  return;
}

