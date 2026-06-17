
int FUN_360c0c00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_360c5ad0(&DAT_362cbbb0);
  iVar2 = DAT_362cbbb4;
  if (0 < iVar1) {
    do {
      if (*(int *)(iVar2 + 0xc) == 0) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < iVar1);
  }
  return DAT_362cbbb4;
}

