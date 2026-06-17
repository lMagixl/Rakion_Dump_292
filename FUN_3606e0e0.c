
void __cdecl FUN_3606e0e0(byte param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_EAX;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  iVar3 = (*DAT_362c46c8)(3,0,DAT_362bfa4c,0x66);
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)*in_EAX) {
    uVar1 = in_EAX[0x33];
    iVar2 = in_EAX[0x32];
    uVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
            (uVar1 | param_1) << 0x18;
    if (DAT_362a1590 == 1) {
      uVar4 = uVar1 >> 8 | (uVar1 | param_1) << 0x18;
    }
    if (iVar2 < in_EAX[2] + iVar2) {
      puVar6 = (uint *)(iVar3 + iVar2 * 4);
      for (iVar5 = (in_EAX[2] + iVar2) - iVar2; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = uVar4;
        puVar6 = puVar6 + 1;
      }
    }
  }
  (*DAT_362c46cc)(3,0);
  return;
}

