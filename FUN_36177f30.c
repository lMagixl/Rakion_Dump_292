
void FUN_36177f30(void)

{
  void *pvVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  if (*(int *)(unaff_ESI + 0x100) != 0) {
    pvVar1 = *(void **)(unaff_ESI + 0x104);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x160,*(int *)((int)pvVar1 + -4),FUN_361747e0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(unaff_ESI + 0x100) = 0;
    *(undefined4 *)(unaff_ESI + 0x104) = 0;
  }
  return;
}

