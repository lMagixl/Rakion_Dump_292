
void __thiscall FUN_3611afa0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if ((*(uint *)(param_1 + 0x10) & 0x200000) == 0) {
    if (*(int *)((int)this + 0xd64) != 0) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x80;
    }
    if (*(int *)((int)this + 0xd68) != 0) {
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x100;
    }
    iVar2 = CListNode::IsLinked((CListNode *)(iVar1 + 0x18));
    if (iVar2 == 0) {
      CListHead::AddTail((CListHead *)((int)this + 0xe4c),(CListNode *)(iVar1 + 0x18));
      FUN_360ccb70((void *)((int)this + 0xdcc),param_1);
    }
  }
  return;
}

