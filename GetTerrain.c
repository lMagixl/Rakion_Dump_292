
/* public: class CTerrain * __thiscall CEntity::GetTerrain(void) */

CTerrain * __thiscall CEntity::GetTerrain(CEntity *this)

{
                    /* 0x61b0  2153  ?GetTerrain@CEntity@@QAEPAVCTerrain@@XZ */
  return *(CTerrain **)(this + 0x7c);
}

