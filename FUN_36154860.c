
void FUN_36154860(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (-1 < *(int *)(unaff_ESI + 0x3c)) {
    FUN_36082840(*(int *)(unaff_ESI + 0x38));
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x40) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  iVar1 = FUN_3615a240((undefined4 *)(unaff_ESI + 0x10));
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      *(undefined4 *)(*(int *)(unaff_ESI + 0x14) + 4 + iVar2) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

