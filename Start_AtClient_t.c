
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSessionState::Start_AtClient_t(long,class CTFileName) */

void __thiscall
CSessionState::Start_AtClient_t
          (CSessionState *this,undefined4 param_1,char *param_3,undefined4 param_4)

{
  CNetworkLibrary *pCVar1;
  char *pcVar2;
  CNetworkLibrary *pCVar3;
  CTMemoryStream local_78 [92];
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x1136d0  3668  ?Start_AtClient_t@CSessionState@@QAEXJVCTFileName@@@Z */
  puStack_c = &LAB_362183e6;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  ExceptionList = &local_10;
  *(undefined8 *)(this + 0x1d08) = _DAT_36227d30;
  local_8 = 0;
  *(undefined8 *)(this + 0x1d10) = _DAT_36227d30;
  *(undefined8 *)(this + 0x1d18) = _DAT_36227d98;
  FUN_36109900((undefined4 *)(this + 0x2970));
  *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x58) = 0x40002;
  pcVar2 = StringDuplicate(&DAT_36237436);
  pCVar1 = _pNetwork;
  local_8._0_1_ = 1;
  pCVar3 = _pNetwork + 0x97c;
  local_1c = pcVar2;
  local_18 = StringDuplicate(pcVar2);
  StringFree(*(char **)pCVar3);
  *(char **)pCVar3 = local_18;
  *(undefined4 *)(pCVar1 + 0x980) = 0;
  local_8._0_1_ = 0;
  StringFree(pcVar2);
  FUN_360f3800();
  *(undefined4 *)(_pTimer + 0xc) = 0;
  pCVar1 = _pNetwork;
  local_8 = CONCAT31(local_8._1_3_,2);
  pCVar3 = _pNetwork + 0x3c;
  pcVar2 = StringDuplicate(param_3);
  StringFree(*(char **)pCVar3);
  *(undefined4 *)(pCVar1 + 0x40) = param_4;
  *(char **)pCVar3 = pcVar2;
  CWorld::Load_t((CWorld *)(_pNetwork + 0x11e4),(CTFileName *)(_pNetwork + 0x3c));
  CWorld::FilterEntitiesBySpawnFlags
            ((CWorld *)(_pNetwork + 0x11e4),*(ulong *)(*(int *)(_pNetwork + 0x24) + 0x58));
  local_8 = 0;
  local_18 = StringDuplicate(s_pwoCurrentWorld_36237438);
  local_8._0_1_ = 4;
  CShell::SetINDEX(_pShell,(CTString *)&local_18,(long)(_pNetwork + 0x11e4));
  local_8._0_1_ = 0;
  StringFree(local_18);
  ResetRND(*(CSessionState **)(_pNetwork + 0x24));
  WarmUpWorld(*(CSessionState **)(_pNetwork + 0x24));
  pcVar2 = Translate(s_ETRSSending_full_game_state_requ_36237448,4);
  CPrintF(pcVar2);
  CTMemoryStream::CTMemoryStream(local_78);
  local_8._0_1_ = 5;
  if (*(int *)(_pNetwork + 0x14) == 0) {
    *(undefined4 *)(_pNetwork + 0x1314) = 0x10000001;
  }
  Read_t(this,(CTStream *)local_78,1);
  local_8 = (uint)local_8._1_3_ << 8;
  CTMemoryStream::~CTMemoryStream(local_78);
  local_8 = 0xffffffff;
  StringFree(param_3);
  ExceptionList = local_10;
  return;
}

