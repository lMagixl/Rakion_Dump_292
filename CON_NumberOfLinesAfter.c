
/* long __cdecl CON_NumberOfLinesAfter(float) */

long __cdecl CON_NumberOfLinesAfter(float param_1)

{
  int iVar1;
  
                    /* 0x22340  1101  ?CON_NumberOfLinesAfter@@YAJM@Z */
  if (_pConsole == (CConsole *)0x0) {
    return 0;
  }
  iVar1 = FUN_36022060(_pConsole,param_1);
  return iVar1;
}

