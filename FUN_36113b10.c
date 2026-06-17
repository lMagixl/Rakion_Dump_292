
void __fastcall FUN_36113b10(CListNode *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_36218443;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  CTMemoryStream::~CTMemoryStream((CTMemoryStream *)(param_1 + 0xc));
  local_4 = local_4 & 0xffffff00;
  StringFree(*(char **)(param_1 + 8));
  local_4 = 0xffffffff;
  iVar1 = CListNode::IsLinked(param_1);
  if (iVar1 != 0) {
    CListNode::Remove(param_1);
  }
  ExceptionList = local_c;
  return;
}

