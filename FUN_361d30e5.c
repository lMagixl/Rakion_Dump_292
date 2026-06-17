
undefined4 FUN_361d30e5(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *extraout_ECX;
  int unaff_EBP;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  FUN_3620d000();
  if ((char)extraout_ECX[2] == '\x02') {
    iVar1 = *(int *)(*extraout_ECX + 0x1058);
    iVar5 = FUN_361bf99c(iVar1 << 4);
    *(int *)(unaff_EBP + -0x30) = iVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar5 == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    else {
      FUN_36006680(iVar5,0x10,iVar1,&LAB_361c12a5);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x30);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      uVar4 = 0x8007000e;
    }
    else {
      iVar1 = *(int *)(extraout_ECX[1] + 0x1058);
      iVar5 = FUN_361bf99c(iVar1 << 4);
      *(int *)(unaff_EBP + -0x30) = iVar5;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar5 == 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      else {
        FUN_36006680(iVar5,0x10,iVar1,&LAB_361c12a5);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x30);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        operator_delete(*(void **)(unaff_EBP + -0x10));
        uVar4 = 0x8007000e;
      }
      else {
        iVar1 = *extraout_ECX;
        iVar5 = extraout_ECX[1];
        iVar2 = *(int *)(iVar1 + 0x1058);
        uVar7 = *(uint *)(iVar5 + 0x1058);
        uVar9 = *(uint *)(iVar5 + 0x105c);
        uVar3 = *(uint *)(iVar5 + 0x1060);
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(uint *)(unaff_EBP + -0x34) = (uint)(iVar2 << 0x10) / uVar7;
        *(uint *)(unaff_EBP + -0x38) = (uint)(*(int *)(iVar1 + 0x105c) << 0x10) / uVar9;
        *(uint *)(unaff_EBP + -0x3c) = (uint)(*(int *)(iVar1 + 0x1060) << 0x10) / uVar3;
        if (uVar3 != 0) {
          do {
            *(undefined4 *)(unaff_EBP + -0x2c) = 0xffffffff;
            uVar7 = 0;
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            if (uVar9 != 0) {
              do {
                *(undefined4 *)(unaff_EBP + -0x20) = 0;
                *(undefined4 *)(unaff_EBP + -0x24) = 0;
                if (((*(uint *)(unaff_EBP + -0x2c) ^ uVar7) & 0xffff0000) != 0) {
                  (**(code **)(*(int *)*extraout_ECX + 4))
                            (uVar7 >> 0x10,*(uint *)(unaff_EBP + -0x28) >> 0x10,
                             *(undefined4 *)(unaff_EBP + -0x10));
                  *(uint *)(unaff_EBP + -0x2c) = uVar7;
                }
                if (*(int *)(extraout_ECX[1] + 0x1058) != 0) {
                  puVar6 = *(undefined4 **)(unaff_EBP + -0x14);
                  do {
                    uVar7 = *(uint *)(unaff_EBP + -0x20);
                    *(int *)(unaff_EBP + -0x20) =
                         *(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x34);
                    puVar8 = (undefined4 *)((uVar7 >> 0x10) * 0x10 + *(int *)(unaff_EBP + -0x10));
                    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
                    uVar7 = *(uint *)(unaff_EBP + -0x24);
                    *puVar6 = *puVar8;
                    puVar6[1] = puVar8[1];
                    puVar6[2] = puVar8[2];
                    puVar6[3] = puVar8[3];
                    puVar6 = puVar6 + 4;
                  } while (uVar7 < *(uint *)(extraout_ECX[1] + 0x1058));
                }
                (**(code **)(*(int *)extraout_ECX[1] + 8))
                          (*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x1c),
                           *(undefined4 *)(unaff_EBP + -0x14));
                uVar7 = *(int *)(unaff_EBP + -0x30) + *(int *)(unaff_EBP + -0x38);
                iVar1 = extraout_ECX[1];
                *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
                uVar9 = *(uint *)(iVar1 + 0x105c);
                *(uint *)(unaff_EBP + -0x30) = uVar7;
              } while (*(uint *)(unaff_EBP + -0x18) < uVar9);
            }
            *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x3c);
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
          } while (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(extraout_ECX[1] + 0x1060));
        }
        operator_delete(*(void **)(unaff_EBP + -0x10));
        operator_delete(*(void **)(unaff_EBP + -0x14));
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0x80004005;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}

