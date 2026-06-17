
/* public: void __thiscall CWorld::DestroyCollisionGrid(void) */

void __thiscall CWorld::DestroyCollisionGrid(CWorld *this)

{
  int *piVar1;
  
                    /* 0xd2ef0  1486  ?DestroyCollisionGrid@CWorld@@QAEXXZ */
  piVar1 = *(int **)(this + 0x94);
  if (piVar1 != (int *)0x0) {
    FUN_360d2dd0(piVar1);
    operator_delete(piVar1);
  }
  *(undefined4 *)(this + 0x94) = 0;
  return;
}

