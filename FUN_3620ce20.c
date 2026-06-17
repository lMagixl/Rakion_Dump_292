
uint __cdecl FUN_3620ce20(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = uVar1 * 2 | param_1 & 1;
    param_1 = param_1 >> 1;
  }
  return uVar1;
}

