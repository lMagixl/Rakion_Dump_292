
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::ConnectRemoteSessionState(long,class CNetworkMessage &) */

void __thiscall
CServer::ConnectRemoteSessionState(CServer *this,long param_1,CNetworkMessage *param_2)

{
  bool bVar1;
  CNetworkMessage *pCVar2;
  CTString *pCVar3;
  int iVar4;
  char *pcVar5;
  CNetworkMessage *this_00;
  long lVar6;
  undefined4 *puVar7;
  CTString *this_01;
  undefined4 uVar8;
  undefined4 uVar9;
  CTMemoryStream local_b0 [20];
  undefined4 *local_9c;
  int local_54;
  CServer *local_50;
  long local_4c;
  long local_48;
  uint local_44;
  long local_40;
  undefined4 *local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  char *local_28;
  int local_24;
  char local_1d;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x10abe0  1359
                       ?ConnectRemoteSessionState@CServer@@QAEXJAAVCNetworkMessage@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36217c79;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff44;
  local_3c = (undefined4 *)(param_1 * 0x60 + *(int *)(this + 8));
  ExceptionList = &local_10;
  local_50 = this;
  pCVar3 = (CTString *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_1c);
  local_8 = 0;
  iVar4 = FUN_360f2f30(pCVar3,&DAT_362ccfec);
  local_8 = 0xffffffff;
  local_1d = (iVar4 == 0) != (DAT_362cceac == 0);
  StringFree(local_1c);
  pCVar2 = param_2;
  if (local_1d != '\0') {
    iVar4 = 1;
    pcVar5 = Translate(s_ETRSYou_are_banned_from_this_ser_36236aa0,4);
    SendDisconnectMessage(this,param_1,pcVar5,iVar4);
    ExceptionList = local_10;
    return;
  }
  CNetworkMessage::Read(param_2,&local_1c,4);
  if (local_1c != (char *)0x56544147) {
    local_24 = 0x6d;
    local_1c = (char *)0x1;
LAB_3610adcd:
    param_2 = (CNetworkMessage *)StringDuplicate(&DAT_36222fa0);
    uVar9 = 6;
    uVar8 = 10000;
    local_8 = 1;
    iVar4 = local_24;
    pcVar5 = Translate(s_ETRSThis_server_runs_version__d__36236ac8,4);
    CTString::PrintF(this_01,(char *)&param_2,pcVar5,uVar8,uVar9,iVar4,local_1c);
    SendDisconnectMessage(this,param_1,(char *)param_2,1);
    local_8 = 0xffffffff;
    StringFree((char *)param_2);
    ExceptionList = local_10;
    return;
  }
  CNetworkMessage::Read(pCVar2,&local_24,4);
  CNetworkMessage::Read(pCVar2,&local_1c,4);
  if ((local_24 != 10000) || (local_1c != (char *)0x6)) goto LAB_3610adcd;
  local_28 = StringDuplicate(&DAT_36222fa0);
  local_8 = 2;
  local_18 = StringDuplicate(&DAT_36222fa0);
  pCVar2 = param_2;
  pCVar3 = (CTString *)&local_18;
  local_8._0_1_ = 3;
  this_00 = CNetworkMessage::operator>>(param_2,(CTString *)&local_28);
  CNetworkMessage::operator>>(this_00,pCVar3);
  CNetworkMessage::Read(pCVar2,&local_1c,4);
  iVar4 = CTString::operator!=(&_strModName,(CTString *)&local_28);
  if (iVar4 != 0) {
    CTString::CTString(__strModURL,(long)&param_2,(char *)0x0,s_MOD__s__s_36236b4c,__strModName,
                       __strModURL);
    local_8._0_1_ = 4;
    SendDisconnectMessage(this,param_1,(char *)param_2,1);
    local_8._0_1_ = 3;
    StringFree((char *)param_2);
    local_8 = CONCAT31(local_8._1_3_,2);
    StringFree(local_18);
    local_8 = 0xffffffff;
    StringFree(local_28);
    ExceptionList = local_10;
    return;
  }
  local_30 = *(uint *)(*(int *)(_pNetwork + 0x24) + 0x84);
  local_2c = local_30;
  if ((0 < (int)DAT_362ccef4) && (local_2c = DAT_362ccef4, 0x20 < (int)DAT_362ccef4)) {
    local_2c = 0x20;
  }
  local_44 = 0;
  local_38 = 0;
  if (0 < DAT_362ccef0) {
    iVar4 = CTString::operator!=((CTString *)&DAT_362cd008,&DAT_36236b56);
    if (iVar4 != 0) {
      lVar6 = GetVIPPlayersCount(this);
      iVar4 = DAT_362ccef0;
      local_44 = (DAT_362ccef0 - lVar6 < 0) - 1 & DAT_362ccef0 - lVar6;
      lVar6 = GetVIPClientsCount(this);
      local_38 = (iVar4 - lVar6 < 0) - 1 & iVar4 - lVar6;
    }
  }
  bVar1 = false;
  local_54 = DAT_362a6090;
  local_4c = GetPlayersCount(this);
  local_48 = GetClientsCount(this);
  local_40 = GetObserversCount(this);
  local_24 = 0;
  local_34 = 0;
  iVar4 = CTString::operator!=((CTString *)&DAT_362cd008,&DAT_36236b57);
  if (iVar4 != 0) {
    iVar4 = CTString::operator==((CTString *)&DAT_362cd008,(CTString *)&local_18);
    if (iVar4 != 0) {
      bVar1 = true;
      local_24 = 1;
      local_34 = 1;
    }
  }
  iVar4 = CTString::operator==((CTString *)&DAT_362cd000,&DAT_36236b58);
  if (iVar4 == 0) {
    iVar4 = CTString::operator==((CTString *)&DAT_362cd000,(CTString *)&local_18);
    if (iVar4 != 0) goto LAB_3610af4a;
  }
  else {
LAB_3610af4a:
    bVar1 = true;
  }
  iVar4 = CTString::operator==((CTString *)&DAT_362cd00c,&DAT_36236b59);
  if ((iVar4 == 0) || (!bVar1)) {
    iVar4 = CTString::operator==((CTString *)&DAT_362cd00c,(CTString *)&local_18);
    if (iVar4 != 0) goto LAB_3610af78;
  }
  else {
LAB_3610af78:
    local_34 = 1;
  }
  if (local_24 == 0) {
    local_30 = ((int)(local_30 - local_44) < 0) - 1 & local_30 - local_44;
    local_2c = ((int)(local_2c - local_38) < 0) - 1 & local_2c - local_38;
  }
  if (((int)local_30 < (int)(local_1c + local_4c)) || ((int)local_2c < local_48 + 1)) {
    iVar4 = 1;
    pcVar5 = Translate(s_ETRSServer_full__36236b5c,4);
    SendDisconnectMessage(this,param_1,pcVar5,iVar4);
    local_8 = CONCAT31(local_8._1_3_,2);
    StringFree(local_18);
    local_8 = 0xffffffff;
    StringFree(local_28);
    ExceptionList = local_10;
    return;
  }
  if (local_1c == (char *)0x0) {
    if ((local_54 <= local_40) && (local_24 == 0)) {
      iVar4 = 1;
      pcVar5 = Translate(s_ETRSToo_many_observers__36236b70,4);
      SendDisconnectMessage(this,param_1,pcVar5,iVar4);
      local_8 = CONCAT31(local_8._1_3_,2);
      StringFree(local_18);
      local_8 = 0xffffffff;
      StringFree(local_28);
      ExceptionList = local_10;
      return;
    }
    if (local_34 != 0) goto LAB_3610b087;
    iVar4 = CTString::operator==((CTString *)&local_18,&DAT_36236b88);
    if (iVar4 == 0) {
      pcVar5 = s_ETRSWrong_observer_password__36236bc0;
    }
    else {
      pcVar5 = s_ETRSThis_server_requires_passwor_36236b8c;
    }
  }
  else {
    if (bVar1) goto LAB_3610b087;
    iVar4 = CTString::operator==((CTString *)&local_18,&DAT_36236bdd);
    if (iVar4 == 0) {
      pcVar5 = s_ETRSWrong_password__36236c10;
    }
    else {
      pcVar5 = s_ETRSThis_server_requires_passwor_36236be0;
    }
  }
  iVar4 = 1;
  pcVar5 = Translate(pcVar5,4);
  SendDisconnectMessage(this,param_1,pcVar5,iVar4);
LAB_3610b087:
  puVar7 = local_3c;
  FUN_361097b0(local_3c);
  puVar7[0x13] = local_24;
  puVar7[0x12] = local_1c;
  *(CNetworkLibrary *)(puVar7 + 0x16) = _pNetwork[0x98c];
  FUN_36109970(param_2,puVar7 + 0xf);
  local_8._0_1_ = 5;
  CTMemoryStream::CTMemoryStream(local_b0);
  *local_9c = 8;
  *(CNetworkLibrary *)(local_9c + 1) = _pNetwork[0x98c];
  local_9c = (undefined4 *)((int)local_9c + 5);
  local_8._0_1_ = 6;
  ::operator<<((CTStream *)local_b0,(CTString *)&DAT_362ccff4);
  ::operator<<((CTStream *)local_b0,(CTFileName *)(_pNetwork + 0x12fc));
  *local_9c = *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x58);
  local_9c = local_9c + 1;
  CTStream::Write_t((CTStream *)local_b0,_pNetwork + 0x9ac,0x800);
  lVar6 = CTStream::GetStreamSize((CTStream *)local_b0);
  CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,param_1,local_b0);
  puVar7 = (undefined4 *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&param_2);
  uVar8 = *puVar7;
  local_8._0_1_ = 7;
  pcVar5 = Translate(s_ETRSServer__Sent_initialization_i_36236c24,4);
  CPrintF(pcVar5,uVar8,(int)(lVar6 + (lVar6 >> 0x1f & 0x3ffU)) >> 10);
  local_8._0_1_ = 6;
  StringFree((char *)param_2);
  local_8 = CONCAT31(local_8._1_3_,5);
  CTMemoryStream::~CTMemoryStream(local_b0);
  local_8 = 2;
  StringFree(local_18);
  local_8 = 0xffffffff;
  StringFree(local_28);
  ExceptionList = local_10;
  return;
}

