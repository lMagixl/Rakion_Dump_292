
void __thiscall FUN_36106730(void *this,CNetworkMessage *param_1)

{
  CNetworkMessage::Write(param_1,(void *)((int)this + 0x20),4);
  CNetworkMessage::InsertSubMessage(param_1,this);
  return;
}

