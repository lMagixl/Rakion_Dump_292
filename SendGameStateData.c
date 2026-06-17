
/* public: void __thiscall CServer::SendGameStateData(long) */

void __thiscall CServer::SendGameStateData(CServer *this,long param_1)

{
  undefined4 uVar1;
  float fVar2;
  long lVar3;
  char *pcVar4;
  undefined4 *puVar5;
  CTString *this_00;
  int iVar6;
  CTMemoryStream local_84 [96];
  CServer *local_24;
  char *local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x10cf00  3322  ?SendGameStateData@CServer@@QAEXJ@Z */
  lVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_36217e25;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff70;
  iVar6 = param_1 * 0x60 + *(int *)(this + 8);
  local_24 = this;
  if ((param_1 != 0) && (*(CNetworkLibrary *)(iVar6 + 0x58) != _pNetwork[0x98c])) {
    ExceptionList = &local_10;
    local_14 = &stack0xffffff70;
    param_1 = (long)StringDuplicate(&DAT_36222fa0);
    local_8 = 0;
    pcVar4 = Translate(s_ETRSServer_changed_levels_36236c9c,4);
    CTString::PrintF(this_00,(char *)&param_1,pcVar4);
    SendDisconnectMessage(this,lVar3,(char *)param_1,0);
    local_8 = 0xffffffff;
    StringFree((char *)param_1);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_36107140((void *)(iVar6 + 0x30),(undefined4 *)(*(int *)(this + 8) + 0x30));
  local_8 = 1;
  CTMemoryStream::CTMemoryStream(local_84);
  local_8._0_1_ = 2;
  PrepareGameStateData_t(this,local_84,&local_1c,&local_18);
  CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,lVar3,local_84);
  puVar5 = (undefined4 *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_20);
  uVar1 = *puVar5;
  local_8._0_1_ = 3;
  pcVar4 = Translate(s_ETRSServer__Sent_connection_data_36236cb8,4);
  CPrintF(pcVar4,uVar1,(int)(local_1c + (local_1c >> 0x1f & 0x3ffU)) >> 10,
          (int)(local_18 + (local_18 >> 0x1f & 0x3ffU)) >> 10);
  local_8 = CONCAT31(local_8._1_3_,2);
  StringFree(local_20);
  if (DAT_362cceec != 0) {
    pcVar4 = Translate(s_ETRSServer__Connection_data_dump_36236cf0,4);
    CPrintF(pcVar4);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  CTMemoryStream::~CTMemoryStream(local_84);
  local_8 = 0xffffffff;
  fVar2 = *(float *)(*(int *)(_pNetwork + 0x24) + 0x2c) - CTimer::TickQuantum;
  *(undefined4 *)(iVar6 + 8) = 1;
  *(float *)(iVar6 + 0x50) = fVar2;
  if (*(int *)(this + 0x553c) != 0) {
    FUN_36100e60(this + 0x3c,*(float *)(*(int *)(_pNetwork + 0x24) + 0x2c),'\x01');
  }
  InitServerNetProcess(this);
  ExceptionList = local_10;
  return;
}

