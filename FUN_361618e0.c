
void FUN_361618e0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  undefined4 local_4;
  
  FUN_360605c0(&local_4,0x80ffff);
  local_8 = FUN_3615a300((undefined4 *)(DAT_362fdfe0 + 0x28));
  if (0 < local_8) {
    iVar4 = 0;
    do {
      piVar3 = (int *)(*(int *)(DAT_362fdfe0 + 0x2c) + iVar4);
      iVar1 = FUN_3600c450(piVar3 + 2);
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          if (*piVar3 == DAT_362a6bac) {
            *(undefined4 *)(DAT_362fe084 + *(int *)(iVar2 + piVar3[3]) * 4) = local_4;
          }
          iVar2 = iVar2 + 0x1c;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      iVar4 = iVar4 + 0x10;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

