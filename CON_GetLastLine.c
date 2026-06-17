
/* class CTString __cdecl CON_GetLastLine(long) */

long __cdecl CON_GetLastLine(long param_1)

{
  char *pcVar1;
  
                    /* 0x21fc0  1100  ?CON_GetLastLine@@YA?AVCTString@@J@Z */
  if (_pConsole == (CConsole *)0x0) {
    pcVar1 = StringDuplicate(&DAT_3622401f);
    *(char **)param_1 = pcVar1;
    return param_1;
  }
  CConsole::GetLastLine(_pConsole,param_1);
  return param_1;
}

