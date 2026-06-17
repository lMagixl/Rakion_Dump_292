
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::NotifyCollisionChanged(void) */

void __thiscall CEntity::NotifyCollisionChanged(CEntity *this)

{
  CMovableEntity *this_00;
  int iVar1;
  int iVar2;
  
                    /* 0x12d4e0  2678  ?NotifyCollisionChanged@CEntity@@QAEXXZ */
  if (*(int *)(this + 0x84) != 0) {
    if ((DAT_362fcd90 & 1) == 0) {
      DAT_362fcd90 = DAT_362fcd90 | 1;
      _DAT_362fcd80 = 0;
      DAT_362fcd84 = 0;
      _DAT_362fcd88 = 0;
      _DAT_362fcd8c = 0x10;
      _atexit((_func_4879 *)&LAB_36220ce0);
    }
    CWorld::FindEntitiesNearBox
              (*(CWorld **)(this + 0xa8),(AABBox<float,3> *)(*(int *)(this + 0x84) + 0x18),
               (CStaticStackArray<class_CEntity*> *)&DAT_362fcd80);
    iVar2 = 0;
    iVar1 = FUN_360caf20(0x362fcd80);
    if (0 < iVar1) {
      do {
        this_00 = *(CMovableEntity **)(DAT_362fcd84 + iVar2 * 4);
        if ((*(uint *)(this_00 + 8) & 0x200) != 0) {
          CMovableEntity::AddToMovers(this_00);
        }
        iVar2 = iVar2 + 1;
        iVar1 = FUN_360caf20(0x362fcd80);
      } while (iVar2 < iVar1);
    }
    _DAT_362fcd88 = 0;
  }
  return;
}

