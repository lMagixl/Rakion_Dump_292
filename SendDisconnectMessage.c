
/* public: void __thiscall CServer::SendDisconnectMessage(long,char const *,int) */

void __thiscall CServer::SendDisconnectMessage(CServer *this,long param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *local_88;
  char *local_84;
  CNetworkMessage local_80 [24];
  CTMemoryStream local_68 [20];
  undefined4 *local_54;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1099b0  3273  ?SendDisconnectMessage@CServer@@QAEXJPBDH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217aee;
  local_c = ExceptionList;
  iVar3 = param_1 * 0x60 + *(int *)(this + 8);
  if (param_3 == 0) {
    ExceptionList = &local_c;
    CNetworkMessage::CNetworkMessage(local_80,3);
    local_4 = 0;
    local_88 = StringDuplicate(param_2);
    local_4._0_1_ = 1;
    CNetworkMessage::operator<<(local_80,(CTString *)&local_88);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_88);
    CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,param_1,local_80);
    local_4 = 0xffffffff;
    CNetworkMessage::~CNetworkMessage(local_80);
  }
  else {
    ExceptionList = &local_c;
    CTMemoryStream::CTMemoryStream(local_68);
    *local_54 = 3;
    local_54 = local_54 + 1;
    local_4 = 2;
    local_88 = StringDuplicate(param_2);
    local_4._0_1_ = 3;
    ::operator<<((CTStream *)local_68,(CTString *)&local_88);
    local_4 = CONCAT31(local_4._1_3_,2);
    StringFree(local_88);
    CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,param_1,local_68);
    local_4 = 0xffffffff;
    CTMemoryStream::~CTMemoryStream(local_68);
  }
  puVar1 = (undefined4 *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_88);
  uVar4 = *puVar1;
  local_4 = 4;
  pcVar2 = Translate(s_ETRSClient___s__ordered_to_disco_362369d4,4);
  CPrintF(pcVar2,uVar4,param_2);
  local_4 = 0xffffffff;
  StringFree(local_88);
  if (*(int *)(iVar3 + 0x18) == 0) {
    *(undefined4 *)(iVar3 + 0x18) = 1;
  }
  else {
    puVar1 = (undefined4 *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_84);
    uVar4 = *puVar1;
    local_4 = 5;
    pcVar2 = Translate(s_ETRSForcing_client___s__to_disco_36236a00,4);
    CPrintF(pcVar2,uVar4);
    local_4 = 0xffffffff;
    StringFree(local_84);
    *(undefined4 *)(iVar3 + 0x18) = 2;
  }
  ExceptionList = local_c;
  return;
}

