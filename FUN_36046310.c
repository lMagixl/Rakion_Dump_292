
void __fastcall FUN_36046310(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621145a;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_36045eb0(param_1);
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked((CListNode *)(param_1 + 10));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(param_1 + 10));
  }
  ExceptionList = local_c;
  return;
}

