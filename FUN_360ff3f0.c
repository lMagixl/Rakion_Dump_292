
undefined4 __thiscall FUN_360ff3f0(void *this,int param_1,int param_2)

{
  CListNode *pCVar1;
  CListNode *this_00;
  
  pCVar1 = *(CListNode **)((int)this + 8);
  while (this_00 = pCVar1, pCVar1 = *(CListNode **)this_00, pCVar1 != (CListNode *)0x0) {
    if (*(int *)(this_00 + -0x414) == param_1) {
      CListNode::Remove(this_00);
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
      if (((byte)this_00[-0x410] & 2) != 0) {
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
      }
      *(int *)this = *(int *)this + (0xc - *(int *)(this_00 + -0x40c));
      if (param_2 != 0) {
        FUN_360ff0d0(this_00 + -0x414);
      }
    }
  }
  return 0;
}

