
/* public: void __thiscall CSessionState::SessionStateLoop(void) */

void __thiscall CSessionState::SessionStateLoop(CSessionState *this)

{
  int iVar1;
  long lVar2;
  CPlayerSource *pCVar3;
  int *piVar4;
  DWORD DVar5;
  CSessionState *local_4;
  
  local_4 = this;
                    /* 0x1119f0  3386  ?SessionStateLoop@CSessionState@@QAEXXZ */
  iVar1 = CNetworkLibrary::IsGameFinished(_pNetwork);
  if (iVar1 == 0) {
    lVar2 = UpdateLocalTime(this);
    iVar1 = IsPaused(this);
    if (iVar1 == 0) {
      UpdateAllEntities(this);
    }
    local_4 = (CSessionState *)0x0;
    if (0 < lVar2) {
      UpdateAllEntitiesTick(this);
      pCVar3 = CNetworkLibrary::GetLocalPlayer(_pNetwork);
      if (*(int *)(_pNetwork + 0x86c) != 0) {
        CPlayerSource::ApplyAction(pCVar3,(int *)&local_4);
      }
      piVar4 = (int *)(**(code **)(*(int *)_pRakionWorldNet + 8))();
      if (*piVar4 != 0) {
        HandleTimers(this,*(float *)(_pTimer + 0xc));
      }
      HandleAllMovableEntities(this);
    }
    DVar5 = timeGetTime();
    if (99 < DVar5 - DAT_362fa990) {
      DAT_362fa990 = DVar5;
      pCVar3 = CNetworkLibrary::GetLocalPlayer(_pNetwork);
      piVar4 = (int *)(**(code **)(*(int *)_pRakionWorldNet + 8))();
      if (*piVar4 != 0) {
        CPlayerSource::SendAction(pCVar3);
      }
    }
    pCVar3 = CNetworkLibrary::GetLocalPlayer(_pNetwork);
    CPlayerSource::SendSyncData(pCVar3);
  }
  return;
}

