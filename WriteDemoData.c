
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::WriteDemoData(float) */

void __thiscall CServer::WriteDemoData(CServer *this,float param_1)

{
  longlong *plVar1;
  int iVar2;
  char *pcVar3;
  CNetworkLibrary *pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  double dVar10;
  uint local_40;
  undefined **local_3c;
  int local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10c350  3960  ?WriteDemoData@CServer@@QAEXM@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217d56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  plVar1 = (longlong *)CTimer::GetHighPrecisionTimer(_pTimer);
  if (((float10)*(float *)(this + 0x1c) <= (float10)*plVar1 / (float10)*(longlong *)_pTimer) &&
     (1 < *(ushort *)(this + 0x38c0))) {
    CNetworkMessage::CNetworkMessage(local_24,0x31);
    iVar7 = *(int *)(this + 0x38c8) + -2;
    local_4 = 0;
    if (iVar7 < 0) {
      iVar7 = *(int *)(this + 0x38c8) + 0x256;
    }
    local_38 = iVar7;
    iVar2 = PrepareDemoData(this,param_1);
    if (iVar2 == 0) {
      local_4 = 0xffffffff;
      CNetworkMessage::~CNetworkMessage(local_24);
      ExceptionList = local_c;
      return;
    }
    iVar2 = FUN_360f12f0((int)(this + 0x38f4));
    local_30 = iVar2;
    if (DAT_362cced8 != 0) {
      dVar10 = (double)*(float *)(this + iVar7 * 0xc + 0x1ca0);
      iVar7 = iVar2;
      pcVar3 = Translate(s_ETRSDEMO_tick_prepared__Time___5_36237204,4);
      CPrintF(pcVar3,SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),iVar7);
    }
    CTimer::GetHighPrecisionTimer(_pTimer);
    local_3c = &PTR_FUN_362350b0;
    local_40 = FUN_360fe080();
    FUN_360fe0a0(*(int *)(this + 0x390c),iVar2,&DAT_362cfd00,&local_40);
    local_2c = DAT_36237234;
    local_28 = DAT_36237238;
    CTStream::WriteID_t((CTStream *)(_pNetwork + 0x878),(CChunkID *)&local_2c);
    pCVar4 = _pNetwork + 0x88c;
    **(float **)(_pNetwork + 0x88c) =
         *(float *)(*(int *)(_pNetwork + 0x24) + 0x2c) - CTimer::TickQuantum;
    *(int *)pCVar4 = *(int *)pCVar4 + 4;
    local_2c = DAT_3623723c;
    local_28 = DAT_36237240;
    CTStream::WriteID_t((CTStream *)(_pNetwork + 0x878),(CChunkID *)&local_2c);
    pCVar4 = _pNetwork;
    **(uint **)(_pNetwork + 0x88c) = local_40;
    *(int *)(pCVar4 + 0x88c) = *(int *)(pCVar4 + 0x88c) + 4;
    pCVar4 = _pNetwork + 0x88c;
    puVar6 = &DAT_362cfd00;
    puVar8 = *(undefined4 **)(_pNetwork + 0x88c);
    for (uVar5 = local_40 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = local_40 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(uint *)pCVar4 = *(int *)pCVar4 + local_40;
    if (DAT_362cced8 != 0) {
      CPrintF(s_Recorded_tick_time___6_3f_36237244,
              SUB84((double)*(float *)(this + local_38 * 0xc + 0x1ca0),0),
              (int)((ulonglong)(double)*(float *)(this + local_38 * 0xc + 0x1ca0) >> 0x20));
    }
    if (DAT_362a6070 < 0x20) {
      DAT_362a6070 = 0x20;
    }
    else if (0x200 < DAT_362a6070) {
      DAT_362a6070 = 0x200;
    }
    iVar7 = DAT_362a6070 << 0xd;
    CTimer::GetHighPrecisionTimer(_pTimer);
    fVar9 = (float10)iVar7;
    if (iVar7 < 0) {
      fVar9 = fVar9 + (float10)_DAT_362265a8;
    }
    local_4 = 0xffffffff;
    *(float *)(this + 0x1c) =
         (float)((float10)CONCAT44(uStack_34,local_38) / (float10)*(longlong *)_pTimer +
                (float10)local_30 / fVar9);
    CNetworkMessage::~CNetworkMessage(local_24);
  }
  ExceptionList = local_c;
  return;
}

