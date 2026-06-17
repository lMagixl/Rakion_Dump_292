
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::StartNewTick(float) */

void __thiscall CServer::StartNewTick(CServer *this,float param_1)

{
  CServer *pCVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  
                    /* 0x10cd10  3662  ?StartNewTick@CServer@@QAEXM@Z */
  if (*(int *)(_pNetwork + 0x874) != 0) {
    pCVar1 = this + 0x1c84;
    FUN_36100c30(pCVar1,param_1);
    FUN_36100e60(pCVar1,param_1,'\x01');
    WriteDemoData(this,param_1 - CTimer::TickQuantum);
    FUN_361024a0(pCVar1,param_1 - (CTimer::TickQuantum + CTimer::TickQuantum),
                 param_1 - CTimer::TickQuantum);
  }
  if (*(int *)(this + 0x553c) != 0) {
    iVar2 = *(int *)(this + 0x1c80) + -1;
    if (iVar2 < 0) {
      iVar2 = *(int *)(this + 0x1c80) + 599;
    }
    if (CTimer::TickQuantum * _DAT_36227cf0 + *(float *)(this + iVar2 * 0xc + 0x58) <= param_1) {
      uVar3 = CCommunicationInterface::Server_GetMaxPendingData(&_cmiComm);
      pCVar1 = this + 0x3c;
      iVar2 = FUN_360f12f0((int)pCVar1);
      if (((int)DAT_362a6054 < iVar2) || (DAT_362a6054 < uVar3)) {
        iVar2 = FUN_360f12f0((int)pCVar1);
        if ((int)DAT_362a6054 < iVar2) {
          pcVar4 = Translate(s_ETRSKicking_players_because_send_362370e0,4);
          CPrintF(pcVar4);
        }
        if (DAT_362a6054 < uVar3) {
          pcVar4 = Translate(s_ETRSKicking_players_because_too_m_36237118,4);
          CPrintF(pcVar4);
        }
        DropLaggingClients(this);
      }
      iVar2 = FUN_36100c30(pCVar1,param_1);
      if (iVar2 == 1) {
        pcVar4 = Translate(s_ETRSKicking_players_because_of_t_36237150,4);
        CPrintF(pcVar4);
        DropLaggingClients(this);
        if (*(int *)(this + 0x553c) != 0) {
          FUN_36100c30(pCVar1,param_1);
        }
      }
    }
  }
  return;
}

