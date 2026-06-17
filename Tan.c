
/* float __cdecl Tan(float) */

float __cdecl Tan(float param_1)

{
  float fVar1;
  float fVar2;
  
                    /* 0x48ce0  3794  ?Tan@@YAMM@Z */
  fVar1 = Sin(param_1);
  fVar2 = Cos(param_1);
  return fVar1 / fVar2;
}

