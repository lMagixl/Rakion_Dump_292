
undefined4 FUN_36028990(void)

{
  char *pcVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = 2;
  FUN_3600bc00(unaff_ESI + 5,0xb);
  pcVar1 = StringDuplicate(s_Mouse_36224fd8);
  StringFree((char *)unaff_ESI[3]);
  unaff_ESI[3] = pcVar1;
  pcVar1 = StringDuplicate(&DAT_36224fde);
  StringFree((char *)unaff_ESI[4]);
  unaff_ESI[4] = pcVar1;
  return 1;
}

