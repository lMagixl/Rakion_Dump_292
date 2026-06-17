
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNetworkLibrary::JoinSession_t(class CNetworkSession const &,long,class
   CTFileName) */

void __thiscall
CNetworkLibrary::JoinSession_t
          (CNetworkLibrary *this,char *param_1,undefined4 param_2,char *param_4,undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  CNetworkLibrary *pCVar3;
  CTSingleLock local_38 [12];
  CTSingleLock local_2c [12];
  char *local_20;
  CNetworkLibrary *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfa5c0  2523
                       ?JoinSession_t@CNetworkLibrary@@QAEXABVCNetworkSession@@JVCTFileName@@@Z */
  puStack_c = &LAB_3621709e;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = this;
  CSoundLibrary::Flush(_pSound);
  StartProgress();
  iVar2 = (int)param_1;
  pcVar1 = Translate(s_ETRSJoining_session_at____s__d__36234d58,4);
  CPrintF(pcVar1);
  *(undefined4 *)(this + 0x870) = 0;
  CTSingleLock::CTSingleLock(local_38,(CTCriticalSection *)(_pTimer + 0x1c),1);
  local_8._0_1_ = 1;
  CTSingleLock::CTSingleLock(local_2c,(CTCriticalSection *)(this + 0x1c),1);
  FUN_360f2e40(&local_18);
  local_8._0_1_ = 3;
  InitCRCGather(this);
  param_1 = StringDuplicate(*(char **)(iVar2 + 0x10));
  StringFree(*(char **)(this + 0x30));
  *(char **)(this + 0x30) = param_1;
  param_1 = StringDuplicate(*(char **)(iVar2 + 8));
  StringFree(*(char **)(this + 0x34));
  *(char **)(this + 0x34) = param_1;
  _DAT_362a608c = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(this + 0x38) = _DAT_362a608c;
  pcVar1 = StringDuplicate(&DAT_36234d79);
  local_8._0_1_ = 4;
  local_20 = pcVar1;
  param_1 = StringDuplicate(pcVar1);
  StringFree(*(char **)(this + 0x97c));
  *(char **)(this + 0x97c) = param_1;
  *(undefined4 *)(this + 0x980) = 0;
  local_8._0_1_ = 3;
  StringFree(pcVar1);
  pcVar1 = StringDuplicate(&DAT_36234d7a);
  local_8._0_1_ = 5;
  local_20 = pcVar1;
  param_1 = StringDuplicate(pcVar1);
  StringFree(*(char **)(this + 0x3c));
  *(char **)(this + 0x3c) = param_1;
  *(undefined4 *)(this + 0x40) = 0;
  local_8._0_1_ = 3;
  StringFree(pcVar1);
  pCVar3 = this + 0x9ac;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = 0;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x14) = 0;
  pcVar1 = Translate(s_ETRSconnecting_36234d7c,4);
  param_1 = StringDuplicate(pcVar1);
  local_8._0_1_ = 6;
  SetProgressDescription((CTString *)&param_1);
  local_8._0_1_ = 3;
  StringFree(param_1);
  CallProgressHook_t(0.0);
  local_8 = CONCAT31(local_8._1_3_,7);
  param_1 = &stack0xffffffb4;
  StringDuplicate(param_4);
  CSessionState::Start_t(*(CSessionState **)(this + 0x24),param_2);
  local_8 = 3;
  param_1 = StringDuplicate(s_pwoCurrentWorld_36234d8c);
  local_8._0_1_ = 9;
  CShell::SetINDEX(_pShell,(CTString *)&param_1,(long)(this + 0x11e4));
  local_8 = CONCAT31(local_8._1_3_,3);
  StringFree(param_1);
  if (DAT_362c53b8 != 0) {
    CBrushArchive::CacheAllShadowmaps(*(CBrushArchive **)(this + 0x1218));
  }
  FUN_360f3800();
  DAT_362b8cfc = 1;
  MainLoop(this);
  CPrintF(s_joined_36234d9c);
  StopProgress();
  FUN_360f2e50(&local_18);
  local_8._0_1_ = 1;
  CTSingleLock::~CTSingleLock(local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  CTSingleLock::~CTSingleLock(local_38);
  local_8 = 0xffffffff;
  StringFree(param_4);
  ExceptionList = local_10;
  return;
}

