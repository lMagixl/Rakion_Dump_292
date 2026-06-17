
/* char const * __cdecl CON_GetBuffer(void) */

char * __cdecl CON_GetBuffer(void)

{
  char *pcVar1;
  
                    /* 0x22010  1098  ?CON_GetBuffer@@YAPBDXZ */
  if (_pConsole == (CConsole *)0x0) {
    return &DAT_36224020;
  }
  pcVar1 = CConsole::GetBuffer(_pConsole);
  return pcVar1;
}

