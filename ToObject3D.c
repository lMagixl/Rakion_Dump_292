
/* public: void __thiscall CBrushMip::ToObject3D(class CObject3D &,class CSelection<class
   CBrushSector,4> &) */

void __thiscall
CBrushMip::ToObject3D(CBrushMip *this,CObject3D *param_1,CSelection<class_CBrushSector,4> *param_2)

{
  int iVar1;
  CObjectSector *pCVar2;
  CBrushSector *this_00;
  int iVar3;
  CObjectSector *pCVar4;
  CSetFPUPrecision local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1376c0  3832
                       ?ToObject3D@CBrushMip@@QAEXAAVCObject3D@@AAV?$CSelection@VCBrushSector@@$03@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219392;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSetFPUPrecision::CSetFPUPrecision(local_14,1);
  iVar3 = 0;
  local_4 = 0;
  iVar1 = FUN_360cb790((int)param_2);
  pCVar2 = (CObjectSector *)FUN_3604b080(param_1,iVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_360cb790((int)param_2);
  if (0 < iVar1) {
    do {
      pCVar4 = pCVar2;
      this_00 = (CBrushSector *)FUN_360cb0d0(param_2,iVar3);
      CBrushSector::ToObjectSector(this_00,pCVar4);
      pCVar2 = pCVar2 + 0x90;
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360cb790((int)param_2);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  CSetFPUPrecision::~CSetFPUPrecision(local_14);
  ExceptionList = local_c;
  return;
}

