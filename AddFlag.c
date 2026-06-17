
/* public: void __thiscall CTerrain::AddFlag(unsigned long) */

void __thiscall CTerrain::AddFlag(CTerrain *this,ulong param_1)

{
                    /* 0x84510  976  ?AddFlag@CTerrain@@QAEXK@Z */
  *(uint *)(this + 8) = *(uint *)(this + 8) | param_1;
  return;
}

