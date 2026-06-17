
/* public: unsigned long __thiscall CEntity::IsFlagOn(unsigned long) */

ulong __thiscall CEntity::IsFlagOn(CEntity *this,ulong param_1)

{
                    /* 0x60e0  2394  ?IsFlagOn@CEntity@@QAEKK@Z */
  return *(uint *)(this + 0x10) & param_1;
}

