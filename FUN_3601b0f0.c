
undefined1 * __thiscall FUN_3601b0f0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  xEncryptMemory *pxVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  void *this_00;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 **ppuVar12;
  uint uVar13;
  
  puVar3 = param_1;
  *(undefined1 *)this = *(undefined1 *)param_1;
  uVar13 = 1;
  ppuVar12 = &param_1;
  *(undefined2 *)((int)this + 2) = *(undefined2 *)((int)param_1 + 2);
  uVar11 = param_1[2];
  pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar4,uVar11,ppuVar12,uVar13);
  uVar11 = *(uint *)((int)this + 8);
  uVar13 = 1;
  ppuVar12 = &param_1;
  pxVar4 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar4,uVar11,(int)ppuVar12,uVar13);
  puVar5 = (undefined1 *)((int)this + 0x10);
  iVar8 = (int)puVar3 - (int)this;
  iVar9 = 0xd;
  do {
    *puVar5 = puVar5[iVar8];
    puVar5 = puVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  puVar5 = (undefined1 *)((int)this + 0x1d);
  iVar9 = 0xd;
  do {
    *puVar5 = puVar5[iVar8];
    puVar5 = puVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(undefined1 *)((int)this + 0x2a) = *(undefined1 *)((int)puVar3 + 0x2a);
  *(undefined4 *)((int)this + 0x2c) = puVar3[0xb];
  puVar6 = (undefined4 *)((int)this + 0x30);
  iVar9 = 2;
  do {
    *puVar6 = *(undefined4 *)((int)puVar6 + iVar8);
    puVar6 = puVar6 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  puVar7 = (undefined2 *)((int)this + 0x38);
  iVar9 = 2;
  do {
    *puVar7 = *(undefined2 *)((int)puVar7 + iVar8);
    puVar7 = puVar7 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(undefined4 *)((int)this + 0x3c) = puVar3[0xf];
  *(undefined2 *)((int)this + 0x40) = *(undefined2 *)(puVar3 + 0x10);
  *(undefined1 *)((int)this + 0x42) = *(undefined1 *)((int)puVar3 + 0x42);
  *(undefined1 *)((int)this + 0x43) = *(undefined1 *)((int)puVar3 + 0x43);
  *(undefined1 *)((int)this + 0x44) = *(undefined1 *)(puVar3 + 0x11);
  *(undefined4 *)((int)this + 0x48) = puVar3[0x12];
  *(undefined4 *)((int)this + 0x4c) = puVar3[0x13];
  this_00 = (void *)((int)this + 0x50);
  param_1 = (undefined4 *)0x13;
  do {
    FUN_36015160(this_00,(undefined2 *)(iVar8 + (int)this_00));
    this_00 = (void *)((int)this_00 + 0x28);
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  *(undefined4 *)((int)this + 0x348) = puVar3[0xd2];
  *(undefined4 *)((int)this + 0x34c) = puVar3[0xd3];
  *(undefined4 *)((int)this + 0x350) = puVar3[0xd4];
  param_1 = (undefined4 *)0x0;
  if ((undefined4 *)((int)this + 0x354) != puVar3 + 0xd5) {
    puVar6 = (undefined4 *)puVar3[0xd6];
    piVar1 = *(int **)((int)this + 0x358);
    puVar10 = (undefined4 *)*piVar1;
    puVar2 = (undefined4 *)*puVar6;
    *piVar1 = (int)piVar1;
    *(int *)(*(int *)((int)this + 0x358) + 4) = *(int *)((int)this + 0x358);
    *(undefined4 *)((int)this + 0x35c) = 0;
    if (puVar10 != *(undefined4 **)((int)this + 0x358)) {
      do {
        param_1 = (undefined4 *)*puVar10;
        FUN_3600b530((int)puVar10);
        operator_delete(puVar10);
        puVar10 = param_1;
      } while (param_1 != *(undefined4 **)((int)this + 0x358));
    }
    FUN_36017a90((undefined4 *)((int)this + 0x354),**(int **)((int)this + 0x358),puVar2,puVar6);
  }
  if ((undefined4 *)((int)this + 0x360) != puVar3 + 0xd8) {
    puVar6 = (undefined4 *)puVar3[0xd9];
    piVar1 = *(int **)((int)this + 0x364);
    puVar10 = (undefined4 *)*piVar1;
    puVar2 = (undefined4 *)*puVar6;
    *piVar1 = (int)piVar1;
    *(int *)(*(int *)((int)this + 0x364) + 4) = *(int *)((int)this + 0x364);
    *(undefined4 *)((int)this + 0x368) = 0;
    if (puVar10 != *(undefined4 **)((int)this + 0x364)) {
      do {
        param_1 = (undefined4 *)*puVar10;
        FUN_3600b530((int)puVar10);
        operator_delete(puVar10);
        puVar10 = param_1;
      } while (param_1 != *(undefined4 **)((int)this + 0x364));
    }
    FUN_36017a90((undefined4 *)((int)this + 0x360),**(int **)((int)this + 0x364),puVar2,puVar6);
  }
  *(undefined4 *)((int)this + 0x36c) = puVar3[0xdb];
  *(undefined4 *)((int)this + 0x370) = puVar3[0xdc];
  *(undefined4 *)((int)this + 0x374) = puVar3[0xdd];
  *(undefined4 *)((int)this + 0x378) = puVar3[0xde];
  return this;
}

