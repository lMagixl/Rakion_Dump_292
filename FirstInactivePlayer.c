
/* public: class CPlayerTarget * __thiscall CServer::FirstInactivePlayer(void) */

CPlayerTarget * __thiscall CServer::FirstInactivePlayer(CServer *this)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x10ab20  1654  ?FirstInactivePlayer@CServer@@QAEPAVCPlayerTarget@@XZ */
  iVar1 = 0;
  if (0 < *(int *)(this + 0xc)) {
    piVar2 = *(int **)(this + 0x10);
    do {
      if (*piVar2 == 0) {
        return (CPlayerTarget *)(*(int **)(this + 0x10) + iVar1 * 0x40);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x40;
    } while (iVar1 < *(int *)(this + 0xc));
  }
  return (CPlayerTarget *)0x0;
}

