
void __thiscall FUN_36107070(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = CListHead::IsEmpty(this);
  while ((iVar1 == 0 && (*(int *)(*(int *)((int)this + 8) + 8) < param_1))) {
    FUN_36106f40((CNetworkMessage *)(*(int *)((int)this + 8) + -0x18));
    iVar1 = CListHead::IsEmpty(this);
  }
  return;
}

