
CNetworkMessage * __cdecl FUN_36109930(CNetworkMessage *param_1,void *param_2)

{
  CNetworkMessage::Write(param_1,param_2,4);
  CNetworkMessage::Write(param_1,(void *)((int)param_2 + 4),4);
  CNetworkMessage::Write(param_1,(void *)((int)param_2 + 8),4);
  return param_1;
}

