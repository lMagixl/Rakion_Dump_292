
/* public: void __thiscall CWorld::DeleteSectors(class CSelection<class CBrushSector,1> &,int) */

void __thiscall
CWorld::DeleteSectors(CWorld *this,CSelection<class_CBrushSector,1> *param_1,int param_2)

{
  int iVar1;
  CBrushSector *pCVar2;
  CBrushMip *this_00;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd3db0  1469
                       ?DeleteSectors@CWorld@@QAEXAAV?$CSelection@VCBrushSector@@$00@@H@Z */
  puStack_8 = &LAB_36214c27;
  local_c = ExceptionList;
  iVar3 = 0;
  this_00 = (CBrushMip *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360cb790((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb0d0(param_1,iVar3);
      this_00 = *(CBrushMip **)(iVar1 + 0x38);
      pCVar2 = (CBrushSector *)FUN_360cb0d0(param_1,iVar3);
      FUN_360d6f80(this_00,pCVar2);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360cb790((int)param_1);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  FUN_360ccb10((undefined4 *)param_1);
  if (this_00 != (CBrushMip *)0x0) {
    CBrushMip::RemoveDummyPortals(this_00,param_2);
    iVar1 = *(int *)(*(int *)(*(int *)(this_00 + 0x14) + 0x668) + 0xa8);
    if (*(int *)(iVar1 + 0x158) == 0) {
      CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(iVar1 + 0x34));
      *(undefined4 *)(iVar1 + 0x158) = 1;
    }
  }
  ExceptionList = local_c;
  return;
}

