
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl pwAbs(float) */

float __cdecl pwAbs(float param_1)

{
                    /* 0x18dd10  4268  ?pwAbs@@YAMM@Z */
  if (param_1 < _DAT_3622376c) {
    param_1 = -param_1;
  }
  return param_1;
}

