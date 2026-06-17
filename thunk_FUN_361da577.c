
void thunk_FUN_361da577(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_3620d000();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_36249af0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_361d9296((int)extraout_ECX);
  if ((void *)extraout_ECX[0x41b] != (void *)0x0) {
    operator_delete((void *)extraout_ECX[0x41b]);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_361d547e(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

