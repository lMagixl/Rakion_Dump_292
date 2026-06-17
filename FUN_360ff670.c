
void __fastcall FUN_360ff670(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621748e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_360fe860(param_1);
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked((CListNode *)(param_1 + 0x414));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(param_1 + 0x414));
  }
  ExceptionList = local_c;
  return;
}

