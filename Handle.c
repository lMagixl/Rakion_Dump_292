
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::Handle(long,class CNetworkMessage &) */

void __thiscall CServer::Handle(CServer *this,long param_1,CNetworkMessage *param_2)

{
  CServer *pCVar1;
  CNetworkLibrary *pCVar2;
  CPlayerCharacter *this_00;
  undefined4 *puVar3;
  CPlayerTarget *pCVar4;
  ulong uVar5;
  int iVar6;
  CNetworkMessage *this_01;
  CTString *pCVar7;
  char *pcVar8;
  CTString *this_02;
  int iVar9;
  void *this_03;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  char *local_e0;
  char *local_dc;
  char *local_d8;
  float local_d4;
  char *local_d0;
  char *local_cc;
  char *local_c8;
  CNetworkMessage local_c4 [36];
  char *local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84 [2];
  CEntityMessage local_7c [4];
  CNetworkMessage local_78 [36];
  CPlayerCharacter local_54 [64];
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10d140  2226  ?Handle@CServer@@QAEXJAAVCNetworkMessage@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217f4f;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  iVar9 = param_1 * 0x60;
  pcVar10 = (char *)(*(int *)(this + 8) + iVar9);
  ExceptionList = &local_c;
  local_dc = pcVar10;
  puVar3 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
  *(undefined4 *)(pcVar10 + 0x10) = *puVar3;
  *(undefined4 *)(pcVar10 + 0x14) = puVar3[1];
  switch(*(uint *)param_2 & 0x3f) {
  case 5:
    ConnectLocalSessionState(this,param_1,param_2);
    break;
  case 7:
    ConnectRemoteSessionState(this,param_1,param_2);
    break;
  case 9:
    pcVar10 = Translate(s_ETRSSending_game_state_response_36236e80,4);
    CPrintF(pcVar10);
    SendGameStateData(this,param_1);
    *(CNetworkLibrary *)(local_dc + 0x58) = _pNetwork[0x98c];
    break;
  case 0xd:
    local_dc = (char *)(*(int *)(this + 8) + iVar9);
    if ((param_1 == 0) || (*(CNetworkLibrary *)(local_dc + 0x58) == _pNetwork[0x98c])) {
      CNetworkMessage::Read(param_2,&local_d4,4);
      if (*(float *)(_pNetwork + 0x868) == local_d4) {
        puVar3 = (undefined4 *)
                 CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_8c);
        uVar12 = *puVar3;
        local_4 = 0xc;
        pcVar10 = Translate(s_ETRSServer__Client___s___CRC_che_36236f90,4);
        CPrintF(pcVar10,uVar12);
        local_4 = 0xffffffff;
        StringFree(local_8c);
        local_dc[4] = '\x01';
        local_dc[5] = '\0';
        local_dc[6] = '\0';
        local_dc[7] = '\0';
      }
      else {
        iVar9 = 0;
        pcVar10 = Translate(s_ETRSWrong_CRC_check__36236f78,4);
        SendDisconnectMessage(this,param_1,pcVar10,iVar9);
      }
    }
    else {
      CTString::CTString((CTString *)&local_dc);
      local_4 = 0xb;
      pcVar10 = Translate(s_ETRSServer_changed_levels_36236f5c,4);
      CTString::PrintF((CTString *)&local_dc,(char *)&local_dc,pcVar10);
      SendDisconnectMessage(this,param_1,local_dc,0);
      local_4 = 0xffffffff;
      StringFree(local_dc);
    }
    break;
  case 0xe:
    if ((param_1 != 0) && (*(CNetworkLibrary *)(local_dc + 0x58) != _pNetwork[0x98c])) {
      CTString::CTString((CTString *)&local_d8);
      local_4 = 0;
      pcVar10 = Translate(s_ETRSServer_changed_levels_36236ea4,4);
      CTString::PrintF(this_02,(char *)&local_d8,pcVar10);
      SendDisconnectMessage(this,param_1,local_d8,0);
      local_4 = 0xffffffff;
      StringFree(local_d8);
      ExceptionList = local_c;
      return;
    }
    CPlayerCharacter::CPlayerCharacter(local_54);
    local_4 = 1;
    FUN_361355f0(param_2,local_54);
    puVar3 = &DAT_362ccff0;
    pCVar7 = CPlayerCharacter::GetName(local_54);
    iVar9 = FUN_360f2f30(pCVar7,puVar3);
    pCVar2 = _pNetwork;
    if ((iVar9 == 0) == (DAT_362cceac == 0)) {
      if (*(int *)(*(int *)(_pNetwork + 0x24) + 0x84) == 1) {
        pCVar4 = *(CPlayerTarget **)(this + 0x10);
      }
      else {
        pCVar4 = FirstInactivePlayer(this);
      }
      if (pCVar4 != (CPlayerTarget *)0x0) {
        local_d8 = *(char **)(pCVar4 + 0xa0);
        local_d4 = *(float *)(pCVar2 + 0x1314);
        pCVar2 = pCVar2 + 0x1314;
        *(int *)pCVar2 = *(int *)pCVar2 + 1;
        local_e0 = *(char **)(_pNetwork + 0x1314);
        *(int *)(_pNetwork + 0x1314) = *(int *)(_pNetwork + 0x1314) + 1;
        local_dc = *(char **)(_pNetwork + 0x1314);
        *(int *)(_pNetwork + 0x1314) = *(int *)(_pNetwork + 0x1314) + 1;
        local_14 = local_d8;
        CPlayerCharacter::operator=((CPlayerCharacter *)(pCVar4 + 0xb8),local_54);
        CNetworkMessage::CNetworkMessage(local_78);
        local_4._0_1_ = 2;
        CEntityMessage::WriteAddPlayer
                  (local_7c,(ulong *)&local_d4,(long *)&local_d8,local_54,(ulong *)&local_e0,
                   (ulong *)&local_dc,param_1);
        SendMessageA(this,local_7c);
        CSessionState::AddPlayer(*(CSessionState **)(_pNetwork + 0x24),(long)local_d8,1);
        _DAT_362ccea8 = 0;
        CNetworkMessage::CNetworkMessage(local_c4,0xf);
        local_4._0_1_ = 3;
        CNetworkMessage::Write(local_c4,_pNetwork + 0x98c,1);
        CNetworkMessage::Write(local_c4,&local_d8,4);
        CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,param_1,local_c4);
        local_4._0_1_ = 2;
        CNetworkMessage::~CNetworkMessage(local_c4);
        local_4 = CONCAT31(local_4._1_3_,1);
        CNetworkMessage::~CNetworkMessage(local_78);
        goto LAB_3610d30b;
      }
      iVar9 = 0;
      pcVar10 = s_ETRSToo_many_players_in_session__36236ee4;
    }
    else {
      iVar9 = 1;
      pcVar10 = s_ETRSYou_are_banned_from_this_ser_36236ec0;
    }
    pcVar10 = Translate(pcVar10,4);
    SendDisconnectMessage(this,param_1,pcVar10,iVar9);
    goto LAB_3610d30b;
  case 0x10:
    CNetworkMessage::Read(param_2,&local_d4,4);
    pCVar1 = this + 0x24;
    if (((*(int *)(this + 0x24) == 0) != (local_d4 == 0.0)) &&
       ((iVar9 = CCommunicationInterface::Server_IsClientLocal(&_cmiComm,param_1), iVar9 != 0 ||
        (DAT_362a6034 != 0)))) {
      CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_e0);
      local_4 = 6;
      if (local_d4 == 0.0) {
        iVar9 = *(int *)(this + 0x18);
        *(int *)pCVar1 = 0;
        *(int *)(this + 0x18) = iVar9 + 1;
        FUN_361066d0(local_c4,0x19,iVar9 + 1);
        local_4._0_1_ = 7;
        CNetworkMessage::Write(local_c4,pCVar1,4);
        CNetworkMessage::operator<<(local_c4,(CTString *)&local_e0);
        FUN_361070d0((void *)(*(int *)(this + 8) + 0x30),local_c4);
        *(undefined4 *)(this + 0x2c) = 0;
        *(undefined4 *)(this + 0x28) = 0;
        CEntityMessage::WritePause
                  ((CEntityMessage *)(this + 0x38cc),(int *)pCVar1,(CTString *)&local_e0);
        SendMessageA(this,(CEntityMessage *)(this + 0x38cc));
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_36107200(local_c4);
      }
      else {
        *(undefined4 *)(this + 0x28) = 1;
        *(undefined4 *)(this + 0x2c) = 1;
        CTString::operator=((CTString *)(this + 0x30),(CTString *)&local_e0);
      }
      local_4 = 0xffffffff;
      StringFree(local_e0);
    }
    break;
  case 0x11:
    CPlayerCharacter::CPlayerCharacter(local_54);
    local_4 = 4;
    CNetworkMessage::Read(param_2,&local_dc,4);
    FUN_361355f0(param_2,local_54);
    pcVar10 = local_dc;
    if (((-1 < (int)local_dc) &&
        (iVar9 = FUN_360a5a70((undefined4 *)(this + 0xc)), (int)pcVar10 <= iVar9)) &&
       (iVar9 = (int)pcVar10 * 0x100, *(int *)(iVar9 + 0xa4 + *(int *)(this + 0x10)) == param_1)) {
      this_00 = (CPlayerCharacter *)(iVar9 + *(int *)(this + 0x10) + 0xb8);
      iVar9 = CPlayerCharacter::operator==(this_00,local_54);
      if (iVar9 != 0) {
        iVar9 = *(int *)(this + 0x18);
        *(int *)(this + 0x18) = iVar9 + 1;
        FUN_361066d0(local_c4,0x1a,iVar9 + 1);
        local_4._0_1_ = 5;
        CNetworkMessage::Write(local_c4,&local_dc,4);
        FUN_361355a0(local_c4,local_54);
        CPlayerCharacter::operator=(this_00,local_54);
        FUN_361070d0((void *)(*(int *)(this + 8) + 0x30),local_c4);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_36107200(local_c4);
      }
    }
