
/* public: void __thiscall CServer::ConnectLocalSessionState(long,class CNetworkMessage &) */

void __thiscall
CServer::ConnectLocalSessionState(CServer *this,long param_1,CNetworkMessage *param_2)

{
  undefined4 *puVar1;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10a300  1358
                       ?ConnectLocalSessionState@CServer@@QAEXJAAVCNetworkMessage@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217b5c;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_1 * 0x60 + *(int *)(this + 8));
  ExceptionList = &local_c;
  FUN_361097b0(puVar1);
  CNetworkMessage::CNetworkMessage(local_24,6);
  local_4 = 0;
  CNetworkMessage::Write(local_24,this + 0x14,4);
  CNetworkMessage::Write(local_24,this + 0x18,4);
  puVar1[0x12] = 0xffffffff;
  FUN_36109970(param_2,puVar1 + 0xf);
  CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,param_1,local_24);
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(local_24);
  ExceptionList = local_c;
  return;
}

