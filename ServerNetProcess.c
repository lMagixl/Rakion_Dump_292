
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::ServerNetProcess(void) */

void __thiscall CServer::ServerNetProcess(CServer *this)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int extraout_ECX;
  int iVar5;
  
                    /* 0x10c890  3371  ?ServerNetProcess@CServer@@QAEXXZ */
  if (*(int *)(this + 0x553c) != 0) {
    DAT_362e5340 = DAT_362e5340 + 1;
    if (DAT_362cceb4 < 0) {
      DAT_362cceb4 = 0;
    }
    if (DAT_362e5340 % (DAT_362cceb4 + 1) == 0) {
      uVar1 = CCommunicationInterface::Server_GetMaxPendingData(&_cmiComm);
      if (DAT_362cceb8 < uVar1) {
        DAT_362cceb8 = CCommunicationInterface::Server_GetMaxPendingData(&_cmiComm);
      }
      uVar1 = CCommunicationInterface::Server_GetTotalPendingData(&_cmiComm);
      if (DAT_362ccebc < uVar1) {
        DAT_362ccebc = CCommunicationInterface::Server_GetTotalPendingData(&_cmiComm);
      }
      iVar5 = 1;
      iVar2 = FUN_360a59d0((undefined4 *)(this + 4));
      if (1 < iVar2) {
        iVar2 = 0x60;
        do {
          iVar3 = FUN_36109550((undefined4 *)(*(int *)(this + 8) + iVar2));
          if ((((iVar3 != 0) && (*(int *)(extraout_ECX + 4) != 0)) &&
              ((float)_DAT_36237358 < *(float *)(extraout_ECX + 0x50))) &&
             (plVar4 = (longlong *)CTimer::GetHighPrecisionTimer(_pTimer),
             (float10)*(float *)(*(int *)(this + 8) + 0x54 + iVar2) <=
             (float10)*plVar4 / (float10)*(longlong *)_pTimer)) {
            SendClientData(this,iVar5);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 0x60;
          iVar3 = FUN_360a59d0((undefined4 *)(this + 4));
        } while (iVar5 < iVar3);
      }
    }
  }
  return;
}

