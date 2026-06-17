
CNetworkMessage * __thiscall FUN_361066d0(void *this,NetworkMessageType param_1,undefined4 param_2)

{
  CNetworkMessage::CNetworkMessage(this,param_1);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return this;
}

