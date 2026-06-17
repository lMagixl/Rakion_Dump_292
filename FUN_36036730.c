
void __fastcall FUN_36036730(int param_1)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    pvVar1 = *(void **)(param_1 + 8);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_36036030);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

