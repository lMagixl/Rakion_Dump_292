
CListNode * __thiscall FUN_360fef00(void *this,int param_1)

{
  CListNode *pCVar1;
  CListNode *this_00;
  
  pCVar1 = *(CListNode **)((int)this + 8);
  do {
    this_00 = pCVar1;
    if (*(CListNode **)this_00 == (CListNode *)0x0) {
      return (CListNode *)0x0;
    }
    pCVar1 = *(CListNode **)this_00;
  } while (*(int *)(this_00 + -0x414) != param_1);
  CListNode::Remove(this_00);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
  if (((byte)this_00[-0x410] & 2) != 0) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  *(int *)this = *(int *)this + (0xc - *(int *)(this_00 + -0x40c));
  return this_00 + -0x414;
}

