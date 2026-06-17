
void FUN_36161970(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  FUN_360605c0(&local_4,0xff0080);
  iVar2 = DAT_362fdfe4[1];
  if ((DAT_362fdfe4[2] == DAT_362a6bac) && (0 < iVar2)) {
    iVar1 = *DAT_362fdfe4 * 4;
    do {
      *(undefined4 *)(iVar1 + DAT_362fe084) = local_4;
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

