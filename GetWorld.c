
/* public: class CWorld * __thiscall CEntity::GetWorld(void) */

CWorld * __thiscall CEntity::GetWorld(CEntity *this)

{
                    /* 0x6170  2215  ?GetWorld@CEntity@@QAEPAVCWorld@@XZ */
  return *(CWorld **)(this + 0xa8);
}

