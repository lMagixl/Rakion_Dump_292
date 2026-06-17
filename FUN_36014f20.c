
void __fastcall FUN_36014f20(undefined2 *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  uVar5 = 1;
  puVar3 = local_8;
  *param_1 = 0;
  uVar2 = *(uint *)(param_1 + 4);
  local_8[0] = 0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar3,uVar5);
  uVar2 = *(uint *)(param_1 + 10);
  uVar5 = 1;
  puVar4 = &local_4;
  local_4 = 0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar4,uVar5);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar5 = 1;
  puVar4 = &local_4;
  local_4 = 0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar4,uVar5);
  return;
}

