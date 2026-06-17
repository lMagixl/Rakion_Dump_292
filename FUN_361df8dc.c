
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361df8dc(int param_1,double param_2,double param_3)

{
  if (_DAT_3624b400 < ABS(param_2 * param_3 - _DAT_36227d28)) {
    *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 0x20;
  }
  *(float *)(param_1 + 0x130) = (float)param_3;
  *(float *)(param_1 + 0x134) = (float)param_2;
  return;
}

