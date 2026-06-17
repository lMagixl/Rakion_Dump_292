
/* public: __thiscall CEntityID::~CEntityID(void) */

void __thiscall CEntityID::~CEntityID(CEntityID *this)

{
  CEntity *pCVar1;
  CEntity *this_00;
  
                    /* 0x1260d0  418  ??1CEntityID@@QAE@XZ */
  if (*(int *)this != -1) {
    this_00 = GetEntity(this);
    if (this_00 != (CEntity *)0x0) {
      pCVar1 = this_00 + 0x18;
      *(int *)pCVar1 = *(int *)pCVar1 + -1;
      if (*(int *)pCVar1 == 0) {
        CEntity::DeleteSelf(this_00);
        return;
      }
    }
  }
  return;
}

