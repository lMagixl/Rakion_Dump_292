
void __thiscall FUN_361070d0(void *this,CNetworkMessage *param_1)

{
  CNetworkMessage *this_00;
  
  this_00 = (CNetworkMessage *)FUN_361070b0();
  CNetworkMessage::Initialize(this_00,param_1);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  CNetworkMessage::Shrink(this_00);
  FUN_36106fe0(this,this_00);
  return;
}

