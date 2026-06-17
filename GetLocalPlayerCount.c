
/* public: long __thiscall CNetworkLibrary::GetLocalPlayerCount(void) */

long __thiscall CNetworkLibrary::GetLocalPlayerCount(CNetworkLibrary *this)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
                    /* 0xf4a60  1960  ?GetLocalPlayerCount@CNetworkLibrary@@QAEJXZ */
  lVar3 = 0;
  iVar1 = FUN_360facf0((undefined4 *)(this + 0x28));
  if (0 < iVar1) {
    piVar2 = (int *)(*(int *)(this + 0x2c) + 4);
    do {
      if (*piVar2 != 0) {
        lVar3 = lVar3 + 1;
      }
      piVar2 = piVar2 + 0xdc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return lVar3;
}

