
/* public: void __thiscall CNetworkLibrary::ChangeLevel_client_internal_t(void) */

void __thiscall CNetworkLibrary::ChangeLevel_client_internal_t(CNetworkLibrary *this)

{
  CWorld *this_00;
  char *pcVar1;
  CNetworkLibrary *this_01;
  undefined4 *puVar2;
  int iVar3;
  char *local_110;
  undefined **local_10c;
  undefined4 local_108;
  char *local_104;
  undefined4 local_100;
  int local_fc;
  undefined **local_f4 [2];
  undefined4 local_ec;
  EPreLevelChange local_e8 [8];
  undefined4 local_e0;
  CNetworkMessage local_dc [24];
  CTMemoryStream local_c4 [20];
  undefined1 *local_b0;
  CTMemoryStream local_68 [92];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf9740  1155  ?ChangeLevel_client_internal_t@CNetworkLibrary@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216fbc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSoundLibrary::Flush(_pSound);
  StartProgress();
  EPreLevelChange::EPreLevelChange(local_e8);
  local_e0 = *(undefined4 *)(_pNetwork + 0x988);
  local_4 = 0;
  CSessionState::SendLevelChangeNotification
            (*(CSessionState **)(this + 0x24),(CEntityEvent *)local_e8);
  CEntity::HandleSentEvents();
  FUN_360f2e40(&local_108);
  local_4._0_1_ = 1;
  local_fc = GetLocalPause(_pNetwork);
  SetLocalPause(this_01,1);
  this_00 = (CWorld *)(this + 0x11e4);
  CWorld::Clear(this_00);
  FUN_360f3800();
  InitCRCGather(this);
  local_104 = StringDuplicate(*(char **)(this + 0x3c));
  local_100 = *(undefined4 *)(this + 0x40);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar3 = 0;
  do {
    puVar2 = (undefined4 *)(*(int *)(*(int *)(this + 0x18) + 0x10) + iVar3);
    if (*(int *)(*(int *)(*(int *)(this + 0x18) + 0x10) + iVar3) != 0) {
      puVar2[1] = 0;
      FUN_361090d0(puVar2);
    }
    iVar3 = iVar3 + 0x100;
  } while (iVar3 < 0x2000);
  *(undefined4 *)(_pTimer + 0xc) = 0;
  CWorld::Load_t(this_00,(CTFileName *)(this + 0x97c));
  CWorld::FilterEntitiesBySpawnFlags(this_00,*(ulong *)(*(int *)(this + 0x24) + 0x58));
  pcVar1 = StringDuplicate(*(char **)(this + 0x97c));
  StringFree(*(char **)(this + 0x3c));
  *(char **)(this + 0x3c) = pcVar1;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x980);
  local_110 = StringDuplicate(s_pwoCurrentWorld_36234ecc);
  local_4._0_1_ = 3;
  CShell::SetINDEX(_pShell,(CTString *)&local_110,(long)this_00);
  local_4._0_1_ = 2;
  StringFree(local_110);
  CWorld::AdjustLateTimers(this_00,*(float *)(*(int *)(this + 0x24) + 0x2c));
  *(undefined4 *)(*(int *)(this + 0x24) + 0x78) = 1;
  FUN_360f3800();
  DAT_362b8cfc = 1;
  FinishCRCGather(this);
  pcVar1 = Translate(s_ETRSSending_full_game_state_requ_36234edc,4);
  CPrintF(pcVar1);
  CNetworkMessage::CNetworkMessage(local_dc,9);
  local_4._0_1_ = 4;
  CMessageDispatcher::SendToServerReliable((CMessageDispatcher *)_pNetwork,local_dc);
  CCommunicationInterface::Client_Update(&_cmiComm);
  CCommunicationInterface::Client_Update(&_cmiComm);
  CCommunicationInterface::Client_Update(&_cmiComm);
  CCommunicationInterface::Client_Update(&_cmiComm);
  CCommunicationInterface::Client_Update(&_cmiComm);
  CTMemoryStream::CTMemoryStream(local_68);
  local_4._0_1_ = 5;
  local_110 = StringDuplicate(&DAT_36234f04);
  local_4._0_1_ = 6;
  CSessionState::WaitStream_t
            (*(CSessionState **)(_pNetwork + 0x24),local_68,(CTString *)&local_110,10);
  local_4._0_1_ = 5;
  StringFree(local_110);
  CTMemoryStream::CTMemoryStream(local_c4);
  local_4._0_1_ = 7;
  local_10c = &PTR_FUN_362350b0;
  FUN_360fe350(&local_10c,(long)local_68);
  *(undefined1 *)(*(int *)(this + 0x24) + 0x80) = *local_b0;
  local_b0 = local_b0 + 1;
  if (*(int *)(_pNetwork + 0x14) == 0) {
    *(undefined4 *)(_pNetwork + 0x1314) = 0x10000001;
  }
  CSessionState::Read_t(*(CSessionState **)(this + 0x24),(CTStream *)local_c4,1);
  DAT_362cce88 = 3;
  EPostLevelChange::EPostLevelChange((EPostLevelChange *)local_f4);
  local_ec = *(undefined4 *)(_pNetwork + 0x988);
  local_4._0_1_ = 8;
  CSessionState::SendLevelChangeNotification
            (*(CSessionState **)(this + 0x24),(CEntityEvent *)local_f4);
  CEntity::HandleSentEvents();
  DAT_362cce88 = 0;
  SetLocalPause(_pNetwork,local_fc);
  StopProgress();
  puVar2 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
  iVar3 = *(int *)(this + 0x24);
  *(undefined4 *)(iVar3 + 0x48) = *puVar2;
  *(undefined4 *)(iVar3 + 0x4c) = puVar2[1];
  CCommunicationInterface::Client_Update(&_cmiComm);
  local_f4[0] = &CEntityEvent::_vftable_;
  local_4._0_1_ = 5;
  CTMemoryStream::~CTMemoryStream(local_c4);
  local_4._0_1_ = 4;
  CTMemoryStream::~CTMemoryStream(local_68);
  local_4._0_1_ = 2;
  CNetworkMessage::~CNetworkMessage(local_dc);
  local_4 = CONCAT31(local_4._1_3_,1);
  StringFree(local_104);
  FUN_360f2e50(&local_108);
  ExceptionList = local_c;
  return;
}

