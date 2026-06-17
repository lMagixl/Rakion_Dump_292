
/* public: void __thiscall CEntity::TerrainChangeNotify(void) */

void __thiscall CEntity::TerrainChangeNotify(CEntity *this)

{
                    /* 0x128820  3797  ?TerrainChangeNotify@CEntity@@QAEXXZ */
  TR_RegenerateAll(*(CTerrain **)(this + 0x7c));
  UpdateSpatialRange(this);
  return;
}

