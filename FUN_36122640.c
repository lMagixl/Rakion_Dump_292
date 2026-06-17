
void __thiscall FUN_36122640(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xec) = 0;
  if ((*(uint *)(*(int *)(param_1 + 0xe8) + 200) & 0x80020) != 0) {
    FUN_36117840(this,param_1);
  }
  iVar2 = CListNode::IsLinked((CListNode *)(param_1 + 0xf0));
  if (iVar2 != 0) {
    piVar1 = (int *)(param_1 + 0xf8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      CListNode::Remove((CListNode *)(param_1 + 0xf0));
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  return;
}

