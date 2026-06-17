
undefined4 FUN_361d2df2(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *extraout_ECX;
  uint uVar6;
  int unaff_EBP;
  uint uVar7;
  
  FUN_3620d000();
  iVar3 = extraout_ECX[1];
  iVar1 = *extraout_ECX;
  iVar2 = *(int *)(iVar3 + 0x1058);
  if (((iVar2 == *(int *)(iVar1 + 0x1058)) && (*(int *)(iVar3 + 0x105c) == *(int *)(iVar1 + 0x105c))
      ) && (*(int *)(iVar3 + 0x1060) == *(int *)(iVar1 + 0x1060))) {
    iVar3 = FUN_361bf99c(iVar2 << 4);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    else {
      FUN_36006680(iVar3,0x10,iVar2,&LAB_361c12a5);
      *(int *)(unaff_EBP + -0x10) = iVar3;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar6 = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (*(int *)(extraout_ECX[1] + 0x1060) != 0) {
        uVar4 = *(uint *)(extraout_ECX[1] + 0x105c);
        do {
          uVar7 = 0;
          if (uVar4 != 0) {
            do {
              (**(code **)(*(int *)*extraout_ECX + 4))
                        (uVar7,uVar6,*(undefined4 *)(unaff_EBP + -0x10));
              (**(code **)(*(int *)extraout_ECX[1] + 8))
                        (uVar7,uVar6,*(undefined4 *)(unaff_EBP + -0x10));
              uVar4 = *(uint *)(extraout_ECX[1] + 0x105c);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar4);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(extraout_ECX[1] + 0x1060));
      }
      operator_delete(*(void **)(unaff_EBP + -0x10));
      uVar5 = 0;
      goto LAB_361d2ed4;
    }
  }
  uVar5 = 0x80004005;
LAB_361d2ed4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}

