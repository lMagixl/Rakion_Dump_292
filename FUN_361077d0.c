
void __fastcall FUN_361077d0(int *param_1)

{
  int iVar1;
  int iVar2;
  CNetworkMessage *this;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362178a3;
  local_c = ExceptionList;
  iVar1 = param_1[0xc];
  ExceptionList = &local_c;
  param_1[0xc] = 1;
  local_4 = 2;
  local_20 = FUN_36107270((int)param_1);
  if (0 < local_20) {
    do {
      iVar2 = FUN_36107270((int)param_1);
      this = (CNetworkMessage *)FUN_36107260(param_1,iVar2 + -1);
      if (this != (CNetworkMessage *)0x0) {
        local_4 = CONCAT31(local_4._1_3_,3);
        iVar2 = CListNode::IsLinked((CListNode *)(this + 0x18));
        if (iVar2 != 0) {
          CListNode::Remove((CListNode *)(this + 0x18));
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        CNetworkMessage::~CNetworkMessage(this);
        FUN_36106440(this);
      }
      FUN_36107450(param_1,(int)this);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  param_1[0xc] = iVar1;
  if (param_1[4] != 0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_36107760(param_1);
  ExceptionList = local_c;
  return;
}

