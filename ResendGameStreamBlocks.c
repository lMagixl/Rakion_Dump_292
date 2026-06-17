
/* public: void __thiscall CServer::ResendGameStreamBlocks(long,long,long) */

void __thiscall
CServer::ResendGameStreamBlocks(CServer *this,long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  CNetworkMessage local_54 [16];
  int local_44;
  CNetworkMessage local_3c [16];
  undefined4 local_2c;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  lVar1 = param_3;
  lVar7 = param_2;
                    /* 0x109ff0  3158  ?ResendGameStreamBlocks@CServer@@QAEXJJJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217b4a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_362ccee4 != 0) {
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)CCommunicationInterface::Server_GetClientName(&_cmiComm,(long)&param_3);
    uVar9 = *puVar2;
    iVar5 = lVar7 + -1 + lVar1;
    local_4 = 0;
    lVar6 = lVar7;
    lVar8 = lVar1;
    pcVar3 = Translate(s_ETRSServer__Resending_sequences___36236a28,4);
    CPrintF(pcVar3,lVar6,iVar5,lVar8,uVar9);
    local_4 = 0xffffffff;
    StringFree((char *)param_3);
  }
  iVar5 = *(int *)(this + 8);
  CNetworkMessage::CNetworkMessage(local_24,0x1b);
  local_4 = 1;
  CNetworkMessage::CNetworkMessage(local_3c,0x1b);
  local_4._0_1_ = 2;
  lVar6 = lVar7;
  if (lVar7 < lVar1 + lVar7) {
    do {
      iVar4 = FUN_36106860((void *)(param_1 * 0x60 + iVar5 + 0x30),lVar6,&param_2);
      if (iVar4 != 1) {
        iVar5 = 0;
        pcVar3 = Translate(s_ETRSGamestream_synchronization_l_36236a60,4);
        SendDisconnectMessage(this,param_1,pcVar3,iVar5);
        goto LAB_3610a191;
      }
      CNetworkMessage::CNetworkMessage(local_54,0x1b);
      local_4._0_1_ = 3;
      FUN_36106730((void *)param_2,local_24);
      CNetworkMessage::PackDefault(local_24,local_54);
      if (0x200 < local_44) {
        local_4._0_1_ = 2;
        CNetworkMessage::~CNetworkMessage(local_54);
        break;
      }
      CNetworkMessage::operator=(local_3c,local_54);
      local_4._0_1_ = 2;
      CNetworkMessage::~CNetworkMessage(local_54);
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar1 + lVar7);
  }
  CMessageDispatcher::SendToClient((CMessageDispatcher *)_pNetwork,param_1,local_3c);
  if (DAT_362ccee4 != 0) {
    iVar5 = (lVar6 - lVar7) + -1;
    pcVar3 = Translate(s_ETRS_sent__d__d__d____db__36236a84,4);
    CPrintF(pcVar3,lVar7,lVar6,iVar5,local_2c);
  }
LAB_3610a191:
  local_4 = CONCAT31(local_4._1_3_,1);
  CNetworkMessage::~CNetworkMessage(local_3c);
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(local_24);
  ExceptionList = local_c;
  return;
}

