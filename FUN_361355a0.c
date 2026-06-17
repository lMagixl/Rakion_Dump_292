
CNetworkMessage * __cdecl FUN_361355a0(CNetworkMessage *param_1,void *param_2)

{
  CNetworkMessage *this;
  CTString *pCVar1;
  
  pCVar1 = (CTString *)((int)param_2 + 0x14);
  this = CNetworkMessage::operator<<(param_1,(CTString *)((int)param_2 + 0x10));
  CNetworkMessage::operator<<(this,pCVar1);
  CNetworkMessage::Write(param_1,param_2,0x10);
  CNetworkMessage::Write(param_1,(void *)((int)param_2 + 0x20),0x20);
  CNetworkMessage::Write(param_1,(void *)((int)param_2 + 0x40),4);
  return param_1;
}

