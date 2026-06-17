
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36134860(void)

{
  int iVar1;
  int unaff_ESI;
  int iVar2;
  
  if ((*(int *)(*(int *)(*(int *)(unaff_ESI + 0x38) + 0x14) + 0x674) ==
       *(int *)(unaff_ESI + 0x38) + 0x18) && ((*(byte *)(unaff_ESI + 0x44) & 0x10) == 0)) {
    iVar2 = DAT_362fd5e0 + 1;
    DAT_362fd5e0 = iVar2;
    iVar1 = FUN_360de590((undefined4 *)&DAT_362fd5d8);
    if (iVar1 < iVar2) {
      iVar1 = FUN_360de590((undefined4 *)&DAT_362fd5d8);
      FUN_360de680(&DAT_362fd5d8,iVar1 + _DAT_362fd5e4);
    }
    *(int *)(DAT_362fd5dc + -4 + DAT_362fd5e0 * 4) = unaff_ESI;
    *(uint *)(unaff_ESI + 0x44) = *(uint *)(unaff_ESI + 0x44) | 0x10;
  }
  return;
}

