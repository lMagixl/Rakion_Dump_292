
undefined2 * __thiscall FUN_36015160(void *this,undefined2 *param_1)

{
  undefined2 *puVar1;
  xEncryptMemory *pxVar2;
  uint uVar3;
  undefined2 **ppuVar4;
  uint uVar5;
  undefined2 *local_10 [4];
  
  puVar1 = param_1;
  uVar5 = 1;
  ppuVar4 = &param_1;
  *(undefined2 *)this = *param_1;
  uVar3 = *(uint *)(param_1 + 4);
  pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar2,uVar3,ppuVar4,uVar5);
  uVar3 = *(uint *)((int)this + 8);
  uVar5 = 1;
  ppuVar4 = &param_1;
  pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar2,uVar3,(int)ppuVar4,uVar5);
  uVar3 = *(uint *)(puVar1 + 10);
  uVar5 = 1;
  ppuVar4 = local_10;
  pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar2,uVar3,ppuVar4,uVar5);
  uVar3 = *(uint *)((int)this + 0x14);
  uVar5 = 1;
  ppuVar4 = &param_1;
  param_1 = local_10[0];
  pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar2,uVar3,(int)ppuVar4,uVar5);
  uVar3 = *(uint *)(puVar1 + 0x10);
  uVar5 = 1;
  ppuVar4 = local_10;
  pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar2,uVar3,ppuVar4,uVar5);
  uVar3 = *(uint *)((int)this + 0x20);
  uVar5 = 1;
  ppuVar4 = &param_1;
  param_1 = local_10[0];
  pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar2,uVar3,(int)ppuVar4,uVar5);
  return this;
}

