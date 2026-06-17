
void __fastcall FUN_3606e1d0(int *param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulong uStack_18;
  
  iVar2 = (*DAT_362c46c8)(3,0,DAT_362bfa4c,0x66);
  if (param_1 != (int *)0x0) {
    do {
      iVar1 = param_1[0x32];
      iVar4 = param_1[2];
      uStack_18 = 0xffffffff;
      if (((in_EAX & 1) != 0) && (param_1[0x29] != 0xffffffff)) {
        uStack_18 = MulColors(0xffffffff,param_1[0x29]);
      }
      if (((in_EAX & 2) != 0) && (param_1[0x2a] != 0xffffffff)) {
        uStack_18 = MulColors(uStack_18,param_1[0x2a]);
      }
      if (((in_EAX & 4) != 0) && (param_1[0x2b] != 0xffffffff)) {
        uStack_18 = MulColors(uStack_18,param_1[0x2b]);
      }
      if (((in_EAX & 8) != 0) && (param_1[0x2c] != 0xffffffff)) {
        uStack_18 = MulColors(uStack_18,param_1[0x2c]);
      }
      uVar3 = uStack_18 >> 0x18 | (uStack_18 & 0xff0000) >> 8 | (uStack_18 & 0xff00) << 8 |
              uStack_18 << 0x18;
      if (DAT_362a1590 == 1) {
        uVar3 = uStack_18 >> 8 | uStack_18 << 0x18;
      }
      if (iVar1 < iVar4 + iVar1) {
        puVar5 = (uint *)(iVar2 + iVar1 * 4);
        for (iVar4 = (iVar4 + iVar1) - iVar1; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = uVar3;
          puVar5 = puVar5 + 1;
        }
      }
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
  }
  (*DAT_362c46cc)(3,0);
  return;
}

