
/* public: unsigned long __thiscall CEntity::IsFlagOff(unsigned long) */

ulong __thiscall CEntity::IsFlagOff(CEntity *this,ulong param_1)

{
                    /* 0x60f0  2393  ?IsFlagOff@CEntity@@QAEKK@Z */
  return ~*(uint *)(this + 0x10) & param_1;
}

