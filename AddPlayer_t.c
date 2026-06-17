
/* public: class CPlayerSource * __thiscall CNetworkLibrary::AddPlayer_t(class CPlayerCharacter &)
    */

CPlayerSource * __thiscall
CNetworkLibrary::AddPlayer_t(CNetworkLibrary *this,CPlayerCharacter *param_1)

{
  int iVar1;
  CPlayerCharacter *pCVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *local_20;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xf8b10  995
                       ?AddPlayer_t@CNetworkLibrary@@QAEPAVCPlayerSource@@AAVCPlayerCharacter@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216e8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  pCVar2 = param_1;
  local_4 = 0;
  CPlayerCharacter::GetNameForPrinting(param_1);
  local_4._0_1_ = 1;
  puVar3 = (undefined4 *)RemoveSpecialCodes((CTString *)&param_1);
  uVar7 = *puVar3;
  local_4._0_1_ = 2;
  pcVar4 = Translate(s_ETRSAdding_player____s__36234f1c,4);
  CPrintF(pcVar4,uVar7);
  local_4._0_1_ = 1;
  StringFree((char *)param_1);
  local_4._0_1_ = 0;
  StringFree(local_20);
  iVar6 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0 < *(int *)(this + 0x28)) {
    piVar5 = (int *)(*(int *)(this + 0x2c) + 4);
    do {
      if (*piVar5 == 0) {
        CPlayerSource::Start_t((CPlayerSource *)(*(int *)(this + 0x2c) + iVar6 * 0x370),pCVar2);
        pcVar4 = Translate(s_ETRS_done__36234f38,4);
        CPrintF(pcVar4);
        iVar1 = *(int *)(this + 0x2c);
        local_4 = 0xffffffff;
        CTSingleLock::~CTSingleLock(local_18);
        ExceptionList = local_c;
        return (CPlayerSource *)(iVar1 + iVar6 * 0x370);
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 0xdc;
    } while (iVar6 < *(int *)(this + 0x28));
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1 = (CPlayerCharacter *)Translate(s_ETRSCannot_add_more_local_client_36234f48,4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
}

