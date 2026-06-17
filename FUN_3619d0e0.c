
undefined1 * __fastcall FUN_3619d0e0(undefined1 *param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_14 [4];
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b37d;
  local_c = ExceptionList;
  iVar5 = 1;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 4) = &PTR_FUN_362239c8;
  local_10 = param_1;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  uVar2 = FUN_36019460(pxVar1,iVar5);
  uVar6 = 1;
  puVar4 = local_14;
  *(uint *)(param_1 + 8) = uVar2;
  local_14[0] = 0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(pxVar1,uVar2,(int)puVar4,uVar6);
  local_4 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x50,0x28,0x13,FUN_3601adb0,FUN_36019530);
  local_4._0_1_ = 1;
  uVar3 = FUN_360136f0();
  *(undefined4 *)(param_1 + 0x358) = uVar3;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  local_4._0_1_ = 2;
  uVar3 = FUN_360136f0();
  *(undefined4 *)(param_1 + 0x364) = uVar3;
  *(undefined4 *)(param_1 + 0x368) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_3619cb30(param_1);
  ExceptionList = local_c;
  return param_1;
}

