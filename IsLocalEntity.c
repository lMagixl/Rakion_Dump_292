
/* public: int __thiscall CEntity::IsLocalEntity(void) */

int __thiscall CEntity::IsLocalEntity(CEntity *this)

{
                    /* 0xd920  2415  ?IsLocalEntity@CEntity@@QAEHXZ */
  return ~(*(uint *)(this + 0x10) >> 0x1c) & 1;
}

