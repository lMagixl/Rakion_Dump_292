
/* public: void __thiscall CEntity::SetDead(void) */

void __thiscall CEntity::SetDead(CEntity *this)

{
                    /* 0xd980  3433  ?SetDead@CEntity@@QAEXXZ */
  SetFlags(this,*(uint *)(this + 0x10) & 0xfffffff7);
  return;
}

