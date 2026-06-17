
void __cdecl FUN_3603a480(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_3603a330();
  puVar2 = (undefined4 *)(iVar1 * 0x1c + DAT_362bec74);
  puVar2[2] = param_1;
  *puVar2 = 2;
  puVar2[3] = 0xffffffff;
  puVar2[4] = 0xffffffff;
  return;
}

