
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36146e70(void *this,byte *param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)((int)this + 0x60);
  uVar2 = *(uint *)((int)this + 100);
  iVar3 = DAT_362fdb14;
  puVar5 = DAT_362fdadc;
  iVar4 = DAT_362fdb10;
  do {
    do {
      uVar7 = paddusb((ulonglong)*puVar5,
                      (ulonglong)
                      (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18));
      if ((*param_1 & param_2) != 0) {
        uVar7 = paddusb(uVar7,(ulonglong)
                              (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                              uVar1 << 0x18));
      }
      *puVar5 = (uint)uVar7;
      puVar5 = puVar5 + 1;
      bVar6 = (char)param_2 < '\0';
      param_2 = param_2 << 1 | bVar6;
      param_1 = param_1 + bVar6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = (uint *)((int)puVar5 + _DAT_362fdb0c);
    iVar4 = iVar4 + -1;
    iVar3 = DAT_362fdb14;
  } while (iVar4 != 0);
  return;
}

