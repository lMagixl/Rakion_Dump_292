
/* WARNING: Removing unreachable block (ram,0x36125f00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CEntity::FRnd(void) */

float __thiscall CEntity::FRnd(CEntity *this)

{
  ulong uVar1;
  
                    /* 0x125ee0  1600  ?FRnd@CEntity@@QAEMXZ */
  uVar1 = CSessionState::Rnd(*(CSessionState **)(_pNetwork + 0x24));
  return (float)(uVar1 >> 7 & 0xffffff) * _DAT_362382c8;
}

