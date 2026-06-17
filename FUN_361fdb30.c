
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361fdb30(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  _DAT_36383d38 = param_1;
  _DAT_36383d3c = param_2;
  _DAT_36383d40 = param_3;
  fVar1 = SQRT(param_3 * param_3 + param_2 * param_2 + param_1 * param_1);
  if ((fVar1 != (float)_DAT_3624cda8) && (fVar1 != (float)_DAT_3624cdd0)) {
    _DAT_36383d38 = param_1 / fVar1;
    _DAT_36383d3c = param_2 / fVar1;
    _DAT_36383d40 = param_3 / fVar1;
  }
  return;
}

