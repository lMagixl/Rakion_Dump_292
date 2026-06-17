
/* public: int __thiscall CMessageDispatcher::ReceiveFromServer(class CNetworkMessage &) */

int __thiscall
CMessageDispatcher::ReceiveFromServer(CMessageDispatcher *this,CNetworkMessage *param_1)

{
  CNetworkMessage *this_00;
  int iVar1;
  
                    /* 0x103d00  3064
                       ?ReceiveFromServer@CMessageDispatcher@@QAEHAAVCNetworkMessage@@@Z */
  this_00 = param_1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
  iVar1 = CCommunicationInterface::Client_Receive_Unreliable
                    (&_cmiComm,*(void **)(param_1 + 4),(long *)(param_1 + 0x10));
  if (iVar1 != 0) {
    *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this_00 + 4);
    *(undefined4 *)(this_00 + 0x14) = 0;
    CNetworkMessage::Read(this_00,&param_1,1);
    *(uint *)this_00 = (uint)param_1 & 0xff;
    FUN_36103bf0((int)this_00);
  }
  return iVar1;
}

