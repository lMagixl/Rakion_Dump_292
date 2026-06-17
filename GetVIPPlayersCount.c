
/* public: long __thiscall CServer::GetVIPPlayersCount(void) */

long __thiscall CServer::GetVIPPlayersCount(CServer *this)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x10aab0  2190  ?GetVIPPlayersCount@CServer@@QAEJXZ */
  iVar3 = *(int *)(this + 0xc);
  lVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(this + 0x10);
    do {
      if ((*piVar2 != 0) && (*(int *)(piVar2[0x29] * 0x60 + 0x4c + *(int *)(this + 8)) != 0)) {
        lVar1 = lVar1 + 1;
      }
      piVar2 = piVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return lVar1;
}

