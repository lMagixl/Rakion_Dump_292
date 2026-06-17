
/* public: class CModelInstance * __thiscall CEntity::GetModelInstance(void) */

CModelInstance * __thiscall CEntity::GetModelInstance(CEntity *this)

{
                    /* 0x61a0  1991  ?GetModelInstance@CEntity@@QAEPAVCModelInstance@@XZ */
  return *(CModelInstance **)(this + 0x7c);
}

