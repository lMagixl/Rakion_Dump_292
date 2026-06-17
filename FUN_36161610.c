
void FUN_36161610(void)

{
  int iVar1;
  uint local_4;
  
  FUN_36161520(&local_4);
  iVar1 = 0;
  if (0 < DAT_362fe1c8) {
    do {
      *(uint *)(DAT_362fe084 + iVar1 * 4) = local_4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_362fe1c8);
  }
  return;
}

