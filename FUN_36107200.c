
void __fastcall FUN_36107200(CNetworkMessage *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36217848;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = CListNode::IsLinked((CListNode *)(param_1 + 0x18));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(param_1 + 0x18));
  }
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(param_1);
  ExceptionList = local_c;
  return;
}

