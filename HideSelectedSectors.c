
/* public: void __thiscall CWorld::HideSelectedSectors(class CSelection<class CBrushSector,1> &) */

void __thiscall CWorld::HideSelectedSectors(CWorld *this,CSelection<class_CBrushSector,1> *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0xc8aa0  2265
                       ?HideSelectedSectors@CWorld@@QAEXAAV?$CSelection@VCBrushSector@@$00@@@Z */
  iVar2 = 0;
  iVar1 = FUN_360cb790((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb0d0(param_1,iVar2);
      *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | 2;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360cb790((int)param_1);
    } while (iVar2 < iVar1);
  }
  return;
}

