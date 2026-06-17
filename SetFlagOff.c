
/* public: void __thiscall CEntity::SetFlagOff(unsigned long) */

void __thiscall CEntity::SetFlagOff(CEntity *this,ulong param_1)

{
                    /* 0x60c0  3465  ?SetFlagOff@CEntity@@QAEXK@Z */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & ~param_1;
  return;
}

