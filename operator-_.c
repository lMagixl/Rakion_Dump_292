
/* public: class CEntity * __thiscall CEntityID::operator->(void) */

CEntity * __thiscall CEntityID::operator->(CEntityID *this)

{
  CEntity *pCVar1;
  
  if (*(ulong *)this == 0xffffffff) {
    return (CEntity *)0x0;
  }
  pCVar1 = CWorld::EntityFromID((CWorld *)(_pNetwork + 0x11e4),*(ulong *)this);
  return pCVar1;
}

