
/* public: long __thiscall CServer::ActiveRemoteSessions(void) */

long __thiscall CServer::ActiveRemoteSessions(CServer *this)

{
  int iVar1;
  int extraout_ECX;
  int extraout_EDX;
  long lVar2;
  
                    /* 0x10a860  943  ?ActiveRemoteSessions@CServer@@QAEJXZ */
  lVar2 = 0;
  iVar1 = FUN_360a59d0((undefined4 *)(this + 4));
  if (1 < iVar1) {
    iVar1 = *(int *)(this + 8);
    do {
      iVar1 = FUN_36109550((undefined4 *)(iVar1 + 0x60));
      if ((iVar1 != 0) && (*(int *)(extraout_ECX + 4) != 0)) {
        lVar2 = lVar2 + 1;
      }
      iVar1 = extraout_ECX;
    } while (extraout_EDX != 1);
  }
  return lVar2;
}

