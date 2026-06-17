
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::HandleAllForAClient(long) */

void __thiscall CServer::HandleAllForAClient(CServer *this,long param_1)

{
  bool bVar1;
  long lVar2;
  uint *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *local_34;
  int iStack_30;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  lVar2 = param_1;
                    /* 0x10de90  2230  ?HandleAllForAClient@CServer@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217f71;
  local_c = ExceptionList;
  iVar6 = *(int *)(*(int *)(this + 8) + 0x40 + param_1 * 0x60) << 3;
  ExceptionList = &local_c;
  *(float *)(&DAT_362cd190 + param_1 * 0x100) = (float)iVar6;
  piVar7 = (int *)(*(int *)(this + 8) + param_1 * 0x60);
  bVar1 = 0 < param_1;
  param_1 = iVar6;
  if ((((bVar1) && (*piVar7 != 0)) && (-1 < piVar7[5])) && ((0 < piVar7[5] || (piVar7[4] != 0)))) {
    puVar3 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    local_34 = (char *)(*puVar3 - piVar7[4]);
    iStack_30 = (puVar3[1] - piVar7[5]) - (uint)(*puVar3 < (uint)piVar7[4]);
    if ((float10)_DAT_362a609c <
        (float10)CONCAT44(iStack_30,local_34) / (float10)*(longlong *)_pTimer) {
      iVar6 = 0;
      pcVar4 = Translate(s_ETRSConnection_timeout_36236e18,4);
      SendDisconnectMessage(this,lVar2,pcVar4,iVar6);
    }
  }
  iVar6 = CCommunicationInterface::Server_IsClientUsed(&_cmiComm,lVar2);
  if ((iVar6 == 0) || (1 < piVar7[6])) {
    puVar5 = (undefined4 *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&param_1);
    uVar8 = *puVar5;
    local_4 = 0;
    pcVar4 = Translate(s_ETRSServer__Client___s__disconne_36236e30,4);
    CPrintF(pcVar4,uVar8);
    local_4 = 0xffffffff;
    StringFree((char *)param_1);
    CCommunicationInterface::Server_ClearClient(&_cmiComm,lVar2);
    HandleClientDisconected(this,lVar2);
  }
  CNetworkMessage::CNetworkMessage(local_24);
  local_4 = 1;
  iVar6 = CMessageDispatcher::ReceiveFromClientReliable
                    ((CMessageDispatcher *)_pNetwork,lVar2,local_24);
  while (iVar6 != 0) {
    Handle(this,lVar2,local_24);
    iVar6 = CMessageDispatcher::ReceiveFromClientReliable
                      ((CMessageDispatcher *)_pNetwork,lVar2,local_24);
  }
  iVar6 = CCommunicationInterface::Server_IsClientUsed(&_cmiComm,lVar2);
  if ((iVar6 == 0) || (1 < piVar7[6])) {
    puVar5 = (undefined4 *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_34);
    uVar8 = *puVar5;
    local_4._0_1_ = 2;
    pcVar4 = Translate(s_ETRSServer__Client___s__disconne_36236e58,4);
    CPrintF(pcVar4,uVar8);
    local_4 = CONCAT31(local_4._1_3_,1);
    StringFree(local_34);
    CCommunicationInterface::Server_ClearClient(&_cmiComm,lVar2);
    HandleClientDisconected(this,lVar2);
  }
  iVar6 = CMessageDispatcher::ReceiveFromClient((CMessageDispatcher *)_pNetwork,lVar2,local_24);
  while (iVar6 != 0) {
    Handle(this,lVar2,local_24);
    iVar6 = CMessageDispatcher::ReceiveFromClient((CMessageDispatcher *)_pNetwork,lVar2,local_24);
  }
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(local_24);
  ExceptionList = local_c;
  return;
}

