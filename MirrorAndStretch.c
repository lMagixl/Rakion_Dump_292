
/* public: void __thiscall CWorld::MirrorAndStretch(class CWorld &,float,enum WorldMirrorType) */

void __thiscall
CWorld::MirrorAndStretch(CWorld *this,CWorld *param_1,float param_2,WorldMirrorType param_3)

{
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  CSelection<class_CEntity,1> local_44 [16];
  CDynamicContainer<class_CEntity> local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x132680  2646  ?MirrorAndStretch@CWorld@@QAEXAAV1@MW4WorldMirrorType@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218f2d;
  local_c = ExceptionList;
  DAT_362fd368 = param_3;
  DAT_362fd364 = 1;
  DAT_362a648c = param_2;
  ExceptionList = &local_c;
  Clear(this);
  FUN_360ccb50((undefined4 *)local_34);
  local_4 = 0;
  FUN_360cd2b0(local_34,(undefined4 *)(param_1 + 0x15c));
  FUN_360ccb50((undefined4 *)local_44);
  local_5c = 0;
  local_24 = 0;
  local_4c = 0;
  local_58 = 0;
  local_14 = 0;
  local_20 = 0;
  local_54 = 0;
  local_1c = 0;
  local_4._0_1_ = 1;
  local_50 = 0;
  local_48 = 0;
  local_18 = 0;
  local_10 = 0;
  CopyEntities(this,param_1,local_34,local_44,(CPlacement3D *)&local_24);
  CSetFPUPrecision::CSetFPUPrecision((CSetFPUPrecision *)&local_5c,1);
  local_4._0_1_ = 2;
  CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(this + 0x34));
  local_4 = CONCAT31(local_4._1_3_,1);
  CSetFPUPrecision::~CSetFPUPrecision((CSetFPUPrecision *)&local_5c);
  DAT_362fd364 = 0;
  FUN_360cce70((undefined4 *)local_44);
  FUN_360cd280((int *)local_44);
  FUN_360cd280((int *)local_34);
  ExceptionList = local_c;
  return;
}

