
int FUN_36022b40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = FUN_36022580(0x362b8fdc);
  if (0 < iVar1) {
    do {
      iVar2 = FUN_36022660(&DAT_362b8fdc,iVar4);
      if (*(int *)(iVar2 + 0xc) != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}

