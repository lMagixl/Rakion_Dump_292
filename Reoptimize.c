
/* public: void __thiscall CBrushMip::Reoptimize(void) */

void __thiscall CBrushMip::Reoptimize(CBrushMip *this)

{
  CObject3D local_38 [20];
  CSelection<class_CBrushSector,4> local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x139f90  3155  ?Reoptimize@CBrushMip@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_362195ae;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  ExceptionList = &local_10;
  CObject3D::CObject3D(local_38);
  local_8 = 0;
  FUN_360cc7f0((undefined4 *)local_24);
  local_8._0_1_ = 1;
  SelectAllSectors(this,local_24);
  ToObject3D(this,local_38,local_24);
  local_8._0_1_ = 0;
  FUN_360d7340((undefined4 *)local_24);
  FUN_360cce00((int *)local_24);
  Clear(this);
  local_8 = CONCAT31(local_8._1_3_,2);
  AddFromObject3D_t(this,local_38);
  local_8 = 0xffffffff;
  CObject3D::~CObject3D(local_38);
  ExceptionList = local_10;
  return;
}

