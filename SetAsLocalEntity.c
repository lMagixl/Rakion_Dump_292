
/* public: void __thiscall CEntity::SetAsLocalEntity(void) */

void __thiscall CEntity::SetAsLocalEntity(CEntity *this)

{
                    /* 0xd940  3400  ?SetAsLocalEntity@CEntity@@QAEXXZ */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xefffffff;
  return;
}

