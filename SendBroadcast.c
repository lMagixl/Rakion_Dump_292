
/* public: void __thiscall CMessageDispatcher::SendBroadcast(class CNetworkMessage const &,unsigned
   long,unsigned short) */

void __thiscall
CMessageDispatcher::SendBroadcast
          (CMessageDispatcher *this,CNetworkMessage *param_1,ulong param_2,ushort param_3)

{
  ulong local_8;
  ushort local_4;
  undefined2 local_2;
  
                    /* 0x103ef0  3236
                       ?SendBroadcast@CMessageDispatcher@@QAEXABVCNetworkMessage@@KG@Z */
  local_8 = param_2;
  local_4 = param_3;
  local_2 = 0x2f2f;
  CCommunicationInterface::Broadcast_Send
            (&_cmiComm,*(void **)(param_1 + 4),*(long *)(param_1 + 0x10),(CAddress *)&local_8);
  FUN_36103bb0((int)param_1);
  return;
}

