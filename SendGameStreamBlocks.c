
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CServer::SendGameStreamBlocks(long) */

void __thiscall CServer::SendGameStreamBlocks(CServer *this,long param_1)

{
  CServer *pCVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void **ppvVar8;
  bool bVar9;
  long lVar10;
  CServer *local_94;
  int iStack_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  void *local_74 [2];
  CNetworkMessage local_6c [24];
  CNetworkMessage local_54 [16];
  int local_44;
  CNetworkMessage local_3c [16];
  int local_2c;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x109bc0  3323  ?SendGameStreamBlocks@CServer@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217b20;
  local_c = ExceptionList;
  local_84 = *(int *)(param_1 * 0x60 + 0x1c + *(int *)(this + 8));
  iVar6 = param_1 * 0x60 + *(int *)(this + 8);
  iVar7 = *(int *)(iVar6 + 0x44) / 0x14;
  iVar4 = *(int *)(iVar6 + 0x40) / 0x14;
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  else if (1000 < iVar7) {
    iVar7 = 1000;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (1000 < iVar4) {
    iVar4 = 1000;
  }
  iVar5 = DAT_362a6048 / 0x14 + -0xc;
  if (iVar5 < iVar7) {
    iVar7 = iVar5;
  }
  if (iVar5 < iVar4) {
    iVar4 = iVar5;
  }
  if (param_1 == 0) {
    iVar7 = 0;
    iVar4 = 1000000;
  }
  iVar5 = local_84 + 1;
  local_88 = 1;
  ExceptionList = &local_c;
  local_94 = this;
  CNetworkMessage::CNetworkMessage(local_3c,0x1b);
  local_4 = 0;
  CNetworkMessage::CNetworkMessage(local_24,0x1b);
  local_4._0_1_ = 1;
  CNetworkMessage::CNetworkMessage(local_54,0x1b);
  local_4 = CONCAT31(local_4._1_3_,2);
  local_8c = 0;
  local_78 = -1;
  local_80 = 0;
  do {
    iVar2 = FUN_36106860((void *)(iVar6 + 0x30),iVar5,local_74);
    if (iVar2 == 1) {
      if (0x15955 < *(int *)((int)local_74[0] + 0x10) + 0x20 + local_2c) break;
      FUN_36106730(local_74[0],local_3c);
      CNetworkMessage::Reinit(local_54);
      CNetworkMessage::PackDefault(local_3c,local_54);
      if ((0 < local_8c) &&
         (((0 < local_88 && (iVar4 <= local_44)) || ((local_88 < 0 && (iVar7 <= local_44))))))
      break;
      CNetworkMessage::operator=(local_24,local_54);
      if (local_78 < iVar5) {
        local_78 = iVar5;
      }
      iVar5 = iVar5 + local_88;
      local_8c = local_8c + 1;
    }
    else {
      if (local_88 < 1) break;
      if (local_8c < 1) goto LAB_36109dc5;
      bVar9 = iVar5 == local_84 + 1;
      iVar5 = local_84;
      if (bVar9) {
        iVar5 = local_84 + -1;
      }
      local_88 = -1;
    }
    local_80 = local_80 + 1;
  } while ((int)local_80 < 100);
  if (local_8c < 1) {
LAB_36109dc5:
    CTimer::GetHighPrecisionTimer(_pTimer);
    iVar7 = iStack_90;
    pCVar1 = local_94;
    bVar9 = local_94 < *(CServer **)(iVar6 + 0x20);
    local_94 = local_94 + -(int)*(CServer **)(iVar6 + 0x20);
    iStack_90 = (iStack_90 - *(int *)(iVar6 + 0x24)) - (uint)bVar9;
    if ((float10)CONCAT44(iStack_90,local_94) / (float10)*(longlong *)_pTimer <=
        (float10)_DAT_362a6040) goto LAB_36109f90;
    CNetworkMessage::CNetworkMessage(local_6c,2);
    local_4 = CONCAT31(local_4._1_3_,3);
    CMessageDispatcher::SendToClient((CMessageDispatcher *)_pNetwork,param_1,local_6c);
    *(CServer **)(iVar6 + 0x20) = pCVar1;
    *(int *)(iVar6 + 0x24) = iVar7;
  }
  else {
    CMessageDispatcher::SendToClient((CMessageDispatcher *)_pNetwork,param_1,local_24);
    iVar7 = *(int *)(iVar6 + 0x1c);
    if (*(int *)(iVar6 + 0x1c) < local_78) {
      iVar7 = local_78;
    }
    *(int *)(iVar6 + 0x1c) = iVar7;
    puVar3 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    pCVar1 = local_94;
    *(undefined4 *)(iVar6 + 0x20) = *puVar3;
    *(undefined4 *)(iVar6 + 0x24) = puVar3[1];
    FUN_36107070((void *)(iVar6 + 0x30),*(int *)(local_94 + 0x18) - _DAT_362ccea4);
    CTimer::GetHighPrecisionTimer(_pTimer);
    local_94 = (CServer *)(local_80 - *(uint *)(iVar6 + 0x28));
    iStack_90 = (local_7c - *(int *)(iVar6 + 0x2c)) - (uint)(local_80 < *(uint *)(iVar6 + 0x28));
    if ((float10)CONCAT44(iStack_90,local_94) / (float10)*(longlong *)_pTimer <=
        (float10)_DAT_362a6044) goto LAB_36109f90;
    CNetworkMessage::CNetworkMessage(local_6c,4);
    local_4 = CONCAT31(local_4._1_3_,4);
    iVar7 = 0;
    do {
      iVar4 = *(int *)(pCVar1 + 0x10);
      lVar10 = 1;
      if (*(int *)(iVar4 + iVar7) == 0) {
        ppvVar8 = local_74;
        local_74[0] = (void *)0x0;
      }
      else {
        local_94 = (CServer *)0x1;
        CNetworkMessage::WriteBits(local_6c,&local_94,1);
        lVar10 = 10;
        ppvVar8 = (void **)(iVar4 + iVar7 + 0xa8);
      }
      CNetworkMessage::WriteBits(local_6c,ppvVar8,lVar10);
      iVar7 = iVar7 + 0x100;
    } while (iVar7 < 0x2000);
    CMessageDispatcher::SendToClient((CMessageDispatcher *)_pNetwork,param_1,local_6c);
    *(uint *)(iVar6 + 0x28) = local_80;
    *(int *)(iVar6 + 0x2c) = local_7c;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  CNetworkMessage::~CNetworkMessage(local_6c);
LAB_36109f90:
  local_4._0_1_ = 1;
  CNetworkMessage::~CNetworkMessage(local_54);
  local_4 = (uint)local_4._1_3_ << 8;
  CNetworkMessage::~CNetworkMessage(local_24);
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(local_3c);
  ExceptionList = local_c;
  return;
}

