
/* public: int __thiscall CSessionState::IsPaused(void) */

int __thiscall CSessionState::IsPaused(CSessionState *this)

{
  int iVar1;
  
                    /* 0x10e6d0  2441  ?IsPaused@CSessionState@@QAEHXZ */
  if (*(int *)(this + 0x6c) == 0) {
    iVar1 = CNetworkLibrary::IsPaused(_pNetwork);
    if (iVar1 == 0) {
      iVar1 = CNetworkLibrary::GetLocalPause(_pNetwork);
      if (iVar1 == 0) {
        iVar1 = CNetworkLibrary::IsWaitingForPlayers(_pNetwork);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

