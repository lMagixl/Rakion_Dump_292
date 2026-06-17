
void FUN_36177ba0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xf8) != 0) {
    operator_delete__(*(void **)(unaff_ESI + 0xfc));
    *(undefined4 *)(unaff_ESI + 0xf8) = 0;
    *(undefined4 *)(unaff_ESI + 0xfc) = 0;
  }
  if (*(int *)(unaff_ESI + 0xf0) != 0) {
    operator_delete__(*(void **)(unaff_ESI + 0xf4));
    *(undefined4 *)(unaff_ESI + 0xf0) = 0;
    *(undefined4 *)(unaff_ESI + 0xf4) = 0;
  }
  return;
}

