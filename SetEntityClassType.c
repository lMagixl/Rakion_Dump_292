
/* public: void __thiscall CEntity::SetEntityClassType(enum EEntityClassType) */

void __thiscall CEntity::SetEntityClassType(CEntity *this,EEntityClassType param_1)

{
                    /* 0x5f80  3449  ?SetEntityClassType@CEntity@@QAEXW4EEntityClassType@@@Z */
  *(EEntityClassType *)(this + 0xfc) = param_1;
  return;
}

