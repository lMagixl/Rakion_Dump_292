
void __fastcall FUN_36021530(CListNode *param_1)

{
  int iVar1;
  
  iVar1 = CListNode::IsLinked(param_1);
  if (iVar1 != 0) {
    CListNode::Remove(param_1);
    return;
  }
  return;
}

