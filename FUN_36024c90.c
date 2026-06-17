
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_36024c90(void)

{
  undefined *puVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    _DAT_362b9108 = _DAT_362b9108 + 1;
    return &DAT_362a1b18;
  }
  puVar1 = AllocMemory(unaff_ESI * 2 + 2);
  DAT_362b9100 = DAT_362b9100 + 1;
  DAT_362b9104 = DAT_362b9104 + 2 + unaff_ESI * 2;
  return puVar1;
}

