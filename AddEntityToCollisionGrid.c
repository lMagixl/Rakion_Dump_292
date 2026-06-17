
/* public: void __thiscall CWorld::AddEntityToCollisionGrid(class CEntity *,class AABBox<float,3>
   const &) */

void __thiscall
CWorld::AddEntityToCollisionGrid(CWorld *this,CEntity *param_1,AABBox<float,3> *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  int local_8;
  uint local_4;
  
                    /* 0xd29f0  974
                       ?AddEntityToCollisionGrid@CWorld@@QAEXPAVCEntity@@ABV?$AABBox@M$02@@@Z */
  FUN_360d2570(&local_8);
  for (; uVar1 = local_4, (int)local_c <= (int)param_2; local_c = local_c + 1) {
    for (; (int)uVar1 <= local_8; uVar1 = uVar1 + 1) {
      iVar2 = FUN_360d2850(*(void **)(this + 0x94),local_c,uVar1,1);
      FUN_360d28e0(*(void **)(this + 0x94),iVar2,param_1);
    }
  }
  return;
}

