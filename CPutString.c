
/* void __cdecl CPutString(char const *) */

void __cdecl CPutString(char *param_1)

{
                    /* 0x22320  1103  ?CPutString@@YAXPBD@Z */
  if (_pConsole != (CConsole *)0x0) {
    FUN_36022150(_pConsole,param_1);
  }
  return;
}

