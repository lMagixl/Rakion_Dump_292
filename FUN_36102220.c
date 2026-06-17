
undefined4 __thiscall FUN_36102220(void *this,uint *param_1,CNetworkMessage *param_2)

{
  uint *puVar1;
  CNetworkMessage *pCVar2;
  undefined4 *puVar3;
  
  pCVar2 = param_2;
  FUN_361010a0(this,&param_2,4,(uint *)param_2);
  *param_1 = (uint)param_2 >> 0x18;
  param_1[8] = (uint)param_2 & 0x7fffff;
  FUN_361010a0(this,param_1 + 9,4,(uint *)pCVar2);
  puVar1 = param_1 + 7;
  FUN_361010a0(this,puVar1,2,(uint *)pCVar2);
  param_2 = (CNetworkMessage *)(param_1 + 1);
  CNetworkMessage::Reinit(param_2);
  if ((ushort)*puVar1 != 0) {
    puVar3 = (undefined4 *)thunk_FUN_361bf99c((uint)(ushort)*puVar1);
    FUN_361010a0(this,puVar3,(uint)(ushort)*puVar1,(uint *)pCVar2);
    CNetworkMessage::Write(param_2,puVar3,(uint)(ushort)*puVar1);
    operator_delete__(puVar3);
  }
  return 0;
}

