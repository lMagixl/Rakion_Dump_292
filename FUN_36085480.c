
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36085480(uint param_1,int param_2)

{
  uint local_8;
  int iStack_4;
  
  if (*(int *)(_pGfx + 0xb30) != 0) {
    if (_DAT_36223384 <= _DAT_362a41a0) {
      if (_DAT_3622dcf8 < _DAT_362a41a0) {
        _DAT_362a41a0 = 999.0;
      }
      CTimer::GetHighPrecisionTimer(_pTimer);
      if ((float10)_DAT_362a41a0 <
          (float10)CONCAT44((iStack_4 - param_2) - (uint)(local_8 < param_1),local_8 - param_1) /
          (float10)*(longlong *)_pTimer) {
        return 1;
      }
    }
    else {
      _DAT_362a41a0 = 0.0;
    }
  }
  return 0;
}

