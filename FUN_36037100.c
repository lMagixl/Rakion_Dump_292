
undefined4 FUN_36037100(void)

{
  undefined4 uVar1;
  
  FUN_361b7490((&DAT_362be590)[DAT_362a261c * 5]);
  StringFree((char *)(&DAT_362be594)[DAT_362a261c * 5]);
  StringFree((char *)(&DAT_362be598)[DAT_362a261c * 5]);
  uVar1 = (&DAT_362be5a0)[DAT_362a261c * 5];
  DAT_362a261c = DAT_362a261c + -1;
  if (-1 < DAT_362a261c) {
    FUN_361b7440((&DAT_362be590)[DAT_362a261c * 5]);
  }
  return uVar1;
}

