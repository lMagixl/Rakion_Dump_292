
/* void __cdecl STAT_UIstart(void) */

void __cdecl STAT_UIstart(void)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x3ba90  3191  ?STAT_UIstart@@YAXXZ */
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar2 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar1 + 0x2b8) = *puVar2;
    *(undefined4 *)(iVar1 + 700) = puVar2[1];
  }
  return;
}

