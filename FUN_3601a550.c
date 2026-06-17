
undefined4 * __thiscall FUN_3601a550(void *this,undefined4 *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined4 **ppuVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 1;
  *(undefined ***)this = &PTR_FUN_362239d8;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar4);
  *(uint *)((int)this + 4) = uVar2;
  param_1 = (undefined4 *)*param_1;
  uVar5 = 1;
  ppuVar3 = &param_1;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)ppuVar3,uVar5);
  return this;
}

