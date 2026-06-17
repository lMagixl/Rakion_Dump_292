
/* long __cdecl CON_GetBufferSize(void) */

long __cdecl CON_GetBufferSize(void)

{
  long lVar1;
  
                    /* 0x22030  1099  ?CON_GetBufferSize@@YAJXZ */
  if (_pConsole == (CConsole *)0x0) {
    return 1;
  }
  lVar1 = CConsole::GetBufferSize(_pConsole);
  return lVar1;
}

