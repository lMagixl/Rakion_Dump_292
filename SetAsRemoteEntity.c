
/* public: void __thiscall CEntity::SetAsRemoteEntity(void) */

void __thiscall CEntity::SetAsRemoteEntity(CEntity *this)

{
                    /* 0xd930  3401  ?SetAsRemoteEntity@CEntity@@QAEXXZ */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x10000000;
  return;
}

