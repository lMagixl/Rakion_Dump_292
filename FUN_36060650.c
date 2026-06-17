
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_36060650(void)

{
  uint *puVar1;
  
  _DAT_362bf8a0 = 0;
  puVar1 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
  return (float10)CONCAT44((puVar1[1] - DAT_362bf8ac) - (uint)(*puVar1 < DAT_362bf8a8),
                           *puVar1 - DAT_362bf8a8) / (float10)*(longlong *)_pTimer;
}

