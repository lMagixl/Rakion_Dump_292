
void __fastcall FUN_3603d560(int *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_362107a3;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (param_1[4] != 0) {
    pvVar1 = (void *)param_1[5];
    ExceptionList = &local_c;
    if (pvVar1 != (void *)0x0) {
      ExceptionList = &local_c;
      _eh_vector_destructor_iterator_
                (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3603c3e0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  if (param_1[2] != 0) {
    pvVar1 = (void *)param_1[3];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x28,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3603c3d0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    param_1[2] = 0;
    param_1[3] = 0;
  }
  local_4 = 0xffffffff;
  if (*param_1 != 0) {
    pvVar1 = (void *)param_1[1];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x14,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3603c3c0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  ExceptionList = local_c;
  return;
}

