
uint __cdecl FUN_3614c130(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(char *)(param_1 + 0x5c) == 'w') {
    uVar1 = FUN_3614bf00(4);
    if (uVar1 == 0) {
      FUN_3614c0c0(*(FILE **)(param_1 + 0x40));
      FUN_3614c0c0(*(FILE **)(param_1 + 0x40));
    }
  }
  uVar1 = FUN_3614bc30();
  return uVar1;
}

