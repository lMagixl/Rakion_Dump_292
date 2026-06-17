
int FUN_361c13bb(void)

{
  int unaff_EBP;
  int iVar1;
  
  FUN_3620d000();
  FUN_361cece9((undefined4 *)(unaff_EBP + -100));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_361d4cea((undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((*(int *)(unaff_EBP + 8) == 0) || (*(int *)(unaff_EBP + 0x10) == 0)) {
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_361d5123((void *)(unaff_EBP + -0x10),(undefined4 *)(unaff_EBP + -0xb0),
                         *(int **)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                         *(uint **)(unaff_EBP + 0x18),0,1);
    if (((-1 < iVar1) &&
        (iVar1 = FUN_361ced77((void *)(unaff_EBP + -100),(int *)(unaff_EBP + -0xb0)), -1 < iVar1))
       && (iVar1 = FUN_361d0e02(), -1 < iVar1)) {
      iVar1 = 0;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  thunk_FUN_361d4cf0((int *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_361ced02(unaff_EBP + -100);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}

