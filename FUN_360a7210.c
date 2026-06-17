
undefined4 * __thiscall FUN_360a7210(void *this,int param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar4 = 3;
  puVar3 = &local_30;
  *(undefined ***)this = &PTR_FUN_36230738;
  uVar2 = *(uint *)(param_1 + 4);
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar2,puVar3,uVar4);
  iVar5 = 3;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar5);
  local_38 = local_2c;
  uVar4 = 3;
  puVar3 = &local_3c;
  local_3c = local_30;
  *(uint *)((int)this + 4) = uVar2;
  local_34 = local_28;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar3,uVar4);
  return this;
}

