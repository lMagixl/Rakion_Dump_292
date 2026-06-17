
/* public: void __thiscall CNetworkLibrary::StopGame(void) */

void __thiscall CNetworkLibrary::StopGame(CNetworkLibrary *this)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  CNetworkLibrary *pCVar4;
  char *pcStack_28;
  CTSingleLock aCStack_24 [12];
  CTSingleLock aCStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* 0xf8410  3685  ?StopGame@CNetworkLibrary@@QAEXXZ */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_36216dd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CSoundLibrary::Flush(_pSound);
  (*DAT_362c46b4)(0);
  pcVar2 = Translate(s_ETRSstopping_game__36234e00,4);
  CPrintF(pcVar2);
  CTSingleLock::CTSingleLock(aCStack_18,(CTCriticalSection *)(_pTimer + 0x1c),1);
  iStack_4 = 0;
  CTSingleLock::CTSingleLock(aCStack_24,(CTCriticalSection *)(this + 0x1c),1);
  iStack_4 = CONCAT31(iStack_4._1_3_,1);
  StopDemoRec(this);
  if (*(int *)(this + 0x8ec) != 0) {
    CTFileStream::Close((CTFileStream *)(this + 0x8f4));
    *(undefined4 *)(this + 0x8ec) = 0;
    *(undefined4 *)(this + 0x8f0) = 0;
  }
  CSessionState::Stop(*(CSessionState **)(this + 0x24));
  if (*(int *)(this + 0x14) != 0) {
    CServer::Stop(*(CServer **)(this + 0x18));
    *(undefined4 *)(this + 0x14) = 0;
  }
  pcVar2 = StringDuplicate(&DAT_36234e14);
  StringFree(*(char **)(this + 0x30));
  *(char **)(this + 0x30) = pcVar2;
  CWorld::Clear((CWorld *)(this + 0x11e4));
  if (*(void **)(this + 0x58) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x58));
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
    pCVar4 = this + 0x60;
    for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pCVar4 = 0;
      pCVar4 = pCVar4 + 4;
    }
  }
  if (*(void **)(this + 0x860) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x860));
    *(undefined4 *)(this + 0x860) = 0;
    *(undefined4 *)(this + 0x864) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    pvVar1 = *(void **)(this + 0x2c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x370,*(int *)((int)pvVar1 + -4),CPlayerSource::~CPlayerSource);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  FUN_360fac50(this + 0x28,4);
  pcStack_28 = StringDuplicate(s_pwoCurrentWorld_36234e18);
  iStack_4._0_1_ = 2;
  CShell::SetINDEX(_pShell,(CTString *)&pcStack_28,0);
  iStack_4._0_1_ = 1;
  StringFree(pcStack_28);
  FUN_36130460();
  FUN_360f3800();
  *(undefined4 *)(_pTimer + 0xc) = 0;
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  CTSingleLock::~CTSingleLock(aCStack_24);
  iStack_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(aCStack_18);
  ExceptionList = pvStack_c;
  return;
}

