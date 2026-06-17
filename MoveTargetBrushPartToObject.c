
/* public: void __thiscall CWorld::MoveTargetBrushPartToObject(class CEntity &,class
   AABBox<double,3> &,class CObject3D &) */

void __thiscall
CWorld::MoveTargetBrushPartToObject
          (CWorld *this,CEntity *param_1,AABBox<double,3> *param_2,CObject3D *param_3)

{
  CBrushMip *this_00;
  int iVar1;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  CSelection<class_CBrushSector,4> local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd4db0  2658
                       ?MoveTargetBrushPartToObject@CWorld@@QAEXAAVCEntity@@AAV?$AABBox@N$02@@AAVCObject3D@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214c73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = GetBrushMip(this,param_1);
  FUN_360cc7f0((undefined4 *)local_34);
  local_48 = (float)*(double *)(param_2 + 0x28);
  local_4c = (float)*(double *)(param_2 + 0x20);
  local_50 = (float)*(double *)(param_2 + 0x18);
  local_4 = 0;
  local_3c = (float)*(double *)(param_2 + 0x10);
  local_40 = (float)*(double *)(param_2 + 8);
  local_44 = (float)*(double *)param_2;
  FUN_360bef70(&local_24,&local_44,&local_50);
  CBrushMip::SelectSectorsInRange
            (this_00,local_34,local_24,local_20,local_1c,local_18,local_14,local_10);
  CBrushMip::ToObject3D(this_00,param_3,local_34);
  CBrushMip::DeleteSelectedSectors(this_00,local_34);
  iVar1 = FUN_3604a7d0((int)param_3);
  if (iVar1 == 0) {
    FUN_360cc7f0(&local_44);
    local_4 = CONCAT31(local_4._1_3_,1);
    CBrushMip::SelectOpenSector(this_00,(CSelection<class_CBrushSector,4> *)&local_44);
    CBrushMip::ToObject3D(this_00,param_3,(CSelection<class_CBrushSector,4> *)&local_44);
    CBrushMip::DeleteSelectedSectors(this_00,(CSelection<class_CBrushSector,4> *)&local_44);
    FUN_360d7340(&local_44);
    FUN_360cce00((int *)&local_44);
  }
  FUN_360d7340((undefined4 *)local_34);
  FUN_360cce00((int *)local_34);
  ExceptionList = local_c;
  return;
}

