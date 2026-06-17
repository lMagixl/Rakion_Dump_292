
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3617f5a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar4 = 0;
  _DAT_36301530 = 0;
  iVar3 = FUN_361743a0((undefined4 *)(unaff_EDI + 0xf8));
  iVar1 = *(int *)(unaff_EDI + 0xfc);
  iVar2 = *(int *)(iVar3 * 0x10 + -0xc + iVar1);
  if (0 < iVar2) {
    do {
      FUN_3617f490(unaff_EDI,*(int *)(iVar3 * 0x10 + -0x10 + iVar1) + iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}

