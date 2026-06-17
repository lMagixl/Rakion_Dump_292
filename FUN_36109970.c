
CNetworkMessage * __cdecl FUN_36109970(CNetworkMessage *param_1,void *param_2)

{
  CNetworkMessage::Read(param_1,param_2,4);
  CNetworkMessage::Read(param_1,(void *)((int)param_2 + 4),4);
  CNetworkMessage::Read(param_1,(void *)((int)param_2 + 8),4);
  return param_1;
}

