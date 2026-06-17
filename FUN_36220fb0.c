
void FUN_36220fb0(void)

{
  void *pvVar1;
  
  if (DAT_362fde04 != 0) {
    if (DAT_362fde08 != (void *)0x0) {
      pvVar1 = (void *)((int)DAT_362fde08 + -4);
      _eh_vector_destructor_iterator_
                (DAT_362fde08,0x18,*(int *)((int)DAT_362fde08 + -4),FUN_3615b2c0);
      operator_delete__(pvVar1);
    }
    DAT_362fde04 = 0;
    DAT_362fde08 = (void *)0x0;
  }
  return;
}

