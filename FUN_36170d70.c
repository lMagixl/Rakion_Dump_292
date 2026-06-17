
void FUN_36170d70(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  
  uVar3 = FUN_3600c550((undefined4 *)(unaff_EDI + 4));
  uVar2 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  FUN_36010880((void *)(unaff_EDI + 0xc),1 << ((char)uVar2 + (uVar1 < uVar2) & 0x1fU));
  iVar4 = 0;
  if (0 < (int)uVar3) {
    do {
      FUN_361708b0(iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar3);
  }
  return;
}

