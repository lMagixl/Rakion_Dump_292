
void FUN_360936f0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  byte bVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  ulonglong uVar5;
  
  bVar2 = (byte)*(undefined4 *)(unaff_ESI + 0x28);
  iVar4 = *(int *)(unaff_ESI + 0x20) >> (bVar2 & 0x1f);
  iVar3 = *(int *)(unaff_ESI + 0x24) >> (bVar2 & 0x1f);
  bVar1 = FUN_36098750(*(int *)(unaff_ESI + 0x78));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    *(int *)(unaff_ESI + 0x6c) = iVar4;
    *(int *)(unaff_ESI + 0x70) = iVar3;
    return;
  }
  if (iVar3 < iVar4) {
    uVar5 = FUN_361bfd6c();
    *(undefined4 *)(unaff_ESI + 0x6c) = 0x40;
    *(int *)(unaff_ESI + 0x70) = (int)uVar5;
    return;
  }
  uVar5 = FUN_361bfd6c();
  *(int *)(unaff_ESI + 0x6c) = (int)uVar5;
  *(undefined4 *)(unaff_ESI + 0x70) = 0x40;
  return;
}

