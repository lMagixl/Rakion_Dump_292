
/* public: void __thiscall CSkeleton::SortSkeletonRecursive(long,long) */

void __thiscall CSkeleton::SortSkeletonRecursive(CSkeleton *this,long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_14;
  int local_c;
  
                    /* 0x170550  3645  ?SortSkeletonRecursive@CSkeleton@@QAEXJJ@Z */
  if (param_1 == -1) {
    DAT_363006a4 = 0;
  }
  iVar7 = DAT_363006a4;
  iVar1 = *(int *)(this + 0x18) + param_2 * 0x18;
  iVar2 = FUN_3600c550((undefined4 *)(iVar1 + 4));
  iVar3 = 0;
  if (3 < iVar2) {
    iVar5 = iVar7 * 0x60;
    local_c = (iVar2 - 4U >> 2) + 1;
    iVar3 = local_c * 4;
    local_14 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)(iVar1 + 8) + local_14);
      if (*(int *)(*(int *)(iVar1 + 8) + 4 + local_14) == param_1) {
        *(undefined4 *)(iVar5 + DAT_36300778) = *puVar6;
        *(undefined4 *)(iVar5 + 4 + DAT_36300778) = puVar6[1];
        *(undefined4 *)(iVar5 + 0x5c + DAT_36300778) = puVar6[0x17];
        puVar8 = puVar6 + 3;
        puVar9 = (undefined4 *)(iVar5 + 0xc + DAT_36300778);
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar8 = puVar6 + 0xf;
        puVar9 = (undefined4 *)(iVar5 + 0x3c + DAT_36300778);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined4 *)(iVar5 + 0x58 + DAT_36300778) = puVar6[0x16];
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x60;
      }
      puVar6 = (undefined4 *)(local_14 + 0x60 + *(int *)(iVar1 + 8));
      if (puVar6[1] == param_1) {
        *(undefined4 *)(iVar5 + DAT_36300778) = *puVar6;
        *(undefined4 *)(iVar5 + 4 + DAT_36300778) = puVar6[1];
        *(undefined4 *)(iVar5 + 0x5c + DAT_36300778) = puVar6[0x17];
        puVar8 = puVar6 + 3;
        puVar9 = (undefined4 *)(iVar5 + 0xc + DAT_36300778);
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar8 = puVar6 + 0xf;
        puVar9 = (undefined4 *)(iVar5 + 0x3c + DAT_36300778);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined4 *)(iVar5 + 0x58 + DAT_36300778) = puVar6[0x16];
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x60;
      }
      puVar6 = (undefined4 *)(local_14 + 0xc0 + *(int *)(iVar1 + 8));
      if (puVar6[1] == param_1) {
        *(undefined4 *)(iVar5 + DAT_36300778) = *puVar6;
        *(undefined4 *)(iVar5 + 4 + DAT_36300778) = puVar6[1];
        *(undefined4 *)(iVar5 + 0x5c + DAT_36300778) = puVar6[0x17];
        puVar8 = puVar6 + 3;
        puVar9 = (undefined4 *)(iVar5 + 0xc + DAT_36300778);
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar8 = puVar6 + 0xf;
        puVar9 = (undefined4 *)(iVar5 + 0x3c + DAT_36300778);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined4 *)(iVar5 + 0x58 + DAT_36300778) = puVar6[0x16];
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x60;
      }
      puVar6 = (undefined4 *)(*(int *)(iVar1 + 8) + local_14 + 0x120);
      if (puVar6[1] == param_1) {
        *(undefined4 *)(iVar5 + DAT_36300778) = *puVar6;
        *(undefined4 *)(iVar5 + 4 + DAT_36300778) = puVar6[1];
        *(undefined4 *)(iVar5 + 0x5c + DAT_36300778) = puVar6[0x17];
        puVar8 = puVar6 + 3;
        puVar9 = (undefined4 *)(iVar5 + 0xc + DAT_36300778);
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar8 = puVar6 + 0xf;
        puVar9 = (undefined4 *)(iVar5 + 0x3c + DAT_36300778);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined4 *)(iVar5 + 0x58 + DAT_36300778) = puVar6[0x16];
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0x60;
      }
      local_14 = local_14 + 0x180;
      local_c = local_c + -1;
      DAT_363006a4 = iVar7;
    } while (local_c != 0);
  }
  if (iVar3 < iVar2) {
    iVar4 = iVar7 * 0x60;
    iVar5 = iVar3 * 0x60;
    local_c = iVar2 - iVar3;
    do {
      puVar6 = (undefined4 *)(*(int *)(iVar1 + 8) + iVar5);
      if (*(int *)(*(int *)(iVar1 + 8) + 4 + iVar5) == param_1) {
        *(undefined4 *)(iVar4 + DAT_36300778) = *puVar6;
        *(undefined4 *)(iVar4 + 4 + DAT_36300778) = puVar6[1];
        *(undefined4 *)(iVar4 + 0x5c + DAT_36300778) = puVar6[0x17];
        puVar8 = puVar6 + 3;
        puVar9 = (undefined4 *)(iVar4 + 0xc + DAT_36300778);
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar8 = puVar6 + 0xf;
        puVar9 = (undefined4 *)(iVar4 + 0x3c + DAT_36300778);
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        *(undefined4 *)(iVar4 + 0x58 + DAT_36300778) = puVar6[0x16];
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 0x60;
      }
      iVar5 = iVar5 + 0x60;
      local_c = local_c + -1;
      DAT_363006a4 = iVar7;
    } while (local_c != 0);
  }
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      if (*(int *)(*(int *)(iVar1 + 8) + 4 + iVar7) == param_1) {
        SortSkeletonRecursive(this,*(long *)(*(int *)(iVar1 + 8) + iVar7),param_2);
      }
      iVar7 = iVar7 + 0x60;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

