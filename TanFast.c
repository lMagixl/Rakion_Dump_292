
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl TanFast(float) */

float __cdecl TanFast(float param_1)

{
  float10 fVar1;
  
                    /* 0x1d10  3795  ?TanFast@@YAMM@Z */
  fVar1 = (float10)fptan((float10)param_1 * (float10)_DAT_3622300c);
  return (float)fVar1;
}

