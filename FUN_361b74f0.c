
undefined4 * __cdecl FUN_361b74f0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if (((1 < param_2) && (*(char *)(param_1 + -2 + param_2) == '\0')) &&
     (*(char *)(param_1 + -1 + param_2) == '\0')) {
    puVar1 = (undefined4 *)FUN_361b7370();
    if (puVar1 == (undefined4 *)0x0) {
      FUN_361b7340();
    }
    puVar1[3] = param_2 - 2;
    puVar1[1] = param_1;
    puVar1[2] = param_1;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[4] = param_2 - 2;
    puVar1[6] = 0;
    puVar1[7] = 1;
    puVar1[8] = 0;
    puVar1[9] = 0;
    FUN_361b7440((int)puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

