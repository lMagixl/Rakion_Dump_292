
/* public: void __thiscall CEntity::Select(unsigned long) */

void __thiscall CEntity::Select(CEntity *this,ulong param_1)

{
                    /* 0x6050  3214  ?Select@CEntity@@QAEXK@Z */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | param_1;
  return;
}

