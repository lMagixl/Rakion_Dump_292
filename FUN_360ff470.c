
undefined4 __fastcall FUN_360ff470(int *param_1)

{
  CListNode *pCVar1;
  CListNode *this;
  
  pCVar1 = (CListNode *)param_1[2];
  while (this = pCVar1, pCVar1 = *(CListNode **)this, pCVar1 != (CListNode *)0x0) {
    if (((byte)this[-0x410] & 0x40) != 0) {
      CListNode::Remove(this);
      param_1[5] = param_1[5] + -1;
      param_1[6] = param_1[6] + -1;
      *param_1 = *param_1 + (0xc - *(int *)(this + -0x40c));
      FUN_360ff0d0(this + -0x414);
    }
  }
  return 0;
}

