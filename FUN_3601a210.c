
undefined4 * __thiscall FUN_3601a210(void *this,int param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 1;
  piVar3 = &param_1;
  *(undefined ***)this = &PTR_FUN_362239c8;
  uVar2 = *(uint *)(param_1 + 4);
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar2,piVar3,uVar4);
  iVar5 = 1;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar5);
  uVar4 = 1;
  piVar3 = &param_1;
  *(uint *)((int)this + 4) = uVar2;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)piVar3,uVar4);
  return this;
}

