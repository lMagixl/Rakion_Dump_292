
/* public: void __thiscall CWorld::RemoveEntityFromCollisionGrid(class CEntity *,class
   AABBox<float,3> const &) */

void __thiscall
CWorld::RemoveEntityFromCollisionGrid(CWorld *this,CEntity *param_1,AABBox<float,3> *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  int local_8;
  uint local_4;
  
                    /* 0xd2a70  3133
                       ?RemoveEntityFromCollisionGrid@CWorld@@QAEXPAVCEntity@@ABV?$AABBox@M$02@@@Z
                        */
  FUN_360d2570(&local_8);
  for (; uVar1 = local_4, (int)local_c <= (int)param_2; local_c = local_c + 1) {
    for (; (int)uVar1 <= local_8; uVar1 = uVar1 + 1) {
      iVar2 = FUN_360d2850(*(void **)(this + 0x94),local_c,uVar1,0);
      if (-1 < iVar2) {
        FUN_360d2920(*(void **)(this + 0x94),iVar2,(int)param_1);
      }
    }
  }
  return;
}

