
void FUN_36083610(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_36061f20(0x362c54d8);
  iVar1 = (int)(iVar1 * 6 + (iVar1 * 6 >> 0x1f & 3U)) >> 2;
  if (0 < iVar1) {
    if ((*(int *)(_pGfx + 0xa38) == 0) && (DAT_362c53c8 != 0)) {
      uVar2 = FUN_36061f20(0x362c54d8);
      FUN_36082980(0,uVar2);
      return;
    }
    iVar3 = FUN_36061f30(0x362c5548);
    if (iVar3 < iVar1) {
      FUN_36083550(iVar1 - iVar3);
    }
    FUN_36082980(DAT_362c554c,iVar1);
  }
  return;
}

