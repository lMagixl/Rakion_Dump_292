
void __fastcall FUN_36019c80(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3620e3c6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  StringFree(*(char **)(param_1 + 0x28));
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(param_1 + 0x20) != 0) {
    pvVar1 = *(void **)(param_1 + 0x24);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x2c,*(int *)((int)pvVar1 + -4),FUN_36014730);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x18) != 0) {
    pvVar1 = *(void **)(param_1 + 0x1c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_36010a40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  ExceptionList = local_c;
  return;
}

