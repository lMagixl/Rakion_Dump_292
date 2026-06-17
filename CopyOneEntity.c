
/* public: class CEntity * __thiscall CWorld::CopyOneEntity(class CEntity &,class CPlacement3D const
   &) */

CEntity * __thiscall CWorld::CopyOneEntity(CWorld *this,CEntity *param_1,CPlacement3D *param_2)

{
  int iVar1;
  CEntity *pCVar2;
  CSelection<class_CEntity,1> local_2c [16];
  CDynamicContainer<class_CEntity> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1324f0  1391
                       ?CopyOneEntity@CWorld@@QAEPAVCEntity@@AAV2@ABVCPlacement3D@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218ef1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360ccb50((undefined4 *)local_1c);
  local_4 = 0;
  FUN_360ccb70(local_1c,param_1);
  FUN_360ccb50((undefined4 *)local_2c);
  local_4 = CONCAT31(local_4._1_3_,1);
  CopyEntities(this,*(CWorld **)(param_1 + 0xa8),local_1c,local_2c,param_2);
  iVar1 = FUN_360caf20((int)local_2c);
  if (0 < iVar1) {
    pCVar2 = (CEntity *)FUN_360cafb0(local_2c,0);
    FUN_360cce70((undefined4 *)local_2c);
    FUN_360cd280((int *)local_2c);
    FUN_360cd280((int *)local_1c);
    ExceptionList = local_c;
    return pCVar2;
  }
  FUN_360cce70((undefined4 *)local_2c);
  FUN_360cd280((int *)local_2c);
  FUN_360cd280((int *)local_1c);
  ExceptionList = local_c;
  return (CEntity *)0x0;
}

