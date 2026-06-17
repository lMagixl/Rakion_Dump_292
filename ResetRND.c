
/* public: void __thiscall CSessionState::ResetRND(void) */

void __thiscall CSessionState::ResetRND(CSessionState *this)

{
  undefined4 uVar1;
  CSessionState *extraout_ECX;
  int extraout_EDX;
  
                    /* 0x10e3e0  3166  ?ResetRND@CSessionState@@QAEXXZ */
  uVar1 = *(undefined4 *)(this + 0x68);
  *(undefined4 *)(this + 0x68) = 1;
  *(undefined4 *)(this + 0x54) = 0x87654321;
  do {
    Rnd(this);
    this = extraout_ECX;
  } while (extraout_EDX != 1);
  *(undefined4 *)(extraout_ECX + 0x68) = uVar1;
  return;
}

