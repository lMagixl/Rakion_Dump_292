
/* public: void __thiscall CEntity::SetAlive(void) */

void __thiscall CEntity::SetAlive(CEntity *this)

{
                    /* 0xd970  3394  ?SetAlive@CEntity@@QAEXXZ */
  SetFlags(this,*(uint *)(this + 0x10) | 8);
  return;
}

