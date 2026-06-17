
void FUN_361616a0(void)

{
  int iVar1;
  undefined4 local_4;
  
  FUN_360605c0(&local_4,0xffffffff);
  iVar1 = 0;
  if (0 < DAT_362fe1c8) {
    do {
      *(undefined4 *)(DAT_362fe084 + iVar1 * 4) = local_4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_362fe1c8);
  }
  return;
}

