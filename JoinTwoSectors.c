
/* public: class CBrushSector * __thiscall CWorld::JoinTwoSectors(class CBrushSector &,class
   CBrushSector &) */

CBrushSector * __thiscall
CWorld::JoinTwoSectors(CWorld *this,CBrushSector *param_1,CBrushSector *param_2)

{
  undefined4 uVar1;
  CBrushMip *this_00;
  int iVar2;
  CBrushSector *pCVar3;
  CObject3D local_74 [20];
  CObject3D local_60 [20];
  CObject3D local_4c [20];
  CSelection<class_CBrushSector,4> local_38 [16];
  CSelection<class_CBrushSector,4> local_28 [16];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xd5470  2524  ?JoinTwoSectors@CWorld@@QAEPAVCBrushSector@@AAV2@0@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36214d26;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff80;
  local_18 = *(undefined4 *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  this_00 = *(CBrushMip **)(param_1 + 0x38);
  ExceptionList = &local_10;
  iVar2 = FUN_360d69b0((undefined4 *)(param_1 + 0x18));
  FUN_360cc7f0((undefined4 *)local_38);
  local_8 = 0;
  FUN_360d7380(local_38,(int)param_1);
  CObject3D::CObject3D(local_74);
  local_8._0_1_ = 1;
  CBrushMip::ToObject3D(this_00,local_74,local_38);
  CBrushMip::DeleteSelectedSectors(this_00,local_38);
  FUN_360cc7f0((undefined4 *)local_28);
  local_8._0_1_ = 2;
  FUN_360d7380(local_28,(int)param_2);
  CObject3D::CObject3D(local_60);
  local_8._0_1_ = 3;
  CBrushMip::ToObject3D(this_00,local_60,local_28);
  CBrushMip::DeleteSelectedSectors(this_00,local_28);
  CObject3D::CObject3D(local_4c);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (iVar2 < 1) {
    CObject3D::operator=(local_4c,local_60);
  }
  else {
    CObject3D::CSGJoinSectors(local_4c,local_74,local_60);
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  pCVar3 = CBrushMip::AddFromObject3D_t(this_00,local_4c);
  local_8 = 4;
  iVar2 = FUN_3604a7d0((int)local_4c);
  local_8._0_1_ = 3;
  if (iVar2 == 0) {
    CObject3D::~CObject3D(local_4c);
    local_8._0_1_ = 2;
    CObject3D::~CObject3D(local_60);
    FUN_360d7340((undefined4 *)local_28);
    FUN_360cce00((int *)local_28);
    local_8 = (uint)local_8._1_3_ << 8;
    CObject3D::~CObject3D(local_74);
    FUN_360d7340((undefined4 *)local_38);
    FUN_360cce00((int *)local_38);
    ExceptionList = local_10;
    return (CBrushSector *)0x0;
  }
  *(undefined4 *)(pCVar3 + 0x3c) = uVar1;
  *(undefined4 *)(pCVar3 + 0x40) = local_18;
  CObject3D::~CObject3D(local_4c);
  local_8._0_1_ = 2;
  CObject3D::~CObject3D(local_60);
  FUN_360d7340((undefined4 *)local_28);
  FUN_360cce00((int *)local_28);
  local_8 = (uint)local_8._1_3_ << 8;
  CObject3D::~CObject3D(local_74);
  FUN_360d7340((undefined4 *)local_38);
  FUN_360cce00((int *)local_38);
  ExceptionList = local_10;
  return pCVar3;
}

