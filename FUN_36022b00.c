
void FUN_36022b00(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_36022580(0x362b8fdc);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_36022660(&DAT_362b8fdc,iVar2);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_36022580(0x362b8fdc);
    } while (iVar2 < iVar1);
  }
  return;
}

