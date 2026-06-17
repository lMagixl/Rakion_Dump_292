
int __thiscall FUN_36013590(void *this,int param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int local_10 [4];
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = 1;
  piVar3 = local_10;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar2,piVar3,uVar4);
  uVar2 = *(uint *)((int)this + 4);
  uVar4 = 1;
  piVar3 = &param_1;
  param_1 = local_10[0];
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)piVar3,uVar4);
  return (int)this;
}

