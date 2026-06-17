
void __fastcall FUN_36143f20(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36219a3b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x110) != 0) {
    ExceptionList = &local_c;
    operator_delete__(*(void **)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    operator_delete__(*(void **)(param_1 + 0x104));
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  thunk_FUN_36143eb0((undefined4 *)(param_1 + 0xec));
  local_4 = 0xffffffff;
  thunk_FUN_36143e60((undefined4 *)(param_1 + 0x20));
  ExceptionList = local_c;
  return;
}

