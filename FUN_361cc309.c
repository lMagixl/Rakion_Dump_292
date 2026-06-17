
void FUN_361cc309(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_3620d000();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_361dbc5a(extraout_ECX + 0x21);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_361dbb8f(extraout_ECX + 0x1d);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_361dbb8f(extraout_ECX + 0x19);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_361dbb8f(extraout_ECX + 0x15);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_361dbb8f(extraout_ECX + 0x11);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_361dbb8f(extraout_ECX + 0xd);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_361dbb8f(extraout_ECX + 9);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_361dbb8f(extraout_ECX + 5);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_361dbc5a(extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

