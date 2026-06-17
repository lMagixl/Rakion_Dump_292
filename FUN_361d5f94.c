
undefined4 FUN_361d5f94(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_3620d000();
  if (*(int *)(extraout_ECX + 8) != *(int *)(*(int *)(unaff_EBP + 8) + 8)) {
    iVar1 = *(int *)(extraout_ECX + 0x1058);
    iVar2 = FUN_361bf99c(iVar1 << 4);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_36006680(iVar2,0x10,iVar1,&LAB_361c12a5);
      iVar3 = iVar2;
    }
    *(int *)(extraout_ECX + 0x104c) = iVar3;
    if (iVar3 == 0) {
      uVar4 = 0x8007000e;
      goto LAB_361d6000;
    }
    *(undefined4 *)(extraout_ECX + 0x1048) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 8);
  }
  uVar4 = 0;
LAB_361d6000:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}

