
void __fastcall FUN_360313f0(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3620f9b1;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x18) != 0) {
    pvVar1 = *(void **)(param_1 + 0x1c);
    ExceptionList = &local_c;
    if (pvVar1 != (void *)0x0) {
      ExceptionList = &local_c;
      _eh_vector_destructor_iterator_(pvVar1,0x20,*(int *)((int)pvVar1 + -4),FUN_3600bb50);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  local_4._0_1_ = 1;
  if (*(int *)(param_1 + 0x10) != 0) {
    pvVar1 = *(void **)(param_1 + 0x14);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,8,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3600bb40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(*(char **)(param_1 + 0xc));
  local_4 = 0xffffffff;
  StringFree(*(char **)(param_1 + 8));
  ExceptionList = local_c;
  return;
}

