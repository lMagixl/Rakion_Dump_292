
void __fastcall FUN_36106400(CNetworkMessage *param_1)

{
  int iVar1;
  
  iVar1 = CListNode::IsLinked((CListNode *)(param_1 + 0x18));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  CNetworkMessage::Initialize(param_1);
  return;
}

