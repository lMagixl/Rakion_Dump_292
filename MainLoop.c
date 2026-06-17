
/* public: void __thiscall CNetworkLibrary::MainLoop(void) */

void __thiscall CNetworkLibrary::MainLoop(CNetworkLibrary *this)

{
  long lVar1;
  int iVar2;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfa510  2582  ?MainLoop@CNetworkLibrary@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217054;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  local_4 = 0;
  lVar1 = CSessionState::GetPlayersCount(*(CSessionState **)(_pNetwork + 0x24));
  DAT_362cce78 = (uint)(1 < lVar1);
  if (DAT_362cce88 == 2) {
    ChangeLevel_internal(this);
    DAT_362cce88 = 3;
  }
  iVar2 = IsGameFinished(_pNetwork);
  if (iVar2 == 0) {
    CSessionState::SessionStateLoop(*(CSessionState **)(this + 0x24));
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

