
/* public: unsigned long __thiscall CSessionState::Rnd(void) */

ulong __thiscall CSessionState::Rnd(CSessionState *this)

{
  int iVar1;
  
                    /* 0x10e3d0  3178  ?Rnd@CSessionState@@QAEKXZ */
  iVar1 = *(int *)(this + 0x54);
  *(int *)(this + 0x54) = iVar1 * 0x40003;
  return iVar1 * 0x40003;
}

