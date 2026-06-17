
/* public: void __thiscall CEntity::SetCollisionFlags(unsigned long) */

void __thiscall CEntity::SetCollisionFlags(CEntity *this,ulong param_1)

{
                    /* 0x12d600  3417  ?SetCollisionFlags@CEntity@@QAEXK@Z */
  *(ulong *)(this + 0xc) = param_1;
  FindCollisionInfo(this);
  return;
}

