
/* public: int __thiscall CMessageDispatcher::ReceiveFromClient(long,class CNetworkMessage &) */

int __thiscall
CMessageDispatcher::ReceiveFromClient
          (CMessageDispatcher *this,long param_1,CNetworkMessage *param_2)

{
  CNetworkMessage *this_00;
  int iVar1;
  
                    /* 0x103e30  3062
                       ?ReceiveFromClient@CMessageDispatcher@@QAEHJAAVCNetworkMessage@@@Z */
  this_00 = param_2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 8);
  iVar1 = CCommunicationInterface::Server_Receive_Unreliable
                    (&_cmiComm,param_1,*(void **)(param_2 + 4),(long *)(param_2 + 0x10));
  if (iVar1 != 0) {
    *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this_00 + 4);
    *(undefined4 *)(this_00 + 0x14) = 0;
    CNetworkMessage::Read(this_00,&param_2,1);
    *(uint *)this_00 = (uint)param_2 & 0xff;
    FUN_36103bf0((int)this_00);
  }
  return iVar1;
}

