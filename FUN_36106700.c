
void __thiscall FUN_36106700(void *this,CNetworkMessage *param_1)

{
  CNetworkMessage::Read(param_1,(void *)((int)this + 0x20),4);
  CNetworkMessage::ExtractSubMessage(param_1,this);
  return;
}

