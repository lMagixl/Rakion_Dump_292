
/* public: void __thiscall CNetworkLibrary::StartDemoPlay_t(class CTFileName const &) */

void __thiscall CNetworkLibrary::StartDemoPlay_t(CNetworkLibrary *this,CTFileName *param_1)

{
  CTFileStream *this_00;
  CWorld *this_01;
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  CNetworkLibrary *pCVar4;
  CTSingleLock local_3c [12];
  CTSingleLock local_30 [15];
  undefined4 local_21;
  undefined1 local_1d;
  char *local_1c;
  CNetworkLibrary *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xfa870  3657  ?StartDemoPlay_t@CNetworkLibrary@@QAEXABVCTFileName@@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_362170d0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  ExceptionList = &local_10;
  local_18 = this;
  CSoundLibrary::Flush(_pSound);
  StartProgress();
  CTSingleLock::CTSingleLock(local_3c,(CTCriticalSection *)(_pTimer + 0x1c),1);
  local_8 = 0;
  CTSingleLock::CTSingleLock(local_30,(CTCriticalSection *)(this + 0x1c),1);
  *(undefined4 *)(this + 0x870) = 0;
  this_00 = (CTFileStream *)(this + 0x8f4);
  local_8._0_1_ = 1;
  CTFileStream::Open_t(this_00,param_1,1);
  *(undefined4 *)(this + 0x8ec) = 1;
  *(undefined4 *)(this + 0x8f0) = 0;
  param_1 = (CTFileName *)StringDuplicate(s_Demo__36234da8);
  local_8._0_1_ = 2;
  CTString::operator+((CTString *)&param_1,(CTString *)&local_1c);
  local_8._0_1_ = 4;
  StringFree((char *)param_1);
  pcVar1 = StringDuplicate(local_1c);
  StringFree(*(char **)(this + 0x30));
  *(char **)(this + 0x30) = pcVar1;
  *(undefined4 *)(this + 0x14) = 0;
  local_1d = DAT_36234db4;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_21 = DAT_36234db0;
  CTStream::ExpectID_t((CTStream *)this_00,(CChunkID *)&local_21);
  ::operator>>((CTStream *)this_00,(CTFileName *)(this + 0x3c));
  *(undefined4 *)(*(int *)(this + 0x24) + 0x58) = **(undefined4 **)(this + 0x908);
  *(int *)(this + 0x908) = *(int *)(this + 0x908) + 4;
  puVar2 = *(undefined4 **)(this + 0x908);
  pCVar4 = _pNetwork + 0x9ac;
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar4 = pCVar4 + 4;
  }
  this_01 = (CWorld *)(this + 0x11e4);
  *(int *)(this + 0x908) = *(int *)(this + 0x908) + 0x800;
  CWorld::Load_t(this_01,(CTFileName *)(this + 0x3c));
  CWorld::FilterEntitiesBySpawnFlags(this_01,*(ulong *)(*(int *)(this + 0x24) + 0x58));
  CWorld::AdjustLateTimers(this_01,*(float *)(*(int *)(this + 0x24) + 0x2c));
  *(undefined4 *)(_pNetwork + 0x1314) = 0x10000001;
  CSessionState::Read_t(*(CSessionState **)(this + 0x24),(CTStream *)(this + 0x8f4),1);
  local_21 = DAT_36234db8;
  local_1d = DAT_36234dbc;
  CTStream::ExpectID_t((CTStream *)(_pNetwork + 0x8f4),(CChunkID *)&local_21);
  *(undefined4 *)(this + 0x978) = **(undefined4 **)(this + 0x908);
  *(int *)(this + 0x908) = *(int *)(this + 0x908) + 4;
  *(undefined4 *)(this + 0x1354) = *(undefined4 *)(this + 0x978);
  local_8 = 4;
  if (DAT_362c53b8 != 0) {
    CBrushArchive::CacheAllShadowmaps(*(CBrushArchive **)(this + 0x1218));
  }
  FUN_360f3800();
  DAT_362b8cfc = 1;
  local_18 = (CNetworkLibrary *)StringDuplicate(s_pwoCurrentWorld_36234dc0);
  local_8._0_1_ = 7;
  CShell::SetINDEX(_pShell,(CTString *)&local_18,(long)this_01);
  local_8._0_1_ = 4;
  StringFree((char *)local_18);
  puVar2 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
  *(undefined4 *)(this + 0x968) = *puVar2;
  *(undefined4 *)(this + 0x96c) = puVar2[1];
  MainLoop(this);
  StopProgress();
  local_8._0_1_ = 1;
  StringFree(local_1c);
  local_8 = (uint)local_8._1_3_ << 8;
  CTSingleLock::~CTSingleLock(local_30);
  local_8 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_3c);
  ExceptionList = local_10;
  return;
}

