
/* public: long __thiscall CServer::GetClientsCount(void) */

long __thiscall CServer::GetClientsCount(CServer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  long lVar4;
  
                    /* 0x10a1d0  1764  ?GetClientsCount@CServer@@QAEJXZ */
  lVar4 = 0;
  iVar1 = FUN_360a59d0((undefined4 *)(this + 4));
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      if ((iVar3 < 1) ||
         (iVar2 = FUN_36109550((undefined4 *)(*(int *)(this + 8) + iVar3)), iVar3 = extraout_EDX,
         iVar2 != 0)) {
        lVar4 = lVar4 + 1;
      }
      iVar3 = iVar3 + 0x60;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return lVar4;
}

