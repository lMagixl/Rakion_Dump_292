
/* public: void __thiscall CSessionState::ClearMapNpc(void) */

void __thiscall CSessionState::ClearMapNpc(CSessionState *this)

{
  int iVar1;
  CSessionState *pCVar2;
  
                    /* 0x10e130  1264  ?ClearMapNpc@CSessionState@@QAEXXZ */
  pCVar2 = this + 0x2048;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0xffffffff;
    pCVar2 = pCVar2 + 4;
  }
  this[0x214c] = (CSessionState)0x0;
  return;
}

