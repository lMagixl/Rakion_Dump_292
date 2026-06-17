
/* public: void __thiscall CWorld::HideUnselectedSectors(void) */

void __thiscall CWorld::HideUnselectedSectors(CWorld *this)

{
  int *this_00;
  CWorld *this_01;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
                    /* 0xc8ae0  2267  ?HideUnselectedSectors@CWorld@@QAEXXZ */
  this_01 = this + 0x15c;
  iVar2 = 0;
  iVar1 = FUN_360caf20((int)this_01);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this_01,iVar2);
      if (*(int *)(iVar1 + 4) == 4) {
        iVar1 = FUN_360cafb0(this_01,iVar2);
        for (piVar3 = *(int **)(*(int *)(iVar1 + 0x7c) + 0x674); *piVar3 != 0;
            piVar3 = (int *)*piVar3) {
          this_00 = piVar3 + -6;
          iVar4 = 0;
          iVar1 = FUN_36043600((int)this_00);
          if (0 < iVar1) {
            do {
              iVar1 = FUN_36043710(this_00,iVar4);
              if ((*(byte *)(iVar1 + 0x44) & 1) == 0) {
                iVar1 = FUN_36043710(this_00,iVar4);
                *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | 2;
              }
              iVar4 = iVar4 + 1;
              iVar1 = FUN_36043600((int)this_00);
            } while (iVar4 < iVar1);
          }
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360caf20((int)this_01);
    } while (iVar2 < iVar1);
  }
  return;
}

