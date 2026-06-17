
/* public: void __thiscall CTerrain::RemoveFlag(unsigned long) */

void __thiscall CTerrain::RemoveFlag(CTerrain *this,ulong param_1)

{
                    /* 0x84520  3134  ?RemoveFlag@CTerrain@@QAEXK@Z */
  *(uint *)(this + 8) = *(uint *)(this + 8) & ~param_1;
  return;
}

