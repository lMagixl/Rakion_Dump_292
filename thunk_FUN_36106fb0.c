
void __fastcall thunk_FUN_36106fb0(undefined4 *param_1)

{
  CListNode *pCVar1;
  CListNode *this;
  
  this = (CListNode *)*param_1;
  while (pCVar1 = *(CListNode **)this, pCVar1 != (CListNode *)0x0) {
    CListNode::Remove(this);
    FUN_36106f40((CNetworkMessage *)(this + -0x18));
    this = pCVar1;
  }
  return;
}

