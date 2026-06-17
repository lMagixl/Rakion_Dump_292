
/* public: void __thiscall CWorld::HideSelectedEntities(class CSelection<class CEntity,1> &) */

void __thiscall CWorld::HideSelectedEntities(CWorld *this,CSelection<class_CEntity,1> *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0xc8980  2264
                       ?HideSelectedEntities@CWorld@@QAEXAAV?$CSelection@VCEntity@@$00@@@Z */
  iVar2 = 0;
  iVar1 = FUN_360caf20((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(param_1,iVar2);
      if ((*(byte *)(iVar1 + 0x10) & 1) != 0) {
        iVar1 = FUN_360cafb0(param_1,iVar2);
        if (*(int *)(iVar1 + 4) == 4) {
          iVar1 = FUN_360cafb0(param_1,iVar2);
          if ((*(byte *)(iVar1 + 0x10) & 2) != 0) goto LAB_360c89d3;
        }
        iVar1 = FUN_360cafb0(param_1,iVar2);
        *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
      }
LAB_360c89d3:
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360caf20((int)param_1);
    } while (iVar2 < iVar1);
  }
  return;
}

