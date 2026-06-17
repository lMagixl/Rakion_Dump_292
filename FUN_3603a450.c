
void __cdecl FUN_3603a450(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_3603a330();
  puVar2 = (undefined4 *)(iVar1 * 0x1c + DAT_362bec74);
  puVar2[1] = param_2;
  *puVar2 = 3;
  puVar2[2] = param_1;
  return;
}

