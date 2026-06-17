
/* public: int __thiscall CNetworkLibrary::IsWaitingForPlayers(void) */

int __thiscall CNetworkLibrary::IsWaitingForPlayers(CNetworkLibrary *this)

{
  long lVar1;
  
                    /* 0xf3b10  2505  ?IsWaitingForPlayers@CNetworkLibrary@@QAEHXZ */
  if (*(int *)(*(CSessionState **)(this + 0x24) + 0x88) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x14) != 0) {
    lVar1 = CServer::GetPlayersCount(*(CServer **)(this + 0x18));
    return (uint)(lVar1 < *(int *)(*(int *)(this + 0x24) + 0x84));
  }
  lVar1 = CSessionState::GetPlayersCount(*(CSessionState **)(this + 0x24));
  return (uint)(lVar1 < *(int *)(*(int *)(this + 0x24) + 0x84));
}

