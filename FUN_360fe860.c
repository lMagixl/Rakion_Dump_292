
void __fastcall FUN_360fe860(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  *(undefined2 *)(param_1 + 0x420) = 0;
  *(undefined2 *)(param_1 + 0x422) = 0;
  if (_pTimer != (CTimer *)0x0) {
    uVar2 = FUN_361bfd6c();
    *(ulonglong *)(param_1 + 0x18) = uVar2;
  }
  iVar1 = CListNode::IsLinked((CListNode *)(param_1 + 0x414));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(param_1 + 0x414));
    return;
  }
  return;
}

