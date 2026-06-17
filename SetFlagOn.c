
/* public: void __thiscall CEntity::SetFlagOn(unsigned long) */

void __thiscall CEntity::SetFlagOn(CEntity *this,ulong param_1)

{
                    /* 0x60b0  3466  ?SetFlagOn@CEntity@@QAEXK@Z */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | param_1;
  return;
}

