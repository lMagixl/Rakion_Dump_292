
/* public: void __thiscall CBladeTrail::SetSegment(long) */

void __thiscall CBladeTrail::SetSegment(CBladeTrail *this,long param_1)

{
                    /* 0x18b050  3581  ?SetSegment@CBladeTrail@@QAEXJ@Z */
  *(long *)(this + 0x2f28) = param_1;
  *(int *)(this + 0x2f2c) = (*(int *)(this + 0x2f10) + -1) * param_1 + 1;
  return;
}

