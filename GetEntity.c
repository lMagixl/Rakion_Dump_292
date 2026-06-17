
/* public: class CEntity * __thiscall CEntityID::GetEntity(void) */

CEntity * __thiscall CEntityID::GetEntity(CEntityID *this)

{
  CEntity *pCVar1;
  
                    /* 0x124430  1851  ?GetEntity@CEntityID@@QAEPAVCEntity@@XZ */
  if (*(ulong *)this == 0xffffffff) {
    return (CEntity *)0x0;
  }
  pCVar1 = CWorld::EntityFromID((CWorld *)(_pNetwork + 0x11e4),*(ulong *)this);
  return pCVar1;
}

