
undefined4 __fastcall FUN_36093620(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = 0;
  if (0 < unaff_ESI) {
    do {
      uVar1 = *(uint *)(param_2 + iVar2 * 4) >> 0x18;
      if ((7 < uVar1) && (uVar1 < 0xf8)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_ESI);
  }
  return 1;
}

