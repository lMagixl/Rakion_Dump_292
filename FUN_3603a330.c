
void FUN_3603a330(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_3603a060((undefined4 *)&DAT_362bec70);
  puVar2 = (undefined4 *)(iVar1 * 0x1c + DAT_362bec74);
  *puVar2 = 0;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  puVar2[4] = 0xffffffff;
  puVar2[5] = 0xffffffff;
  puVar2[6] = 0xffffffff;
  return;
}

