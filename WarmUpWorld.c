
/* public: void __thiscall CSessionState::WarmUpWorld(void) */

void __thiscall CSessionState::WarmUpWorld(CSessionState *this)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  CNetworkMessage local_30 [4];
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  CListNode local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10fa20  3944  ?WarmUpWorld@CSessionState@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218066;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(*(int *)(_pNetwork + 0x18) + 0x14) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(*(int *)(_pNetwork + 0x18) + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  iVar3 = 0x14;
  do {
    *(float *)(*(int *)(_pNetwork + 0x18) + 0x14) =
         CTimer::TickQuantum + *(float *)(*(int *)(_pNetwork + 0x18) + 0x14);
    *(int *)(*(int *)(_pNetwork + 0x18) + 0x18) = *(int *)(*(int *)(_pNetwork + 0x18) + 0x18) + 1;
    FUN_361066d0(local_30,0x16,*(undefined4 *)(*(int *)(_pNetwork + 0x18) + 0x18));
    local_4 = 0;
    if ((undefined4 *)(local_28 + local_2c) < local_24 + 1) {
      pcVar1 = Translate(s_ETRSWarning__Message_over_writin_362233ac,4);
      CPrintF(pcVar1);
    }
    else {
      *local_24 = *(undefined4 *)(*(int *)(_pNetwork + 0x18) + 0x14);
      local_24 = local_24 + 1;
      local_20 = local_20 + 4;
      local_1c = 0;
    }
    CNetworkMessage::Rewind(local_30);
    FUN_361070d0(this + 8,local_30);
    local_4 = 1;
    iVar2 = CListNode::IsLinked(local_18);
    if (iVar2 != 0) {
      CListNode::Remove(local_18);
    }
    local_4 = 0xffffffff;
    CNetworkMessage::~CNetworkMessage(local_30);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  ExceptionList = local_c;
  return;
}

