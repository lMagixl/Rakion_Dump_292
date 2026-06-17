
/* public: void __thiscall CServer::HandleClientDisconected(long) */

void __thiscall CServer::HandleClientDisconected(CServer *this,long param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  CServer *pCVar5;
  long local_40;
  int local_3c;
  int local_38;
  CServer *local_34;
  CNetworkMessage local_30 [4];
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  CListNode local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x10b480  2233  ?HandleClientDisconected@CServer@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217cce;
  local_c = ExceptionList;
  iVar1 = *(int *)(this + 8);
  ExceptionList = &local_c;
  CloseClient(this,param_1);
  FUN_361097f0((undefined4 *)(param_1 * 0x60 + iVar1));
  local_3c = 0;
  iVar4 = 1;
  iVar1 = FUN_360a59d0((undefined4 *)(this + 4));
  if (1 < iVar1) {
    piVar3 = (int *)(*(int *)(this + 8) + 0x68);
    do {
      if (*piVar3 != 0) {
        local_3c = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x18;
      iVar1 = FUN_360a59d0((undefined4 *)(this + 4));
    } while (iVar4 < iVar1);
  }
  pCVar5 = this + 0xc;
  local_40 = 0;
  local_38 = 0;
  local_4 = 0;
  local_34 = pCVar5;
  if (0 < *(int *)pCVar5) {
    do {
      iVar1 = local_38;
      if (*(int *)(local_38 * 0x100 + 0xa4 + *(int *)(pCVar5 + 4)) == param_1) {
        iVar4 = *(int *)(this + 0x18);
        *(int *)(this + 0x18) = iVar4 + 1;
        FUN_361066d0(local_30,0x18,iVar4 + 1);
        local_4 = CONCAT31(local_4._1_3_,1);
        if ((int *)(local_28 + local_2c) < local_24 + 1) {
          pcVar2 = Translate(s_ETRSWarning__Message_over_writin_362233ac,4);
          CPrintF(pcVar2);
        }
        else {
          *local_24 = local_40;
          local_24 = local_24 + 1;
          local_20 = local_20 + 4;
          local_1c = 0;
        }
        FUN_361070d0((void *)(*(int *)(this + 8) + 0x30),local_30);
        if (local_3c == 0) {
          StopNetProcess(this);
        }
        else {
          CEntityMessage::WriteRemovePlayer((CEntityMessage *)(this + 0x38cc),&local_40);
          SendMessageA(this,(CEntityMessage *)(this + 0x38cc));
          pCVar5 = local_34;
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar4 = CListNode::IsLinked(local_18);
        if (iVar4 != 0) {
          CListNode::Remove(local_18);
        }
        local_4 = local_4 & 0xffffff00;
        CNetworkMessage::~CNetworkMessage(local_30);
      }
      local_40 = local_40 + 1;
      local_38 = iVar1 + 1;
    } while (local_38 < *(int *)pCVar5);
  }
  ExceptionList = local_c;
  return;
}

