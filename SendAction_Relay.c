
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPlayerSource::SendAction_Relay(void) */

void __thiscall CPlayerSource::SendAction_Relay(CPlayerSource *this)

{
  CPlayerSource CVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  short sVar5;
  CEntity *pCVar6;
  DWORD DVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  ulonglong uVar8;
  undefined1 local_439;
  uint local_438;
  byte local_431;
  undefined4 local_430;
  undefined4 local_42c;
  uint local_428;
  float local_424;
  float local_420;
  float local_41c;
  CTSingleLock local_418 [20];
  float local_404;
  CNetMessage local_400 [1008];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x108960  3230  ?SendAction_Relay@CPlayerSource@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362179e8;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_418,(CTCriticalSection *)(this + 0x4c),1);
  local_4 = 0;
  CPlayerAction::Normalize((CPlayerAction *)(this + 0x58));
  pCVar6 = CNetworkLibrary::GetLocalPlayerEntity(_pNetwork,this);
  uVar4 = local_438;
  if ((pCVar6 == (CEntity *)0x0) ||
     ((local_438 = *(uint *)(pCVar6 + 0x10) & 8, local_438 == 0 &&
      ((uVar4 = 0, *(float *)(pCVar6 + 0xec) + _DAT_3622dd0c < *(float *)(_pTimer + 8) ||
       (*(int *)(pCVar6 + 0xf0) == 0)))))) {
    local_438 = uVar4;
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_418);
  }
  else {
    fVar2 = *(float *)(pCVar6 + 0x3c);
    fVar3 = *(float *)(pCVar6 + 0x40);
    local_404 = *(float *)(pCVar6 + 0x44);
    uVar8 = FUN_361bfd6c();
    local_42c = (undefined4)uVar8;
    uVar8 = FUN_361bfd6c();
    local_438 = (uint)uVar8;
    CVar1 = this[0x9c];
    local_424 = *(float *)(this + 0x90);
    local_420 = *(float *)(this + 0x94);
    local_41c = *(float *)(this + 0x98);
    CNetMessage::CNetMessage(local_400);
    DVar7 = timeGetTime();
    local_428 = DVar7 - DAT_362cfc0c;
    if (0xfffe < local_428) {
      local_428 = 0xffff;
    }
    CNetMessage::Write(local_400,&local_428,2);
    local_431 = (char)CVar1 << 5 | *(byte *)(*(int *)(_pNetwork + 0x24) + 0x2946);
    DAT_362cfc0c = DVar7;
    CNetMessage::Write(local_400,&local_431,1);
    local_439 = 0;
    CNetMessage::Write(local_400,&local_439,1);
    sVar5 = PackFloatToSWord(fVar2);
    local_430 = CONCAT22(extraout_var,sVar5);
    CNetMessage::Write(local_400,&local_430,2);
    sVar5 = PackFloatToSWord(fVar3);
    local_430 = CONCAT22(extraout_var_00,sVar5);
    CNetMessage::Write(local_400,&local_430,2);
    sVar5 = PackFloatToSWord(local_404);
    local_430 = CONCAT22(extraout_var_01,sVar5);
    CNetMessage::Write(local_400,&local_430,2);
    CNetMessage::Write(local_400,&local_42c,2);
    local_439 = (undefined1)local_438;
    CNetMessage::Write(local_400,&local_439,1);
    sVar5 = PackFloatToSWord(local_424);
    local_438 = CONCAT22(extraout_var_02,sVar5);
    CNetMessage::Write(local_400,&local_438,2);
    sVar5 = PackFloatToSWord(local_420);
    local_438 = CONCAT22(extraout_var_03,sVar5);
    CNetMessage::Write(local_400,&local_438,2);
    sVar5 = PackFloatToSWord(local_41c);
    local_438 = CONCAT22(extraout_var_04,sVar5);
    CNetMessage::Write(local_400,&local_438,2);
    CNet::SendToOtherRelayClient((CNet *)(_pNetwork + 0x11ac),0x30a,local_400);
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_418);
  }
  ExceptionList = local_c;
  return;
}

