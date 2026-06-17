
/* public: void __thiscall CSessionState::Start_t(long,class CTFileName) */

void __thiscall CSessionState::Start_t(CSessionState *this,undefined4 param_1,char *param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  CSessionState *this_00;
  CNetworkLibrary *pCVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1138e0  3672  ?Start_t@CSessionState@@QAEXJVCTFileName@@@Z */
  puStack_c = &LAB_362183f8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_36106fb0((undefined4 *)(this + 8));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  pcVar1 = StringDuplicate(&DAT_3623738f);
  StringFree(*(char **)(this + 0x7c));
  *(char **)(this + 0x7c) = pcVar1;
  *(undefined4 *)(this + 0x84) = 1;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  pCVar3 = _pNetwork + 0x9a8;
  pcVar1 = StringDuplicate(&DAT_36237390);
  StringFree(*(char **)pCVar3);
  *(char **)pCVar3 = pcVar1;
  *(undefined4 *)(this + 0x1d00) = 0xbf800000;
  *(undefined4 *)(this + 0x1d04) = 0;
  ResetRND(this);
  ForgetOldLevels(this_00);
  if (*(int *)(_pNetwork + 0x14) == 0) {
    local_8 = CONCAT31(local_8._1_3_,3);
    StringDuplicate(param_3);
    Start_AtClient_t(this,param_1);
  }
  else {
    CCommunicationInterface::Client_Init_t(&_cmiComm,0);
    local_8 = CONCAT31(local_8._1_3_,1);
    Start_AtServer_t(this);
  }
  puVar2 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
  *(undefined4 *)(this + 0x48) = *puVar2;
  *(undefined4 *)(this + 0x4c) = puVar2[1];
  local_8 = 0xffffffff;
  StringFree(param_3);
  ExceptionList = local_10;
  return;
}

