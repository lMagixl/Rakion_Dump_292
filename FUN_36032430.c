
void __fastcall FUN_36032430(int param_1)

{
  CListNode *this;
  int iVar1;
  CListNode *this_00;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3620fb56;
  local_c = ExceptionList;
  this = (CListNode *)(param_1 + 8);
  local_4 = 1;
  ExceptionList = &local_c;
  CListNode::Remove(this);
  this_00 = (CListNode *)(param_1 + 0x10);
  CListNode::Remove(this_00);
  local_4 = local_4 & 0xffffff00;
  iVar1 = CListNode::IsLinked(this_00);
  if (iVar1 != 0) {
    CListNode::Remove(this_00);
  }
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked(this);
  if (iVar1 != 0) {
    CListNode::Remove(this);
  }
  ExceptionList = local_c;
  return;
}

