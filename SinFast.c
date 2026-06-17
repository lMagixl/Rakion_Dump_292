
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl SinFast(float) */

float __cdecl SinFast(float param_1)

{
  float10 fVar1;
  
                    /* 0x1cf0  3639  ?SinFast@@YAMM@Z */
  fVar1 = (float10)fsin((float10)param_1 * (float10)_DAT_3622300c);
  return (float)fVar1;
}

