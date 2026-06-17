
/* public: void __thiscall CWorld::InitCollisionGrid(void) */

void __thiscall CWorld::InitCollisionGrid(CWorld *this)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd2e90  2309  ?InitCollisionGrid@CWorld@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214beb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_361bf99c(0x40);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_360d2d50(piVar1);
  }
  *(int **)(this + 0x94) = piVar1;
  ExceptionList = local_c;
  return;
}

