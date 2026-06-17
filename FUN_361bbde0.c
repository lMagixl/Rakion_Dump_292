
void __fastcall FUN_361bbde0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621c3db;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    ExceptionList = &local_c;
    operator_delete(*(void **)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_361bb350(param_1 + 0x20);
  operator_delete(*(void **)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  ExceptionList = local_c;
  return;
}

