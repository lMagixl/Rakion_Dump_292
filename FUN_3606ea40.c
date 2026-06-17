
void FUN_3606ea40(void)

{
  int iVar1;
  undefined4 *in_EAX;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = (*DAT_362c46c8)(0,0,DAT_362bfa4c,0x66);
  iVar4 = 0;
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)*in_EAX) {
    iVar1 = in_EAX[2];
    in_EAX[0x32] = iVar4;
    puVar5 = (undefined4 *)(DAT_362c3a78 + in_EAX[1] * 0xc);
    uVar3 = iVar1 * 3 & 0x3fffffff;
    puVar6 = (undefined4 *)(iVar2 + iVar4 * 0xc);
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    iVar4 = iVar4 + iVar1;
  }
  (*DAT_362c46cc)(0,0);
  return;
}

