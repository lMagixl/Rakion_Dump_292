
void __cdecl FUN_360f3570(CTString *param_1)

{
  CNetworkMessage *this;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362165d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CNetworkMessage::CNetworkMessage(local_24,0x20);
  local_4 = 0;
  this = CNetworkMessage::operator<<(local_24,(CTString *)&DAT_362cd004);
  CNetworkMessage::operator<<(this,param_1);
  CMessageDispatcher::SendToServerReliable((CMessageDispatcher *)_pNetwork,local_24);
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(local_24);
  ExceptionList = local_c;
  return;
}

