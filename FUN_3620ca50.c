
void FUN_3620ca50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x14);
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  *puVar1 = 1;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  return;
}

