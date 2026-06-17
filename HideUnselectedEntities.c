
/* public: void __thiscall CWorld::HideUnselectedEntities(void) */

void __thiscall CWorld::HideUnselectedEntities(CWorld *this)

{
  CWorld *this_00;
  int iVar1;
  int iVar2;
  
                    /* 0xc89f0  2266  ?HideUnselectedEntities@CWorld@@QAEXXZ */
  this_00 = this + 0x15c;
  iVar2 = 0;
  iVar1 = FUN_360caf20((int)this_00);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this_00,iVar2);
      if ((*(byte *)(iVar1 + 0x10) & 1) == 0) {
        iVar1 = FUN_360cafb0(this_00,iVar2);
        if (*(int *)(iVar1 + 4) == 4) {
          iVar1 = FUN_360cafb0(this_00,iVar2);
          if ((*(byte *)(iVar1 + 0x10) & 2) != 0) goto LAB_360c8a45;
        }
        iVar1 = FUN_360cafb0(this_00,iVar2);
        *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
      }
LAB_360c8a45:
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360caf20((int)this_00);
    } while (iVar2 < iVar1);
  }
  return;
}

