
undefined4 * __cdecl FUN_361b75e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_361b7370();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_361b7340();
  }
  puVar1[3] = param_2;
  iVar2 = FUN_361b7370();
  puVar1[1] = iVar2;
  if (iVar2 == 0) {
    FUN_361b7340();
  }
  puVar1[5] = 1;
  FUN_361b74c0(puVar1,param_1);
  return puVar1;
}

