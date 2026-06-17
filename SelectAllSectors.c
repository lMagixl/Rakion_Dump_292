
/* public: void __thiscall CBrushMip::SelectAllSectors(class CSelection<class CBrushSector,1> &) */

void __thiscall
CBrushMip::SelectAllSectors(CBrushMip *this,CSelection<class_CBrushSector,1> *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x139d20  3215
                       ?SelectAllSectors@CBrushMip@@QAEXAAV?$CSelection@VCBrushSector@@$00@@@Z */
  puStack_8 = &LAB_3621957a;
  local_c = ExceptionList;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_36043600((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_36043710(this,iVar2);
      FUN_360cc850(param_1,iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_36043600((int)this);
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

