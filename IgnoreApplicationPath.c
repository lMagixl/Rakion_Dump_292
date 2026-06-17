
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl IgnoreApplicationPath(void) */

void __cdecl IgnoreApplicationPath(void)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3dd40  2278  ?IgnoreApplicationPath@@YAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362108c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36226e55);
  local_4 = 0;
  pcVar2 = StringDuplicate(pcVar1);
  StringFree(__fnmApplicationPath);
  DAT_362bf088 = 0;
  local_4 = 0xffffffff;
  __fnmApplicationPath = pcVar2;
  StringFree(pcVar1);
  ExceptionList = local_c;
  return;
}

