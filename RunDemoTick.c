
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSessionState::RunDemoTick(void) */

void __thiscall CSessionState::RunDemoTick(CSessionState *this)

{
  CNetworkLibrary *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long local_2c;
  undefined4 local_25;
  undefined1 local_21;
  int local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x111130  3183  ?RunDemoTick@CSessionState@@QAEXXZ */
  local_18 = DAT_362abd90;
  puStack_c = &LAB_362181ec;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x78) = 0;
  local_21 = DAT_36237850;
  local_8 = 0;
  local_25 = DAT_3623784c;
  CTStream::ExpectID_t((CTStream *)(_pNetwork + 0x8f4),(CChunkID *)&local_25);
  uVar2 = **(uint **)(_pNetwork + 0x908);
  *(uint **)(_pNetwork + 0x908) = *(uint **)(_pNetwork + 0x908) + 1;
  pCVar1 = _pNetwork;
  if (0 < (int)uVar2) {
    puVar5 = *(undefined4 **)(_pNetwork + 0x908);
    puVar6 = &DAT_362cfd00;
    for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(uint *)(pCVar1 + 0x908) = *(int *)(pCVar1 + 0x908) + uVar2;
  }
  *(undefined4 *)(_pNetwork + 0x8f0) = 0;
  local_8 = 0xffffffff;
  local_2c = 0x15555;
  FUN_360fe130(0x362cfd00,uVar2,&DAT_362e5438,&local_2c);
  if (0 < (int)uVar2) {
    (**(code **)(*(int *)(this + 0x90) + 4))();
    ReceiveTick(this,*(float *)(_pNetwork + 0x978),&DAT_362e5438,local_2c);
    _DAT_362e542c = 0;
    _DAT_362e5430 = 0;
    _DAT_362e5434 = 0;
    _DAT_362e5350 = 0;
    if (0 < local_2c) {
      do {
        iVar3 = ReceiveMessage(this);
      } while (iVar3 != 0);
    }
  }
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(_pNetwork + 0x1354);
  *(undefined4 *)(this + 0x1d00) = *(undefined4 *)(_pNetwork + 0x1354);
  local_8 = 2;
  CTStream::PeekID_t((CTStream *)(_pNetwork + 0x8f4));
  if (local_20 == DAT_36237874) {
    local_21 = DAT_36237880;
    local_25 = DAT_3623787c;
    CTStream::ExpectID_t((CTStream *)(_pNetwork + 0x8f4),(CChunkID *)&local_25);
    pCVar1 = _pNetwork + 0x908;
    *(undefined4 *)(_pNetwork + 0x978) = **(undefined4 **)(_pNetwork + 0x908);
    *(int *)pCVar1 = *(int *)pCVar1 + 4;
  }
  else {
    local_21 = DAT_36237888;
    local_25 = DAT_36237884;
    CTStream::ExpectID_t((CTStream *)(_pNetwork + 0x8f4),(CChunkID *)&local_25);
    *(undefined4 *)(_pNetwork + 0x8f0) = 1;
  }
  ExceptionList = local_10;
  return;
}

