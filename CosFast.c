
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl CosFast(float) */

float __cdecl CosFast(float param_1)

{
  float10 fVar1;
  
                    /* 0x1d00  1404  ?CosFast@@YAMM@Z */
  fVar1 = (float10)fcos((float10)param_1 * (float10)_DAT_3622300c);
  return (float)fVar1;
}

