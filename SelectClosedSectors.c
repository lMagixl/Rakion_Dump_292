
/* public: void __thiscall CBrushMip::SelectClosedSectors(class CSelection<class CBrushSector,4> &)
    */

void __thiscall
CBrushMip::SelectClosedSectors(CBrushMip *this,CSelection<class_CBrushSector,4> *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x139c30  3221
                       ?SelectClosedSectors@CBrushMip@@QAEXAAV?$CSelection@VCBrushSector@@$03@@@Z */
  puStack_8 = &LAB_36219556;
  local_c = ExceptionList;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_36043600((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_36043710(this,iVar2);
      if ((*(byte *)(iVar1 + 0x44) & 8) == 0) {
        iVar1 = FUN_36043710(this,iVar2);
        FUN_360d7380(param_1,iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_36043600((int)this);
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

