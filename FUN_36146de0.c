
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36146de0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 100);
  uVar6 = paddusb((ulonglong)
                  (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18),
                  CONCAT44(uVar1,uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                                 uVar1 << 0x18));
  uVar6 = CONCAT44((int)uVar6,(int)uVar6);
  iVar3 = DAT_362fdb10;
  puVar4 = DAT_362fdadc;
  do {
    for (uVar2 = DAT_362fdb14 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar5 = paddusb(*(undefined8 *)puVar4,uVar6);
      *(undefined8 *)puVar4 = uVar5;
      puVar4 = puVar4 + 2;
    }
    if ((DAT_362fdb14 & 1) != 0) {
      uVar5 = paddusb((ulonglong)*puVar4,uVar6);
      *puVar4 = (uint)uVar5;
      puVar4 = puVar4 + 1;
    }
    puVar4 = (uint *)((int)puVar4 + _DAT_362fdb0c);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

