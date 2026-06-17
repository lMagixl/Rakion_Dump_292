
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3616b710(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_362fe998 + 1;
  DAT_362fe998 = iVar3;
  iVar2 = FUN_3616e1f0((undefined4 *)&DAT_362fe990);
  if (iVar2 < iVar3) {
    iVar3 = FUN_3616e1f0((undefined4 *)&DAT_362fe990);
    FUN_3616ea80(&DAT_362fe990,iVar3 + _DAT_362fe99c);
    iVar3 = DAT_362fe998;
  }
  puVar1 = (undefined4 *)(iVar3 * 0x8c + -0x8c + DAT_362fe994);
  *puVar1 = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 1;
  puVar1[2] = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x22] = 0;
  iVar3 = DAT_362fe9b8 + 1;
  DAT_362fe9b8 = iVar3;
  iVar2 = FUN_361601d0((undefined4 *)&DAT_362fe9b0);
  if (iVar2 < iVar3) {
    iVar3 = FUN_361601d0((undefined4 *)&DAT_362fe9b0);
    FUN_3616f6d0(&DAT_362fe9b0,iVar3 + _DAT_362fe9bc);
    iVar3 = DAT_362fe9b8;
  }
  puVar1 = (undefined4 *)(iVar3 * 0xe8 + -0xe8 + DAT_362fe9b4);
  puVar1[1] = 0xffffffff;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}

