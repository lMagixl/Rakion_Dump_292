
void __thiscall FUN_36046370(void *this,int param_1)

{
  CListNode::Remove((CListNode *)(*(int *)((int)this + 8) + 0x28 + param_1 * 0x30));
  CListHead::AddTail((CListHead *)((int)this + 0xc),
                     (CListNode *)(*(int *)((int)this + 8) + 0x28 + param_1 * 0x30));
  return;
}

