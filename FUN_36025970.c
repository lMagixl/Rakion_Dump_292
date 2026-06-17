
void __fastcall FUN_36025970(CListNode *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620f0c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  StringFree(*(char **)(param_1 + 8));
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked(param_1);
  if (iVar1 != 0) {
    CListNode::Remove(param_1);
  }
  ExceptionList = local_c;
  return;
}

