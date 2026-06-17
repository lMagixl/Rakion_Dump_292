
/* public: void __thiscall CBladeTrail::SetMaxBladePoint(long) */

void __thiscall CBladeTrail::SetMaxBladePoint(CBladeTrail *this,long param_1)

{
                    /* 0x18b030  3510  ?SetMaxBladePoint@CBladeTrail@@QAEXJ@Z */
  *(long *)(this + 0x2f10) = param_1;
  *(long *)(this + 0x2f2c) = (param_1 + -1) * *(int *)(this + 0x2f28) + 1;
  return;
}

