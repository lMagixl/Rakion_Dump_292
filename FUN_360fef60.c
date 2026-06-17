
CListNode * __fastcall FUN_360fef60(int *param_1)

{
  CListNode *pCVar1;
  CListNode *this;
  
  pCVar1 = (CListNode *)param_1[2];
  do {
    this = pCVar1;
    if (*(CListNode **)this == (CListNode *)0x0) {
      return (CListNode *)0x0;
    }
    pCVar1 = *(CListNode **)this;
  } while (((byte)this[-0x410] & 0x20) == 0);
  CListNode::Remove(this);
  param_1[6] = param_1[6] + -1;
  param_1[5] = param_1[5] + -1;
  *param_1 = *param_1 + (0xc - *(int *)(this + -0x40c));
  return this + -0x414;
}

