
void __fastcall FUN_3611ede0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3621879e;
  local_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &local_c;
  iVar1 = CListNode::IsLinked((CListNode *)(param_1 + 0xf9c));
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)(param_1 + 0xf9c));
  }
  if (*(int *)(param_1 + 0xe18) != 0) {
    operator_delete__(*(void **)(param_1 + 0xe1c));
    *(undefined4 *)(param_1 + 0xe18) = 0;
    *(undefined4 *)(param_1 + 0xe1c) = 0;
  }
  if (*(int *)(param_1 + 0xe08) != 0) {
    operator_delete__(*(void **)(param_1 + 0xe0c));
    *(undefined4 *)(param_1 + 0xe08) = 0;
    *(undefined4 *)(param_1 + 0xe0c) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  thunk_FUN_36123250((undefined4 *)(param_1 + 0xdec));
  if (*(int *)(param_1 + 0xddc) != 0) {
    operator_delete__(*(void **)(param_1 + 0xde0));
    *(undefined4 *)(param_1 + 0xddc) = 0;
    *(undefined4 *)(param_1 + 0xde0) = 0;
  }
  FUN_360cd280((int *)(param_1 + 0xdcc));
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_361220b0((undefined4 *)(param_1 + 0xdb0));
  local_4 = 0xffffffff;
  thunk_FUN_36121ff0((undefined4 *)(param_1 + 0xd94));
  ExceptionList = local_c;
  return;
}

