
/* public: void __thiscall CWorld::ShowAllEntities(void) */

void __thiscall CWorld::ShowAllEntities(CWorld *this)

{
  CWorld *this_00;
  int iVar1;
  int iVar2;
  
                    /* 0xc8a60  3631  ?ShowAllEntities@CWorld@@QAEXXZ */
  this_00 = this + 0x15c;
  iVar2 = 0;
  iVar1 = FUN_360caf20((int)this_00);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this_00,iVar2);
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffdfffff;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360caf20((int)this_00);
    } while (iVar2 < iVar1);
  }
  return;
}

