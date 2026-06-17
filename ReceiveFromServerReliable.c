
/* public: int __thiscall CMessageDispatcher::ReceiveFromServerReliable(class CTMemoryStream &) */

int __thiscall
CMessageDispatcher::ReceiveFromServerReliable(CMessageDispatcher *this,CTMemoryStream *param_1)

{
  int iVar1;
  long lVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x103dc0  3066
                       ?ReceiveFromServerReliable@CMessageDispatcher@@QAEHAAVCTMemoryStream@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_362176c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = CCommunicationInterface::Client_Receive_Reliable(&_cmiComm,(CTStream *)param_1);
  if (iVar1 != 0) {
    local_8 = 0;
    lVar2 = CTStream::GetPos_t((CTStream *)param_1);
    FUN_36103c10(lVar2);
  }
  ExceptionList = local_10;
  return iVar1;
}

