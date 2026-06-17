
undefined4 FUN_36093670(void)

{
  uint uVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = 0;
  if (0 < unaff_EDI) {
    do {
      uVar1 = *(uint *)(unaff_EBX + iVar3 * 4);
      iVar2 = IsGray(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
                    );
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI);
  }
  return 1;
}

