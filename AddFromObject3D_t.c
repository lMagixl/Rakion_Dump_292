
/* public: class CBrushSector * __thiscall CBrushMip::AddFromObject3D_t(class CObject3D &) */

CBrushSector * __thiscall CBrushMip::AddFromObject3D_t(CBrushMip *this,CObject3D *param_1)

{
  int iVar1;
  CBrushSector *pCVar2;
  CObjectSector *pCVar3;
  int iVar4;
  CBrushSector *this_00;
  CSetFPUPrecision local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x137e40  980
                       ?AddFromObject3D_t@CBrushMip@@QAEPAVCBrushSector@@AAVCObject3D@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362193f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSetFPUPrecision::CSetFPUPrecision(local_14,1);
  iVar4 = 0;
  local_4 = 0;
  CBrush3D::OptimizeObject3D(param_1);
  iVar1 = FUN_3604a7d0((int)param_1);
  pCVar2 = (CBrushSector *)FUN_36043bf0(this,iVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_3604a7d0((int)param_1);
  this_00 = pCVar2;
  if (0 < iVar1) {
    do {
      *(CBrushMip **)(this_00 + 0x38) = this;
      pCVar3 = (CObjectSector *)FUN_3604a790(param_1,iVar4);
      CBrushSector::FromObjectSector_t(this_00,pCVar3);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_3604a7d0((int)param_1);
      this_00 = this_00 + 0xc0;
    } while (iVar4 < iVar1);
  }
  local_4 = 0xffffffff;
  CSetFPUPrecision::~CSetFPUPrecision(local_14);
  ExceptionList = local_c;
  return pCVar2;
}

