
/* public: void __thiscall CSessionState::ClearQuestModeEntity(void) */

void __thiscall CSessionState::ClearQuestModeEntity(CSessionState *this)

{
  int iVar1;
  CSessionState *pCVar2;
  
  pCVar2 = this + 0x2150;
                    /* 0x10e150  1269  ?ClearQuestModeEntity@CSessionState@@QAEXXZ */
  for (iVar1 = 0xfe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0xffffffff;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)(this + 0x2548) = 0;
  pCVar2 = this + 0x254c;
  for (iVar1 = 0xfe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0xffffffff;
    pCVar2 = pCVar2 + 4;
  }
  *(undefined2 *)(this + 0x2944) = 0;
  return;
}

