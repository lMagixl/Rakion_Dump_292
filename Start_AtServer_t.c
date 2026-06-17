
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSessionState::Start_AtServer_t(void) */

void __thiscall CSessionState::Start_AtServer_t(CSessionState *this)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  float local_48;
  undefined4 local_3c [6];
  CNetworkMessage local_24 [4];
  void *local_20;
  long local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x10ecf0  3669  ?Start_AtServer_t@CSessionState@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217fbc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CNetworkMessage::CNetworkMessage(local_24,5);
  local_4 = 0;
  FUN_36109900((undefined4 *)(this + 0x2970));
  FUN_36109930(local_24,this + 0x2970);
  CCommunicationInterface::Client_Send_Reliable(&_cmiComm,local_20,local_14);
  fVar1 = _DAT_362a6094;
  if (*(int *)(_pNetwork + 0x14) != 0) {
    fVar1 = _DAT_3622dd0c;
  }
  fVar1 = fVar1 * _DAT_36230188;
  local_48 = 0.0;
  fVar2 = _DAT_3622376c;
  while (fVar2 < fVar1) {
    CCommunicationInterface::Server_Update(&_cmiComm);
    if (*(int *)*(CServer **)(_pNetwork + 0x18) != 0) {
      CServer::HandleAll(*(CServer **)(_pNetwork + 0x18));
    }
    CServer::ServerLoop(*(CServer **)(_pNetwork + 0x18));
    CCommunicationInterface::Server_Update(&_cmiComm);
    iVar3 = CCommunicationInterface::Client_Update(&_cmiComm);
    if (iVar3 == 0) break;
    CNetworkMessage::CNetworkMessage((CNetworkMessage *)local_3c);
    local_4._0_1_ = 1;
    iVar3 = CMessageDispatcher::ReceiveFromServerReliable
                      ((CMessageDispatcher *)_pNetwork,(CNetworkMessage *)local_3c);
    if (iVar3 != 0) {
      if (((byte)local_3c[0] & 0x3f) == 6) {
        CNetworkMessage::Read((CNetworkMessage *)local_3c,this + 0x2c,4);
        CNetworkMessage::Read((CNetworkMessage *)local_3c,this + 4,4);
        *(undefined4 *)(this + 0x14) = 0;
        puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(this + 0x48) = *puVar5;
        *(undefined4 *)(this + 0x4c) = puVar5[1];
        local_4 = (uint)local_4._1_3_ << 8;
        CNetworkMessage::~CNetworkMessage((CNetworkMessage *)local_3c);
        goto LAB_3610ee85;
      }
      pcVar4 = Translate(s_ETRSInvalid_message_while_waitin_362373a0,4);
      ThrowF_t(pcVar4);
      iVar3 = CCommunicationInterface::Client_IsConnected(&_cmiComm);
      if (iVar3 == 0) {
        pcVar4 = Translate(s_ETRSClient_disconnected_362373e4,4);
        ThrowF_t(pcVar4);
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    CNetworkMessage::~CNetworkMessage((CNetworkMessage *)local_3c);
    Sleep(0x32);
    local_48 = local_48 + _DAT_36235abc;
    fVar2 = local_48;
  }
  pcVar4 = Translate(s_ETRSTimeout_while_waiting_for_se_362373fc,4);
  ThrowF_t(pcVar4);
LAB_3610ee85:
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(local_24);
  ExceptionList = local_c;
  return;
}

