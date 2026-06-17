
undefined4 * __thiscall FUN_3601a490(void *this,void *param_1)

{
  undefined4 *puVar1;
  xEncryptMemory *pxVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_48 [9];
  undefined4 local_21 [8];
  
  *(undefined ***)this = &PTR_FUN_362239d4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  puVar1 = (undefined4 *)FUN_3600e690(param_1,local_21);
  iVar6 = 9;
  pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar3 = FUN_36019460(pxVar2,iVar6);
  *(uint *)((int)this + 4) = uVar3;
  puVar4 = local_48;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar7 = 9;
  puVar5 = local_48;
  *(undefined1 *)puVar4 = *(undefined1 *)puVar1;
  pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar2,uVar3,(int)puVar5,uVar7);
  return this;
}

