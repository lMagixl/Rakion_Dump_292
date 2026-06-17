
/* public: unsigned long __thiscall CEntity::IRnd(void) */

ulong __thiscall CEntity::IRnd(CEntity *this)

{
  ulong uVar1;
  
                    /* 0x125ec0  2276  ?IRnd@CEntity@@QAEKXZ */
  uVar1 = CSessionState::Rnd(*(CSessionState **)(_pNetwork + 0x24));
  return uVar1 >> 0xf & 0xffff;
}

