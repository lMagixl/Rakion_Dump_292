
/* public: class CEntity * __thiscall CMovableEntity::MiscDamageInflictor(void) */

CEntity * __thiscall CMovableEntity::MiscDamageInflictor(CMovableEntity *this)

{
  CBrushSector *pCVar1;
  CEntity *pCVar2;
  
                    /* 0x1aaaf0  2649  ?MiscDamageInflictor@CMovableEntity@@QAEPAVCEntity@@XZ */
  pCVar2 = *(CEntity **)(this + 0x15c);
  if (pCVar2 == (CEntity *)0x0) {
    pCVar1 = CEntity::GetFirstSector((CEntity *)this);
    if (pCVar1 == (CBrushSector *)0x0) {
      return (CEntity *)this;
    }
    pCVar2 = *(CEntity **)(*(int *)(*(int *)(pCVar1 + 0x38) + 0x14) + 0x668);
  }
  return pCVar2;
}

