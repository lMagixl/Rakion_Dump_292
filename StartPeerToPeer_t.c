
/* public: void __thiscall CNetworkLibrary::StartPeerToPeer_t(class CTString const &,class
   CTFileName const &,unsigned long,long,int,void *) */

void __thiscall
CNetworkLibrary::StartPeerToPeer_t
          (CNetworkLibrary *this,CTString *param_1,CTFileName *param_2,ulong param_3,long param_4,
          int param_5,void *param_6)

{
  CWorld *this_00;
  CNetworkLibrary CVar1;
  CTString *pCVar2;
  CTFileName *pCVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  CNetworkLibrary *pCVar8;
  CTSingleLock local_30 [12];
  CTSingleLock local_24 [12];
  CNetworkLibrary *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xf8fe0  3663
                       ?StartPeerToPeer_t@CNetworkLibrary@@QAEXABVCTString@@ABVCTFileName@@KJHPAX@Z
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36216f15;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  ExceptionList = &local_10;
  local_18 = this;
  CSoundLibrary::Flush(_pSound);
  StartProgress();
  pCVar2 = param_1;
  pcVar5 = Translate(s_ETRSStarting_session____s__36234be0,4);
  CPrintF(pcVar5);
  pcVar5 = Translate(s_ETRS_level____s__36234bfc,4);
  CPrintF(pcVar5);
  uVar4 = param_3;
  pcVar5 = Translate(s_ETRS_spawnflags___08x_36234c10,4);
  CPrintF(pcVar5);
  pcVar5 = Translate(s_ETRS_max_players___d_36234c28,4);
  CPrintF(pcVar5);
  pcVar5 = Translate(s_ETRS_waiting___d_36234c40,4);
  CPrintF(pcVar5);
  FUN_360f2e40(&param_1);
  local_8 = 0;
  iVar6 = CCommunicationInterface::IsNetworkEnabled(&_cmiComm);
  if (iVar6 == 0) {
    pcVar5 = Translate(s_ETRS_network_is_off_36234c6c,4);
    CPrintF(pcVar5);
  }
  else {
    pcVar5 = Translate(s_ETRS_network_is_on_36234c54,4);
    CPrintF(pcVar5);
    FUN_360f3800();
    InitCRCGather(this);
  }
  CTSingleLock::CTSingleLock(local_30,(CTCriticalSection *)(_pTimer + 0x1c),1);
  local_8._0_1_ = 1;
  CTSingleLock::CTSingleLock(local_24,(CTCriticalSection *)(this + 0x1c),1);
  local_8._0_1_ = 2;
  pcVar5 = StringDuplicate(*(char **)pCVar2);
  StringFree(*(char **)(this + 0x30));
  pCVar3 = param_2;
  *(char **)(this + 0x30) = pcVar5;
  CVar1 = this[0x98c];
  this[0x98c] = (CNetworkLibrary)((char)CVar1 + '\x01');
  *(undefined4 *)(this + 0x870) = 0;
  *(char *)(*(int *)(this + 0x24) + 0x80) = (char)CVar1 + '\x01';
  *(ulong *)(*(int *)(this + 0x24) + 0x58) = uVar4;
  puVar7 = param_6;
  pCVar8 = this + 0x9ac;
  for (iVar6 = 0x200; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pCVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    pCVar8 = pCVar8 + 4;
  }
  *(undefined4 *)(this + 0x14) = 1;
  pcVar5 = StringDuplicate(*(char **)param_2);
  StringFree(*(char **)(this + 0x3c));
  *(char **)(this + 0x3c) = pcVar5;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(pCVar3 + 4);
  pcVar5 = StringDuplicate(&DAT_36234c82);
  local_8._0_1_ = 3;
  param_3 = (ulong)pcVar5;
  param_2 = (CTFileName *)StringDuplicate(pcVar5);
  StringFree(*(char **)(this + 0x97c));
  *(CTFileName **)(this + 0x97c) = param_2;
  *(undefined4 *)(this + 0x980) = 0;
  local_8._0_1_ = 2;
  StringFree(pcVar5);
  this_00 = (CWorld *)(this + 0x11e4);
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)(_pTimer + 0xc) = 0;
  CWorld::Load_t(this_00,pCVar3);
  CWorld::FilterEntitiesBySpawnFlags(this_00,*(ulong *)(*(int *)(this + 0x24) + 0x58));
  local_8 = 2;
  param_2 = (CTFileName *)StringDuplicate(s_pwoCurrentWorld_36234c84);
  local_8._0_1_ = 7;
  CShell::SetINDEX(_pShell,(CTString *)&param_2,(long)this_00);
  local_8._0_1_ = 2;
  StringFree((char *)param_2);
  pcVar5 = Translate(s_ETRSstarting_server_36234c94,4);
  param_2 = (CTFileName *)StringDuplicate(pcVar5);
  local_8._0_1_ = 8;
  SetProgressDescription((CTString *)&param_2);
  local_8._0_1_ = 2;
  StringFree((char *)param_2);
  CallProgressHook_t(0.0);
  local_8 = CONCAT31(local_8._1_3_,9);
  CServer::Start_t(*(CServer **)(this + 0x18));
  local_8 = 2;
  *(undefined4 *)(this + 0x14) = 1;
  CallProgressHook_t(1.0);
  pcVar5 = Translate(s_ETRSstarting_session_36234ca8,4);
  param_2 = (CTFileName *)StringDuplicate(pcVar5);
  local_8._0_1_ = 0xb;
  SetProgressDescription((CTString *)&param_2);
  local_8._0_1_ = 2;
  StringFree((char *)param_2);
  CallProgressHook_t(0.0);
  param_2 = (CTFileName *)&stack0xffffffb8;
  local_8 = CONCAT31(local_8._1_3_,0xc);
  StringDuplicate(*(char **)pCVar3);
  CSessionState::Start_t(*(CSessionState **)(this + 0x24),0xffffffff);
  local_8 = 2;
  CallProgressHook_t(1.0);
  *(long *)(*(int *)(this + 0x24) + 0x84) = param_4;
  *(int *)(*(int *)(this + 0x24) + 0x88) = param_5;
  *(undefined4 *)(*(int *)(this + 0x24) + 0x8c) = 0x3f800000;
  if (DAT_362c53b8 != 0) {
    CBrushArchive::CacheAllShadowmaps(*(CBrushArchive **)(this + 0x1218));
  }
  FUN_360f3800();
  DAT_362b8cfc = 1;
  FinishCRCGather(this);
  pcVar5 = Translate(s_ETRS_started__36234cc0,4);
  CPrintF(pcVar5);
  StopProgress();
  CSoundLibrary::Mute(_pSound,1.0);
  local_8._0_1_ = 1;
  CTSingleLock::~CTSingleLock(local_24);
  local_8 = (uint)local_8._1_3_ << 8;
  CTSingleLock::~CTSingleLock(local_30);
  FUN_360f2e50(&param_1);
  ExceptionList = local_10;
  return;
}

