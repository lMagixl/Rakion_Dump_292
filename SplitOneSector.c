
/* public: void __thiscall CWorld::SplitOneSector(class CBrushSector &,class CObject3D &) */

void __thiscall CWorld::SplitOneSector(CWorld *this,CBrushSector *param_1,CObject3D *param_2)

{
  CBrushMip *this_00;
  int iVar1;
  CObject3D local_4c [20];
  CObject3D local_38 [20];
  CSelection<class_CBrushSector,4> local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
                    /* 0xd5340  3648  ?SplitOneSector@CWorld@@QAEXAAVCBrushSector@@AAVCObject3D@@@Z
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36214cf4;
  local_10 = ExceptionList;
  this_00 = *(CBrushMip **)(param_1 + 0x38);
  local_14 = &stack0xffffffa8;
  ExceptionList = &local_10;
  FUN_360cc7f0((undefined4 *)local_24);
  local_8 = 0;
  FUN_360d7380(local_24,(int)param_1);
  CObject3D::CObject3D(local_4c);
  local_8._0_1_ = 1;
  CBrushMip::ToObject3D(this_00,local_4c,local_24);
  CBrushMip::DeleteSelectedSectors(this_00,local_24);
  iVar1 = FUN_3604a790(param_2,0);
  *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(param_1 + 0x40);
  iVar1 = FUN_3604a790(param_2,0);
  *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(param_1 + 0x3c);
  iVar1 = FUN_3604a790(param_2,0);
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_1 + 0x44);
  iVar1 = FUN_3604a790(param_2,0);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 0x48);
  iVar1 = FUN_3604a790(param_2,0);
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x50);
  CObject3D::CObject3D(local_38);
  local_8._0_1_ = 2;
  CObject3D::CSGSplitSectors(local_38,local_4c,param_2);
  local_8 = CONCAT31(local_8._1_3_,3);
  CBrushMip::AddFromObject3D_t(this_00,local_38);
  local_8 = 1;
  CObject3D::~CObject3D(local_38);
  local_8 = local_8 & 0xffffff00;
  CObject3D::~CObject3D(local_4c);
  FUN_360d7340((undefined4 *)local_24);
  FUN_360cce00((int *)local_24);
  ExceptionList = local_10;
  return;
}

