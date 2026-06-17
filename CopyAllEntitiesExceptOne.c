
/* public: void __thiscall CWorld::CopyAllEntitiesExceptOne(class CWorld &,class CEntity &,class
   CPlacement3D const &) */

void __thiscall
CWorld::CopyAllEntitiesExceptOne
          (CWorld *this,CWorld *param_1,CEntity *param_2,CPlacement3D *param_3)

{
  CSelection<class_CEntity,1> local_2c [16];
  CDynamicContainer<class_CEntity> local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1325d0  1381
                       ?CopyAllEntitiesExceptOne@CWorld@@QAEXAAV1@AAVCEntity@@ABVCPlacement3D@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218f0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360ccb50((undefined4 *)local_1c);
  local_4 = 0;
  FUN_360cd2b0(local_1c,(undefined4 *)(param_1 + 0x15c));
  FUN_360cc660(local_1c,(int)param_2);
  FUN_360ccb50((undefined4 *)local_2c);
  local_4 = CONCAT31(local_4._1_3_,1);
  CopyEntities(this,param_1,local_1c,local_2c,param_3);
  FUN_360cce70((undefined4 *)local_2c);
  FUN_360cce70((undefined4 *)local_2c);
  FUN_360cd280((int *)local_2c);
  FUN_360cd280((int *)local_1c);
  ExceptionList = local_c;
  return;
}

