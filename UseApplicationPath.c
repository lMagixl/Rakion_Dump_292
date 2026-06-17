
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl UseApplicationPath(void) */

void __cdecl UseApplicationPath(void)

{
  char *pcVar1;
  
                    /* 0x3dd00  3933  ?UseApplicationPath@@YAXXZ */
  pcVar1 = StringDuplicate(DAT_362bf118);
  StringFree(__fnmApplicationPath);
  __fnmApplicationPath = pcVar1;
  DAT_362bf088 = DAT_362bf11c;
  return;
}

