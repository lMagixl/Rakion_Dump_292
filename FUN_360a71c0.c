
void __thiscall FUN_360a71c0(void *this,undefined4 *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = 3;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar4);
  *(uint *)((int)this + 4) = uVar2;
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  uVar5 = 3;
  puVar3 = &local_c;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar3,uVar5);
  return;
}

