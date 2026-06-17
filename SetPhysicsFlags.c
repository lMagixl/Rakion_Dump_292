
/* public: void __thiscall CEntity::SetPhysicsFlags(unsigned long) */

void __thiscall CEntity::SetPhysicsFlags(CEntity *this,ulong param_1)

{
                    /* 0x12d5f0  3551  ?SetPhysicsFlags@CEntity@@QAEXK@Z */
  *(ulong *)(this + 8) = param_1;
  FindCollisionInfo(this);
  return;
}

