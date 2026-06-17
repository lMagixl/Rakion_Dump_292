
void FUN_360c08b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar4 = 0;
  if (0 < unaff_ESI) {
    do {
      iVar1 = iVar4 * 2;
      iVar2 = iVar4 * 4;
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(char *)(DAT_362cba50 + 3 + iVar3) =
           (char)((uint)*(byte *)((uint)*(ushort *)(DAT_362cba2c + iVar1) + unaff_EDI) *
                  (uint)*(byte *)(DAT_362cba50 + 3 + iVar2) >> 8);
    } while (iVar4 < unaff_ESI);
  }
  return;
}

