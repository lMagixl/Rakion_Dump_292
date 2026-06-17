
/* WARNING: Removing unreachable block (ram,0x3620b949) */
/* WARNING: Removing unreachable block (ram,0x3620b964) */
/* WARNING: Removing unreachable block (ram,0x3620b973) */
/* WARNING: Removing unreachable block (ram,0x3620b97a) */

void __thiscall FUN_3620b7a0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_18;
  int local_14;
  
  iVar2 = *param_1;
  while (iVar2 == 1) {
    FUN_3620b7a0(this,(int *)param_1[3]);
    param_1 = (int *)param_1[4];
    iVar2 = *param_1;
  }
  local_14 = 0;
  if (0 < param_1[1]) {
    do {
      local_18 = 0;
      iVar2 = *(int *)(param_1[4] + local_14 * 4);
      if (0 < *(int *)this) {
        do {
          iVar3 = *(int *)((int)this + 0x2c);
          puVar10 = *(undefined4 **)(iVar3 + 0x1c);
          puVar1 = (undefined4 *)(*(int *)(iVar2 + 8) + local_18 * 4);
          if (*(int *)(iVar3 + 0x20) - (int)puVar10 >> 2 == 0) {
            iVar4 = *(int *)(iVar3 + 0x18);
            if ((iVar4 == 0) || (uVar7 = (int)puVar10 - iVar4 >> 2, uVar7 < 2)) {
              uVar7 = 1;
            }
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = (int)puVar10 - iVar4 >> 2;
            }
            iVar4 = iVar4 + uVar7;
            iVar5 = iVar4;
            if (iVar4 < 0) {
              iVar5 = 0;
            }
            puVar6 = (undefined4 *)FUN_361bf99c(iVar5 << 2);
            puVar8 = puVar6;
            for (puVar9 = *(undefined4 **)(iVar3 + 0x18); puVar9 != puVar10; puVar9 = puVar9 + 1) {
              FUN_3620a4f0(puVar8,puVar9);
              puVar8 = puVar8 + 1;
            }
            FUN_3620a4c0(puVar8,1,puVar1);
            FUN_3620a490(puVar10,*(undefined4 **)(iVar3 + 0x1c),puVar8 + 1);
            FUN_362040f0();
            operator_delete(*(void **)(iVar3 + 0x18));
            iVar5 = *(int *)(iVar3 + 0x18);
            *(undefined4 **)(iVar3 + 0x20) = puVar6 + iVar4;
            if (iVar5 == 0) {
              *(undefined4 **)(iVar3 + 0x18) = puVar6;
              *(undefined4 **)(iVar3 + 0x1c) = puVar6 + 1;
            }
            else {
              *(undefined4 **)(iVar3 + 0x18) = puVar6;
              *(undefined4 **)(iVar3 + 0x1c) = puVar6 + (*(int *)(iVar3 + 0x1c) - iVar5 >> 2) + 1;
            }
          }
          else {
            FUN_3620a490(puVar10,puVar10,puVar10 + 1);
            FUN_3620a4c0(*(undefined4 **)(iVar3 + 0x1c),
                         1 - ((int)*(undefined4 **)(iVar3 + 0x1c) - (int)puVar10 >> 2),puVar1);
            puVar9 = *(undefined4 **)(iVar3 + 0x1c);
            for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
              *puVar10 = *puVar1;
            }
            *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 4;
          }
          local_18 = local_18 + 1;
        } while (local_18 < *(int *)this);
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_1[1]);
  }
  return;
}

