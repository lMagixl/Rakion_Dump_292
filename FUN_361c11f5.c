
int FUN_361c11f5(void)

{
  int unaff_EBP;
  int iVar1;
  
  FUN_3620d000();
  FUN_361cece9((undefined4 *)(unaff_EBP + -0x70));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_361d4c71((undefined4 *)(unaff_EBP + -0x1c));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(int *)(unaff_EBP + 8) == 0) || (*(int *)(unaff_EBP + 0x10) == 0)) {
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_361d4d0b((void *)(unaff_EBP + -0x1c),(undefined4 *)(unaff_EBP + -0xbc),
                         *(int **)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                         *(uint **)(unaff_EBP + 0x18),0,1);
    if (((-1 < iVar1) &&
        (iVar1 = FUN_361ced77((void *)(unaff_EBP + -0x70),(int *)(unaff_EBP + -0xbc)), -1 < iVar1))
       && (iVar1 = FUN_361d0e02(), -1 < iVar1)) {
      iVar1 = 0;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  thunk_FUN_361d4c81((byte *)(unaff_EBP + -0x1c));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_361ced02(unaff_EBP + -0x70);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}

