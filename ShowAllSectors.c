
/* public: void __thiscall CWorld::ShowAllSectors(void) */

void __thiscall CWorld::ShowAllSectors(CWorld *this)

{
  int *this_00;
  CWorld *this_01;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
                    /* 0xc8b80  3632  ?ShowAllSectors@CWorld@@QAEXXZ */
  this_01 = this + 0x15c;
  iVar3 = 0;
  iVar1 = FUN_360caf20((int)this_01);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this_01,iVar3);
      if (*(int *)(iVar1 + 4) == 4) {
        iVar1 = FUN_360cafb0(this_01,iVar3);
        for (piVar2 = *(int **)(*(int *)(iVar1 + 0x7c) + 0x674); *piVar2 != 0;
            piVar2 = (int *)*piVar2) {
          this_00 = piVar2 + -6;
          iVar4 = 0;
          iVar1 = FUN_36043600((int)this_00);
          if (0 < iVar1) {
            do {
              iVar1 = FUN_36043710(this_00,iVar4);
              *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) & 0xfffffffd;
              iVar4 = iVar4 + 1;
              iVar1 = FUN_36043600((int)this_00);
            } while (iVar4 < iVar1);
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360caf20((int)this_01);
    } while (iVar3 < iVar1);
  }
  return;
}

