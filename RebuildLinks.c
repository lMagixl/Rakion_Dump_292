
/* public: void __thiscall CWorld::RebuildLinks(void) */

void __thiscall CWorld::RebuildLinks(CWorld *this)

{
                    /* 0xc8ed0  3054  ?RebuildLinks@CWorld@@QAEXXZ */
  CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(this + 0x34));
  DAT_362fd6d8 = 0;
  LinkEntitiesToSectors(this);
  return;
}

