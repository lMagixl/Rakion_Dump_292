
void __fastcall FUN_3611f070(int param_1)

{
  CListNode *this;
  
  this = *(CListNode **)(param_1 + 0xfd4);
  while (this + -0xf0 != (CListNode *)(param_1 + 0xeac)) {
    CListNode::Remove(this);
    *(undefined4 *)(this + 8) = 0;
    this = *(CListNode **)(param_1 + 0xfd4);
  }
  return;
}

