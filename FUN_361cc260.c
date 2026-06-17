
undefined4 * FUN_361cc260(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_3620d000();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_361dbc47(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_361dbb7f(extraout_ECX + 5);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_361dbb7f(extraout_ECX + 9);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_361dbb7f(extraout_ECX + 0xd);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_361dbb7f(extraout_ECX + 0x11);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_361dbb7f(extraout_ECX + 0x15);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_361dbb7f(extraout_ECX + 0x19);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_361dbb7f(extraout_ECX + 0x1d);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_361dbc47(extraout_ECX + 0x21);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  DAT_36383c48 = extraout_ECX;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  return extraout_ECX;
}