LAB_3610d30b:
    local_4 = 0xffffffff;
    CPlayerCharacter::~CPlayerCharacter(local_54);
    break;
  case 0x13:
    local_d4 = (float)(*(int *)(this + 8) + iVar9);
    local_e0 = (char *)0x0;
    do {
      local_dc = (char *)0x0;
      CNetworkMessage::ReadBits(param_2,&local_dc,1);
      if (local_dc != (char *)0x0) {
        local_d8 = (char *)0x0;
        CNetworkMessage::ReadBits(param_2,&local_d8,4);
        this_03 = (void *)((int)local_d8 * 0x100 + *(int *)(this + 0x10));
        if (*(int *)((int)local_d8 * 0x100 + 0xa4 + *(int *)(this + 0x10)) != param_1) {
          if (DAT_362ccee4 == 0) {
            ExceptionList = local_c;
            return;
          }
          pcVar10 = Translate(s_ETRSPlayer_actions_received_with_36236f08,4);
          CPrintF(pcVar10);
          ExceptionList = local_c;
          return;
        }
        puVar3 = (undefined4 *)((int)this_03 + 0xa8);
        *puVar3 = 0;
        CNetworkMessage::ReadBits(param_2,puVar3,10);
        FUN_36109260(this_03,param_2,*(int *)((int)local_d4 + 0x3c));
      }
      local_e0 = local_e0 + 1;
    } while ((int)local_e0 < 4);
    break;
  case 0x1c:
    CNetworkMessage::Read(param_2,&local_dc,4);
    CNetworkMessage::Read(param_2,&local_d4,4);
    ResendGameStreamBlocks(this,param_1,(long)local_dc,(long)local_d4);
    break;
  case 0x1d:
    CTString::CTString((CTString *)&local_dc);
    local_4 = 8;
    CNetworkMessage::Read(param_2,&local_e0,4);
    CNetworkMessage::Read(param_2,&local_d8,4);
    CNetworkMessage::operator>>(param_2,(CTString *)&local_dc);
    uVar5 = MaskOfPlayersOnClient(this,param_1);
    local_e0 = (char *)((uint)local_e0 & uVar5);
    if (local_e0 == (char *)0x0) {
      local_d8 = (char *)0xffffffff;
    }
    CNetworkMessage::CNetworkMessage(local_c4,0x1e);
    local_4._0_1_ = 9;
    CNetworkMessage::Write(local_c4,&local_e0,4);
    if (local_e0 == (char *)0x0) {
      CTString::CTString((CTString *)&local_e0);
      local_4 = CONCAT31(local_4._1_3_,10);
      if (param_1 == 0) {
        pcVar10 = Translate(s_ETRSServer_36236f40,4);
        CTString::operator=((CTString *)&local_e0,pcVar10);
      }
      else {
        pcVar10 = Translate(s_ETRSClient__d_36236f4c,4);
        CTString::PrintF((CTString *)&local_e0,(char *)&local_e0,pcVar10,param_1);
      }
      CNetworkMessage::operator<<(local_c4,(CTString *)&local_e0);
      local_4._0_1_ = 9;
      StringFree(local_e0);
    }
    CNetworkMessage::operator<<(local_c4,(CTString *)&local_dc);
    iVar11 = 0;
    iVar9 = FUN_360a59d0((undefined4 *)(this + 4));
    if (0 < iVar9) {
      iVar9 = 0;
      do {
        if (((iVar9 < 1) ||
            (iVar6 = FUN_36109550((undefined4 *)(*(int *)(this + 8) + iVar9)), iVar6 != 0)) &&
           ((local_d8 == (char *)0xffffffff ||
            (uVar5 = MaskOfPlayersOnClient(this,iVar11), ((uint)local_d8 & uVar5) != 0)))) {
          CMessageDispatcher::SendToClient((CMessageDispatcher *)_pNetwork,iVar11,local_c4);
        }
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x60;
        iVar6 = FUN_360a59d0((undefined4 *)(this + 4));
      } while (iVar11 < iVar6);
    }
    local_4 = CONCAT31(local_4._1_3_,8);
    CNetworkMessage::~CNetworkMessage(local_c4);
    local_4 = 0xffffffff;
    StringFree(local_dc);
    break;
  case 0x1f:
    FUN_36109970(param_2,(void *)(iVar9 + 0x3c + *(int *)(this + 8)));
    break;
  case 0x20:
    CTString::CTString((CTString *)&local_d8);
    local_4 = 0xd;
    CTString::CTString((CTString *)&local_e0);
    pCVar7 = (CTString *)&local_e0;
    local_4._0_1_ = 0xe;
    this_01 = CNetworkMessage::operator>>(param_2,(CTString *)&local_d8);
    CNetworkMessage::operator>>(this_01,pCVar7);
    iVar9 = CTString::operator==((CTString *)&DAT_362cd004,&DAT_36236fb7);
    if (iVar9 == 0) {
      iVar9 = CTString::operator!=((CTString *)&DAT_362cd004,(CTString *)&local_d8);
      if (iVar9 != 0) {
        puVar3 = (undefined4 *)
                 CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_90);
        uVar12 = *puVar3;
        local_4._0_1_ = 0x12;
        pcVar10 = Translate(s_ETRSServer__Client___s___Wrong_p_36237030,4);
        CPrintF(pcVar10,uVar12);
        local_4._0_1_ = 0xe;
        StringFree(local_90);
        iVar9 = 0;
        pcVar10 = Translate(s_ETRSWrong_admin_password__The_at_36237074,4);
        SendDisconnectMessage(this,param_1,pcVar10,iVar9);
        local_4 = CONCAT31(local_4._1_3_,0xd);
        StringFree(local_e0);
        local_4 = 0xffffffff;
        StringFree(local_d8);
        ExceptionList = local_c;
        return;
      }
      puVar3 = (undefined4 *)
               CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_88);
      uVar12 = *puVar3;
      local_4._0_1_ = 0x13;
      pcVar10 = local_e0;
      pcVar8 = Translate(s_ETRSServer__Client___s___Admin_c_362370a8,4);
      CPrintF(pcVar8,uVar12,pcVar10);
      local_4._0_1_ = 0xe;
      StringFree(local_88);
      DAT_362b8ee8 = 1;
      CTString::operator=((CTString *)&DAT_362b8ef0,&DAT_362370d0);
      local_d0 = StringDuplicate(&DAT_362370d4);
      local_4._0_1_ = 0x14;
      pCVar7 = (CTString *)CTString::operator+((CTString *)&local_e0,(CTString *)&local_94);
      local_4._0_1_ = 0x15;
      CShell::Execute(_pShell,pCVar7);
      local_4._0_1_ = 0x14;
      StringFree(local_94);
      local_4._0_1_ = 0xe;
      StringFree(local_d0);
      local_c8 = StringDuplicate(&DAT_362370dc);
      local_4._0_1_ = 0x16;
      local_cc = StringDuplicate(&DAT_362370d8);
      local_4._0_1_ = 0x17;
      pCVar7 = (CTString *)CTString::operator+((CTString *)&local_cc,(CTString *)local_84);
      local_4._0_1_ = 0x18;
      pCVar7 = (CTString *)CTString::operator+(pCVar7,(CTString *)&local_9c);
      local_4._0_1_ = 0x19;
      CTString::operator+(pCVar7,(CTString *)&local_dc);
      local_4._0_1_ = 0x1e;
      StringFree(local_9c);
      local_4._0_1_ = 0x1d;
      StringFree(local_84[0]);
      local_4._0_1_ = 0x1c;
      StringFree(local_cc);
      local_4._0_1_ = 0x1b;
      StringFree(local_c8);
      FUN_36109590(&local_dc);
      DAT_362b8ee8 = 0;
      CTString::operator=((CTString *)&DAT_362b8ef0,&DAT_362370de);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      StringFree(local_dc);
    }
    else {
      CNetworkMessage::CNetworkMessage(local_c4,0x21);
      local_4._0_1_ = 0xf;
      pcVar10 = Translate(s_ETRSRemote_administration_not_al_36236fb8,4);
      pCVar7 = (CTString *)CTString::CTString((CTString *)&local_a0,pcVar10);
      local_4._0_1_ = 0x10;
      CNetworkMessage::operator<<(local_c4,pCVar7);
      local_4._0_1_ = 0xf;
      StringFree(local_a0);
      puVar3 = (undefined4 *)
               CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&local_98);
      uVar12 = *puVar3;
      local_4._0_1_ = 0x11;
      pcVar10 = Translate(s_ETRSServer__Client___s___Tried_t_36236ff0,4);
      CPrintF(pcVar10,uVar12);
      local_4._0_1_ = 0xf;
      StringFree(local_98);
      CMessageDispatcher::SendToClientReliable((CMessageDispatcher *)_pNetwork,param_1,local_c4);
      local_4 = CONCAT31(local_4._1_3_,0xe);
      CNetworkMessage::~CNetworkMessage(local_c4);
    }
    local_4 = CONCAT31(local_4._1_3_,0xd);
    StringFree(local_e0);
    local_4 = 0xffffffff;
    StringFree(local_d8);
    break;
  case 0x30:
    *(undefined4 *)(iVar9 + 0x18 + *(int *)(this + 8)) = 2;
    break;
  case 0x32:
    CNetworkMessage::Read(param_2,&local_d4,4);
    ReceiveAcknowledge(this,param_1,local_d4);
  }
  ExceptionList = local_c;
  return;
}

