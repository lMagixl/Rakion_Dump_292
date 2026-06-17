
/* public: void __thiscall CMessageDispatcher::SendToClientReliable(long,class CTMemoryStream &) */

void __thiscall
CMessageDispatcher::SendToClientReliable
          (CMessageDispatcher *this,long param_1,CTMemoryStream *param_2)

{
  CTMemoryStream *this_00;
  CMessageDispatcher *local_4;
  
                    /* 0x103c90  3360
                       ?SendToClientReliable@CMessageDispatcher@@QAEXJAAVCTMemoryStream@@@Z */
  this_00 = param_2;
  local_4 = this;
  CTMemoryStream::LockBuffer(param_2,&local_4,(long *)&param_2);
  CCommunicationInterface::Server_Send_Reliable(&_cmiComm,param_1,local_4,(long)param_2);
  CTMemoryStream::UnlockBuffer(this_00);
  FUN_36103bd0(param_2);
  return;
}

