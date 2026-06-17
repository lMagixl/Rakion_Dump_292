
undefined4 FUN_361d2ee3(void)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_3620d000();
  if ((char)extraout_ECX[2] == '\x01') {
    iVar2 = extraout_ECX[1];
    iVar3 = *extraout_ECX;
    uVar5 = *(uint *)(iVar2 + 0x1058);
    uVar7 = *(uint *)(iVar3 + 0x1058);
    *(uint *)(unaff_EBP + -0x18) = uVar5;
    if (uVar5 <= uVar7) {
      *(uint *)(unaff_EBP + -0x18) = uVar7;
    }
    uVar5 = *(uint *)(iVar2 + 0x105c);
    uVar7 = *(uint *)(iVar3 + 0x105c);
    *(uint *)(unaff_EBP + -0x20) = uVar5;
    if (uVar7 <= uVar5) {
      *(uint *)(unaff_EBP + -0x20) = uVar7;
    }
    uVar5 = *(uint *)(iVar2 + 0x1060);
    uVar7 = *(uint *)(iVar3 + 0x1060);
    *(uint *)(unaff_EBP + -0x1c) = uVar5;
    if (uVar7 <= uVar5) {
      *(uint *)(unaff_EBP + -0x1c) = uVar7;
    }
    uVar5 = *(int *)(unaff_EBP + -0x18) << 4;
    iVar2 = FUN_361bf99c(uVar5);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    else {
      FUN_36006680(iVar2,0x10,*(int *)(unaff_EBP + -0x18),&LAB_361c12a5);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      uVar1 = 0x80004005;
    }
    else {
      iVar2 = *(int *)(extraout_ECX[1] + 0x1058);
      *(int *)(unaff_EBP + -0x18) = iVar2;
      iVar2 = FUN_361bf99c(iVar2 << 4);
      *(int *)(unaff_EBP + -0x14) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      else {
        FUN_36006680(iVar2,0x10,*(int *)(unaff_EBP + -0x18),&LAB_361c12a5);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        operator_delete(*(void **)(unaff_EBP + -0x10));
        uVar1 = 0x80004005;
      }
      else {
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        puVar6 = *(undefined4 **)(unaff_EBP + -0x10);
        for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        puVar6 = *(undefined4 **)(unaff_EBP + -0x18);
        for (uVar5 = (uint)(*(int *)(extraout_ECX[1] + 0x1058) << 4) >> 2; uVar5 != 0;
            uVar5 = uVar5 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        uVar5 = 0;
        if (iVar2 != 0) {
          do {
            uVar5 = *(uint *)(unaff_EBP + -0x20);
            uVar7 = 0;
            if (uVar5 != 0) {
              do {
                (**(code **)(*(int *)*extraout_ECX + 4))
                          (uVar7,*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x10));
                (**(code **)(*(int *)extraout_ECX[1] + 8))
                          (uVar7,*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x10));
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar5);
            }
            piVar4 = (int *)extraout_ECX[1];
            if (uVar5 < (uint)piVar4[0x417]) {
              do {
                (**(code **)(*piVar4 + 8))
                          (uVar5,*(undefined4 *)(unaff_EBP + -0x14),
                           *(undefined4 *)(unaff_EBP + -0x18));
                piVar4 = (int *)extraout_ECX[1];
                uVar5 = uVar5 + 1;
              } while (uVar5 < (uint)piVar4[0x417]);
            }
            uVar5 = *(uint *)(unaff_EBP + -0x1c);
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          } while (*(uint *)(unaff_EBP + -0x14) < uVar5);
        }
        piVar4 = (int *)extraout_ECX[1];
        if (uVar5 < (uint)piVar4[0x418]) {
          uVar7 = piVar4[0x417];
          do {
            uVar8 = 0;
            if (uVar7 != 0) {
              do {
                (**(code **)(*piVar4 + 8))(uVar8,uVar5,*(undefined4 *)(unaff_EBP + -0x18));
                piVar4 = (int *)extraout_ECX[1];
                uVar7 = piVar4[0x417];
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar7);
            }
            piVar4 = (int *)extraout_ECX[1];
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)piVar4[0x418]);
        }
        operator_delete(*(void **)(unaff_EBP + -0x10));
        operator_delete(*(void **)(unaff_EBP + -0x18));
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x80004005;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}

