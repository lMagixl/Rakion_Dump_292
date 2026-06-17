
/* void __cdecl CON_DiscardLastLineTimes(void) */

void __cdecl CON_DiscardLastLineTimes(void)

{
                    /* 0x22000  1097  ?CON_DiscardLastLineTimes@@YAXXZ */
  if (_pConsole != (CConsole *)0x0) {
    FUN_36021e50((int)_pConsole);
    return;
  }
  return;
}

