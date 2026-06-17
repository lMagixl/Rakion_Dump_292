
/* public: long __thiscall CServer::GetPlayersCountForClient(long) */

long __thiscall CServer::GetPlayersCountForClient(CServer *this,long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x10aaf0  2055  ?GetPlayersCountForClient@CServer@@QAEJJ@Z */
  iVar3 = *(int *)(this + 0xc);
  lVar1 = 0;
  if (0 < iVar3) {
    piVar2 = *(int **)(this + 0x10);
    do {
      if ((*piVar2 != 0) && (piVar2[0x29] == param_1)) {
        lVar1 = lVar1 + 1;
      }
      piVar2 = piVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return lVar1;
}

