
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_360608a0(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
  DAT_362bf8a8 = *puVar1;
  DAT_362bf8ac = puVar1[1];
  _DAT_362bf8a0 = 1;
  FUN_3607bbd0(DAT_362bf878,0x100,0x100,DAT_362bf870,DAT_362bf89c);
  _DAT_362bf8a0 = 0;
  puVar1 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
  return (float10)_DAT_36228788 /
         ((float10)CONCAT44((puVar1[1] - DAT_362bf8ac) - (uint)(*puVar1 < DAT_362bf8a8),
                            *puVar1 - DAT_362bf8a8) / (float10)*(longlong *)_pTimer);
}

