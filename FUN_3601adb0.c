
undefined2 * __fastcall FUN_3601adb0(undefined2 *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined2 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e581;
  local_c = ExceptionList;
  iVar5 = 1;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 2) = &PTR_FUN_362239c8;
  local_10 = param_1;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar5);
  uVar6 = 1;
  puVar3 = local_18;
  *(uint *)(param_1 + 4) = uVar2;
  local_18[0] = 0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar3,uVar6);
  iVar5 = 1;
  local_4 = 0;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_362239cc;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar5);
  uVar6 = 1;
  puVar4 = &local_14;
  *(uint *)(param_1 + 10) = uVar2;
  local_14 = 0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar4,uVar6);
  iVar5 = 1;
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0xe) = &PTR_FUN_362239cc;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar5);
  uVar6 = 1;
  puVar4 = &local_14;
  *(uint *)(param_1 + 0x10) = uVar2;
  local_14 = 0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar4,uVar6);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_36014f20(param_1);
  ExceptionList = local_c;
  return param_1;
}

