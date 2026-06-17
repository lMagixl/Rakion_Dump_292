
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPlayerSource::SendAction(void) */

void __thiscall CPlayerSource::SendAction(CPlayerSource *this)

{
  CPlayerSource CVar1;
  float fVar2;
  uint uVar3;
  short sVar4;
  CEntity *pCVar5;
  DWORD DVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  int iVar7;
  CPlayerSource *pCVar8;
  CPlayerAction *pCVar9;
  CPlayerSource *pCVar10;
  ulonglong uVar11;
  undefined1 local_43d;
  uint local_43c;
  byte local_435;
  undefined4 local_434;
  CPlayerAction *local_430;
  float local_42c;
  float local_428;
  float local_424;
  uint local_420;
  undefined4 local_41c [2];
  float local_414;
  float local_410;
  CTSingleLock local_40c [12];
  CNetMessage local_400 [1008];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1085f0  3229  ?SendAction@CPlayerSource@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362179d3;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_40c,(CTCriticalSection *)(this + 0x4c),1);
  local_430 = (CPlayerAction *)(this + 0x58);
  local_4 = 0;
  CPlayerAction::Normalize(local_430);
  pCVar5 = CNetworkLibrary::GetLocalPlayerEntity(_pNetwork,this);
  uVar3 = local_43c;
  if ((pCVar5 == (CEntity *)0x0) ||
     ((local_43c = *(uint *)(pCVar5 + 0x10) & 8, local_43c == 0 &&
      ((uVar3 = 0, *(float *)(pCVar5 + 0xec) + _DAT_3622dd0c < *(float *)(_pTimer + 8) ||
       (*(int *)(pCVar5 + 0xf0) == 0)))))) {
    local_43c = uVar3;
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_40c);
  }
  else {
    fVar2 = *(float *)(pCVar5 + 0x3c);
    local_414 = *(float *)(pCVar5 + 0x40);
    local_410 = *(float *)(pCVar5 + 0x44);
    uVar11 = FUN_361bfd6c();
    local_41c[0] = (undefined4)uVar11;
    uVar11 = FUN_361bfd6c();
    local_43c = (uint)uVar11;
    CVar1 = this[0x9c];
    local_42c = *(float *)(this + 0x90);
    local_428 = *(float *)(this + 0x94);
    local_424 = *(float *)(this + 0x98);
    CNetMessage::CNetMessage(local_400);
    DVar6 = timeGetTime();
    local_420 = DVar6 - DAT_362cfc08;
    if (0xfffe < local_420) {
      local_420 = 0xffff;
    }
    CNetMessage::Write(local_400,&local_420,2);
    local_435 = (char)CVar1 << 5 | *(byte *)(*(int *)(_pNetwork + 0x24) + 0x2946);
    DAT_362cfc08 = DVar6;
    CNetMessage::Write(local_400,&local_435,1);
    local_43d = 0;
    CNetMessage::Write(local_400,&local_43d,1);
    sVar4 = PackFloatToSWord(fVar2);
    local_434 = CONCAT22(extraout_var,sVar4);
    CNetMessage::Write(local_400,&local_434,2);
    sVar4 = PackFloatToSWord(local_414);
    local_434 = CONCAT22(extraout_var_00,sVar4);
    CNetMessage::Write(local_400,&local_434,2);
    sVar4 = PackFloatToSWord(local_410);
    local_434 = CONCAT22(extraout_var_01,sVar4);
    CNetMessage::Write(local_400,&local_434,2);
    CNetMessage::Write(local_400,local_41c,2);
    local_43d = (undefined1)local_43c;
    CNetMessage::Write(local_400,&local_43d,1);
    sVar4 = PackFloatToSWord(local_42c);
    local_43c = CONCAT22(extraout_var_02,sVar4);
    CNetMessage::Write(local_400,&local_43c,2);
    sVar4 = PackFloatToSWord(local_428);
    local_43c = CONCAT22(extraout_var_03,sVar4);
    CNetMessage::Write(local_400,&local_43c,2);
    sVar4 = PackFloatToSWord(local_424);
    local_43c = CONCAT22(extraout_var_04,sVar4);
    CNetMessage::Write(local_400,&local_43c,2);
    pCVar8 = this + 0x2e0;
    pCVar10 = this + 0x328;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar8 = this + 0x298;
    pCVar10 = this + 0x2e0;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar8 = this + 0x250;
    pCVar10 = this + 0x298;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar8 = this + 0x208;
    pCVar10 = this + 0x250;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar8 = this + 0x1c0;
    pCVar10 = this + 0x208;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar8 = this + 0x178;
    pCVar10 = this + 0x1c0;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar8 = this + 0x130;
    pCVar10 = this + 0x178;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar8 = this + 0xe8;
    pCVar10 = this + 0x130;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar8 = this + 0xa0;
    pCVar10 = this + 0xe8;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      pCVar10 = pCVar10 + 4;
    }
    pCVar9 = local_430;
    pCVar8 = this + 0xa0;
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pCVar8 = *(undefined4 *)pCVar9;
      pCVar9 = pCVar9 + 4;
      pCVar8 = pCVar8 + 4;
    }
    CNet::SendToOtherClient((CNet *)(_pNetwork + 0x11ac),0x30a,local_400);
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_40c);
  }
  ExceptionList = local_c;
  return;
}

