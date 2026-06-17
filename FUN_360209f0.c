
void __fastcall FUN_360209f0(CListNode *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620ed2a;
  local_c = ExceptionList;
  pvVar1 = *(void **)(param_1 + 8);
  local_4 = 0;
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_3601f4d0((int)pvVar1);
    operator_delete(pvVar1);
  }
  local_4 = 0xffffffff;
  iVar2 = CListNode::IsLinked(param_1);
  if (iVar2 != 0) {
    CListNode::Remove(param_1);
  }
  ExceptionList = local_c;
  return;
}

