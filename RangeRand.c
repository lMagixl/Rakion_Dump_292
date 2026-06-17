
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl RangeRand(float,float) */

float __cdecl RangeRand(float param_1,float param_2)

{
  int iVar1;
  
                    /* 0x18dce0  2939  ?RangeRand@@YAMMM@Z */
  iVar1 = rand_();
  return (param_2 - param_1) * (float)iVar1 * _DAT_3623193c + param_1;
}

