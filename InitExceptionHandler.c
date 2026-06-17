
/* void __cdecl InitExceptionHandler(void) */

void __cdecl InitExceptionHandler(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
                    /* 0x3b770  2316  ?InitExceptionHandler@@YAXXZ */
  DAT_362bec90 = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_3603b6f0);
  GetModuleFileNameA((HMODULE)0x0,s_Crash_rpt_362a2640,0x104);
  pcVar2 = strrchr(s_Crash_rpt_362a2640,0x2e);
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (2 < (uint)((int)pcVar3 - (int)(pcVar2 + 2))) {
      builtin_strncpy(pcVar2 + 1,"RPT",4);
    }
  }
  return;
}

