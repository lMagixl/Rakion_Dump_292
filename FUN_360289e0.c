
undefined4 FUN_360289e0(void)

{
  char *pcVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = 3;
  FUN_3600bc00(unaff_ESI + 5,7);
  pcVar1 = StringDuplicate(s_Second_mouse_36224fe0);
  StringFree((char *)unaff_ESI[3]);
  unaff_ESI[3] = pcVar1;
  pcVar1 = StringDuplicate(s_Mouse2_36224ff0);
  StringFree((char *)unaff_ESI[4]);
  unaff_ESI[4] = pcVar1;
  return 1;
}

