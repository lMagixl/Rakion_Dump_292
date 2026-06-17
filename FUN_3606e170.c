
void __cdecl FUN_3606e170(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)(*DAT_362c46c8)(3,0,DAT_362bfa4c,0x66);
  uVar2 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
  if (DAT_362a1590 == 1) {
    uVar2 = param_1 >> 8 | param_1 << 0x18;
  }
  iVar3 = DAT_362bfa4c;
  if (0 < DAT_362bfa4c) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
    }
  }
  (*DAT_362c46cc)(3,0);
  return;
}

