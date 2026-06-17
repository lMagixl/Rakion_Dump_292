
/* public: class CEntityClass * __thiscall CEntity::GetClass(void) */

CEntityClass * __thiscall CEntity::GetClass(CEntity *this)

{
                    /* 0x6160  1760  ?GetClass@CEntity@@QAEPAVCEntityClass@@XZ */
  return *(CEntityClass **)(this + 0x78);
}

