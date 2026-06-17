
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36024d10(void)

{
  int in_EAX;
  undefined2 *puVar1;
  uint uVar2;
  void **unaff_EDI;
  
  if (*unaff_EDI == &DAT_362a1b18) {
    _DAT_362b9108 = _DAT_362b9108 + -1;
    puVar1 = (undefined2 *)FUN_36024c90();
    *unaff_EDI = puVar1;
    *puVar1 = 0;
    return;
  }
  uVar2 = MEM_Size(*unaff_EDI);
  DAT_362b9104 = DAT_362b9104 - uVar2;
  ResizeMemory(unaff_EDI,in_EAX * 2 + 2);
  DAT_362b9104 = DAT_362b9104 + 2 + in_EAX * 2;
  return;
}

