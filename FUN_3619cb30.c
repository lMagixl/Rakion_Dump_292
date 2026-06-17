
void __fastcall FUN_3619cb30(undefined1 *param_1)

{
  xEncryptMemory *this;
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint local_4;
  
  uVar5 = 1;
  puVar4 = &local_4;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  uVar3 = *(uint *)(param_1 + 8);
  local_4 = (uint)param_1 & 0xffffff00;
  this = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(this,uVar3,(int)puVar4,uVar5);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  puVar2 = (undefined2 *)(param_1 + 0x50);
  iVar1 = 0x13;
  do {
    FUN_36014f20(puVar2);
    puVar2 = puVar2 + 0x14;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0xffffffff;
  return;
}

