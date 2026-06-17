
/* public: void __thiscall CEntity::Deselect(unsigned long) */

void __thiscall CEntity::Deselect(CEntity *this,ulong param_1)

{
                    /* 0x6060  1481  ?Deselect@CEntity@@QAEXK@Z */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & ~param_1;
  return;
}

