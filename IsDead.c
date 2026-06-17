
/* public: int __thiscall CEntity::IsDead(void) */

int __thiscall CEntity::IsDead(CEntity *this)

{
                    /* 0xd960  2378  ?IsDead@CEntity@@QAEHXZ */
  return ~(*(uint *)(this + 0x10) >> 3) & 1;
}

