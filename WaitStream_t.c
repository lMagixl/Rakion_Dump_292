
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSessionState::WaitStream_t(class CTMemoryStream &,class CTString const
   &,long) */

void __thiscall
CSessionState::WaitStream_t
          (CSessionState *this,CTMemoryStream *param_1,CTString *param_2,long param_3)

{
  float fVar1;
  CTString *pCVar2;
  CTString *pCVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  float local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  char *local_2c;
  char *local_28;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar2 = param_2;
                    /* 0x10ef00  3942
                       ?WaitStream_t@CSessionState@@QAEXAAVCTMemoryStream@@ABVCTString@@J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217ff6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pCVar3 = (CTString *)Translate(s_ETRSwaiting_for_36237470,4);
  pCVar3 = (CTString *)operator+((char *)&local_38,pCVar3);
  local_4 = 0;
  SetProgressDescription(pCVar3);
  local_4 = 0xffffffff;
  StringFree(local_38);
  CallProgressHook_t(0.0);
  local_38 = (char *)0x0;
  local_3c = 0.0;
  if (_DAT_3622376c < _DAT_362a6094 * _DAT_362379ec) {
    do {
      iVar4 = CCommunicationInterface::Client_Update(&_cmiComm);
      if (iVar4 == 0) break;
      CCommunicationInterface::Client_PeekSize_Reliable(&_cmiComm,&local_30,(long *)&local_34);
      if (local_30 == 0) {
        fVar1 = local_3c / (_DAT_362a6094 * _DAT_36230188);
      }
      else {
        if (local_34 != local_38) {
          local_38 = local_34;
          local_3c = 0.0;
        }
        pcVar5 = StringDuplicate(&DAT_36237494);
        local_4 = 1;
        pCVar3 = (CTString *)Translate(s_ETRSreceiving_36237484,4);
        pCVar3 = (CTString *)operator+((char *)&local_28,pCVar3);
        local_4._0_1_ = 2;
        pCVar3 = (CTString *)CTString::operator+(pCVar3,(CTString *)&local_2c);
        local_4._0_1_ = 3;
        SetProgressDescription(pCVar3);
        local_4._0_1_ = 2;
        StringFree(local_2c);
        local_4 = CONCAT31(local_4._1_3_,1);
        StringFree(local_28);
        local_4 = 0xffffffff;
        StringFree(pcVar5);
        fVar1 = (float)(int)local_34 / (float)local_30;
      }
      CallProgressHook_t(fVar1);
      iVar4 = CMessageDispatcher::ReceiveFromServerReliable((CMessageDispatcher *)_pNetwork,param_1)
      ;
      if (iVar4 != 0) {
        CTStream::SetPos_t((CTStream *)param_1,0);
        iVar4 = **(int **)(param_1 + 0x14);
        *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
        if (iVar4 == param_3) {
          CallProgressHook_t(1.0);
          ExceptionList = local_c;
          return;
        }
        if (iVar4 == 3) {
          CNetworkMessage::CNetworkMessage(local_24,0x30);
          local_4 = 4;
          CMessageDispatcher::SendToServerReliable((CMessageDispatcher *)_pNetwork,local_24);
          param_2 = (CTString *)StringDuplicate(&DAT_36222fa0);
          local_4._0_1_ = 5;
          ::operator>>((CTStream *)param_1,(CTString *)&param_2);
          pcVar5 = StringDuplicate((char *)param_2);
          StringFree(*(char **)(this + 0x7c));
          *(char **)(this + 0x7c) = pcVar5;
          pCVar3 = param_2;
          pcVar5 = Translate(s_ETRSDisconnected___s_36237498,4);
          ThrowF_t(pcVar5,pCVar3);
          local_4 = CONCAT31(local_4._1_3_,4);
          StringFree((char *)param_2);
          local_4 = 0xffffffff;
          CNetworkMessage::~CNetworkMessage(local_24);
        }
        else {
          uVar6 = *(undefined4 *)pCVar2;
          pcVar5 = Translate(s_ETRSInvalid_stream_while_waiting_362374b0,4);
          ThrowF_t(pcVar5,uVar6);
        }
        iVar4 = CCommunicationInterface::Client_IsConnected(&_cmiComm);
        if (iVar4 == 0) {
          pcVar5 = Translate(s_ETRSClient_disconnected_362374d8,4);
          ThrowF_t(pcVar5);
        }
      }
      Sleep(0x32);
      local_3c = local_3c + _DAT_36235abc;
    } while (local_3c < _DAT_362a6094 * _DAT_362379ec);
  }
  uVar6 = *(undefined4 *)pCVar2;
  pcVar5 = Translate(s_ETRSTimeout_while_waiting_for__s_362374f0,4);
  ThrowF_t(pcVar5,uVar6);
  ExceptionList = local_c;
  return;
}

