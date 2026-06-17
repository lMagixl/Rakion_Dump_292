
/* public: __thiscall CEntityID::operator class CEntity *(void)const  */

CEntity * __thiscall CEntityID::operator_class_CEntity_(CEntityID *this)

{
  CEntity *pCVar1;
  
  if (*(ulong *)this == 0xffffffff) {
    return (CEntity *)0x0;
  }
  pCVar1 = CWorld::EntityFromID((CWorld *)(_pNetwork + 0x11e4),*(ulong *)this);
  return pCVar1;
}

