
/* public: int __thiscall CEntity::IsAlive(void) */

int __thiscall CEntity::IsAlive(CEntity *this)

{
                    /* 0xd950  2355  ?IsAlive@CEntity@@QAEHXZ */
  return *(uint *)(this + 0x10) & 8;
}

