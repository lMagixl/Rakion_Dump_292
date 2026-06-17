
/* public: long __thiscall CSessionState::GetPlayersCount(void) */

long __thiscall CSessionState::GetPlayersCount(CSessionState *this)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x111ae0  2054  ?GetPlayersCount@CSessionState@@QAEJXZ */
  iVar3 = *(int *)(*(int *)(_pNetwork + 0x18) + 0xc);
  lVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(*(int *)(_pNetwork + 0x18) + 0x10);
    do {
      if (*piVar2 != 0) {
        lVar1 = lVar1 + 1;
      }
      piVar2 = piVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return lVar1;
}

