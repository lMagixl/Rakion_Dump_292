
/* public: void __thiscall CWorld::MoveEntityInCollisionGrid(class CEntity *,class AABBox<float,3>
   const &,class AABBox<float,3> const &) */

void __thiscall
CWorld::MoveEntityInCollisionGrid
          (CWorld *this,CEntity *param_1,AABBox<float,3> *param_2,AABBox<float,3> *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
                    /* 0xd2af0  2654
                       ?MoveEntityInCollisionGrid@CWorld@@QAEXPAVCEntity@@ABV?$AABBox@M$02@@1@Z */
  FUN_360d2570(&local_18);
  FUN_360d2570(&local_10);
  uVar4 = local_8;
  for (uVar5 = local_c; iVar2 = local_10, uVar1 = local_4, (int)uVar5 <= (int)param_2;
      uVar5 = uVar5 + 1) {
    local_8 = uVar4;
    if ((int)uVar4 <= local_18) {
      do {
        if ((((((int)uVar5 < (int)local_4) || ((int)param_3 < (int)uVar5)) ||
             ((int)uVar4 < (int)local_14)) || (local_10 < (int)uVar4)) &&
           (iVar2 = FUN_360d2850(*(void **)(this + 0x94),uVar5,uVar4,0), -1 < iVar2)) {
          FUN_360d2920(*(void **)(this + 0x94),iVar2,(int)param_1);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 <= local_18);
    }
    uVar4 = local_8;
  }
  for (; local_10 = iVar2, local_8 = uVar4, uVar5 = local_14, (int)uVar1 <= (int)param_3;
      uVar1 = uVar1 + 1) {
    for (; (int)uVar5 <= iVar2; uVar5 = uVar5 + 1) {
      if ((((int)uVar1 < (int)local_c) || ((int)param_2 < (int)uVar1)) ||
         (((int)uVar5 < (int)local_8 || (local_18 < (int)uVar5)))) {
        iVar3 = FUN_360d2850(*(void **)(this + 0x94),uVar1,uVar5,1);
        FUN_360d28e0(*(void **)(this + 0x94),iVar3,param_1);
      }
    }
    iVar2 = local_10;
    uVar4 = local_8;
  }
  return;
}

