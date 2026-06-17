
int FUN_3617a2b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_36172d20((undefined4 *)(unaff_ESI + 0x108));
  iVar2 = 0;
  if (0 < iVar1) {
    iVar3 = *(int *)(unaff_ESI + 0x10c);
    do {
      if (iVar3 == unaff_EDI) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x94;
    } while (iVar2 < iVar1);
  }
  return 0;
}

