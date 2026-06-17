
undefined4 FUN_36028870(void)

{
  char *pcVar1;
  int unaff_ESI;
  
  pcVar1 = StringDuplicate(&DAT_36224fc4);
  StringFree(*(char **)(unaff_ESI + 0xc));
  *(char **)(unaff_ESI + 0xc) = pcVar1;
  pcVar1 = StringDuplicate(&DAT_36224fc9);
  StringFree(*(char **)(unaff_ESI + 0x10));
  *(char **)(unaff_ESI + 0x10) = pcVar1;
  FUN_3600bc00((void *)(unaff_ESI + 0x14),1);
  return 1;
}

