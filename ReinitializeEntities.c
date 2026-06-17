
/* public: void __thiscall CWorld::ReinitializeEntities(void) */

void __thiscall CWorld::ReinitializeEntities(CWorld *this)

{
  CWorld *this_00;
  long lVar1;
  int iVar2;
  CEntity *this_01;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc8c10  3078  ?ReinitializeEntities@CWorld@@QAEXXZ */
  lVar1 = _precache_bNowPrecaching;
  puStack_8 = &LAB_362144ee;
  local_c = ExceptionList;
  _precache_bNowPrecaching = 1;
  iVar3 = 0;
  this_00 = this + 0x15c;
  local_4 = 1;
  ExceptionList = &local_c;
  iVar2 = FUN_360caf20((int)this_00);
  if (0 < iVar2) {
    do {
      this_01 = (CEntity *)FUN_360cafb0(this_00,iVar3);
      CEntity::Reinitialize(this_01);
      iVar3 = iVar3 + 1;
      iVar2 = FUN_360caf20((int)this_00);
    } while (iVar3 < iVar2);
  }
  _precache_bNowPrecaching = lVar1;
  ExceptionList = local_c;
  return;
}

