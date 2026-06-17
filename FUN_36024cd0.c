
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36024cd0(void)

{
  uint uVar1;
  undefined *unaff_ESI;
  
  if (unaff_ESI == &DAT_362a1b18) {
    _DAT_362b9108 = _DAT_362b9108 + -1;
    return;
  }
  DAT_362b9100 = DAT_362b9100 + -1;
  uVar1 = MEM_Size(unaff_ESI);
  DAT_362b9104 = DAT_362b9104 - uVar1;
  FreeMemory(unaff_ESI);
  return;
}

