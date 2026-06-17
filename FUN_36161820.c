
void FUN_36161820(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_18 [4];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  float local_8;
  int local_4;
  
  FUN_360605c0(local_18,0xff800000);
  local_10 = FUN_3615a2c0((undefined4 *)(DAT_362fdfe0 + 0x20));
  if (0 < local_10) {
    iVar4 = 0;
    do {
      piVar5 = (int *)(*(int *)(DAT_362fdfe0 + 0x24) + iVar4);
      iVar2 = FUN_3600c3d0(piVar5 + 1);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          piVar1 = (int *)(piVar5[2] + iVar3 * 8);
          if (*piVar5 == DAT_362a6bac) {
            local_8 = (float)piVar1[1];
            local_c = 0x437f0000;
            local_4 = (int)ROUND(local_8 * 255.0);
            local_14 = CONCAT13((undefined1)local_4,local_18._0_3_);
            *(undefined4 *)(DAT_362fe084 + *piVar1 * 4) = local_14;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
      iVar4 = iVar4 + 0xc;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

