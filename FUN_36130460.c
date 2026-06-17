
void FUN_36130460(void)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = FUN_360d8720(0x362fce74);
  if (0 < iVar2) {
    do {
      DAT_362fce7c = DAT_362fce7c + -1;
      pvVar1 = *(void **)(DAT_362fce78 + DAT_362fce7c * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_3612f550((int)pvVar1);
        operator_delete(pvVar1);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_36130760((undefined4 *)&DAT_362fce74);
  return;
}

