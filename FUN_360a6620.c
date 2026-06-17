
int __thiscall FUN_360a6620(void *this,int param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar4 = 3;
  puVar3 = &local_30;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar2,puVar3,uVar4);
  local_3c = local_30;
  uVar4 = 3;
  puVar3 = &local_3c;
  local_38 = local_2c;
  uVar2 = *(uint *)((int)this + 4);
  local_34 = local_28;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar3,uVar4);
  return (int)this;
}

