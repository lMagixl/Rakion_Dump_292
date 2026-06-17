
/* public: void __thiscall CObject3D::TurnPortalsToWalls(void) */

void __thiscall CObject3D::TurnPortalsToWalls(CObject3D *this)

{
  int iVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  
                    /* 0x4a360  3866  ?TurnPortalsToWalls@CObject3D@@QAEXXZ */
  iVar2 = 0;
  iVar1 = FUN_3604a7d0((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_3604a790(this,iVar2);
      this_00 = (void *)(iVar1 + 0x50);
      iVar3 = 0;
      iVar1 = FUN_3604a760((int)this_00);
      if (0 < iVar1) {
        do {
          iVar1 = FUN_3604a750(this_00,iVar3);
          *(uint *)(iVar1 + 0xc4) = *(uint *)(iVar1 + 0xc4) & 0xfffffffe;
          iVar3 = iVar3 + 1;
          iVar1 = FUN_3604a760((int)this_00);
        } while (iVar3 < iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_3604a7d0((int)this);
    } while (iVar2 < iVar1);
  }
  return;
}

