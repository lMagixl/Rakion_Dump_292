
/* public: void __thiscall CMessageDispatcher::SendToClient(long,class CNetworkMessage const &) */

void __thiscall
CMessageDispatcher::SendToClient(CMessageDispatcher *this,long param_1,CNetworkMessage *param_2)

{
                    /* 0x103c30  3359  ?SendToClient@CMessageDispatcher@@QAEXJABVCNetworkMessage@@@Z
                        */
  CCommunicationInterface::Server_Send_Unreliable
            (&_cmiComm,param_1,*(void **)(param_2 + 4),*(long *)(param_2 + 0x10));
  FUN_36103bb0((int)param_2);
  return;
}

