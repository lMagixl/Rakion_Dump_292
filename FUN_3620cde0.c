
int __cdecl FUN_3620cde0(uint param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)(param_1 >> 8);
  if ((param_1 != 1) && (param_1 < 2)) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,1);
}

