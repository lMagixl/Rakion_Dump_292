
/* public: void __thiscall CBrushMip::DeleteSelectedSectors(class CSelection<class CBrushSector,4>
   &) */

void __thiscall
CBrushMip::DeleteSelectedSectors(CBrushMip *this,CSelection<class_CBrushSector,4> *param_1)

{
  int iVar1;
  CBrushSector *pCVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1399a0  1470
                       ?DeleteSelectedSectors@CBrushMip@@QAEXAAV?$CSelection@VCBrushSector@@$03@@@Z
                        */
  puStack_8 = &LAB_3621950e;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360cb790((int)param_1);
  if (0 < iVar1) {
    do {
      pCVar2 = (CBrushSector *)FUN_360cb0d0(param_1,iVar3);
      FUN_360d6f80(this,pCVar2);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360cb790((int)param_1);
    } while (iVar3 < iVar1);
  }
  FUN_360ccb10((undefined4 *)param_1);
  ExceptionList = local_c;
  return;
}

