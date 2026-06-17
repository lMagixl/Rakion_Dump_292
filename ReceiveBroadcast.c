
/* public: int __thiscall CMessageDispatcher::ReceiveBroadcast(class CNetworkMessage &,unsigned long
   &,unsigned short &) */

int __thiscall
CMessageDispatcher::ReceiveBroadcast
          (CMessageDispatcher *this,CNetworkMessage *param_1,ulong *param_2,ushort *param_3)

{
  CNetworkMessage *this_00;
  int iVar1;
  ulong local_8;
  ushort local_4;
  undefined2 local_2;
  
                    /* 0x103f40  3058
                       ?ReceiveBroadcast@CMessageDispatcher@@QAEHAAVCNetworkMessage@@AAKAAG@Z */
  this_00 = param_1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
  local_8 = 0;
  local_4 = 0;
  local_2 = 0;
  iVar1 = CCommunicationInterface::Broadcast_Receive
                    (&_cmiComm,*(void **)(param_1 + 4),(long *)(param_1 + 0x10),(CAddress *)&local_8
                    );
  if (iVar1 != 0) {
    *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this_00 + 4);
    *(undefined4 *)(this_00 + 0x14) = 0;
    CNetworkMessage::Read(this_00,&param_1,1);
    *(uint *)this_00 = (uint)param_1 & 0xff;
    *param_2 = local_8;
    *param_3 = local_4;
  }
  return iVar1;
}

