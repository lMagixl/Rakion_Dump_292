
void __fastcall FUN_36019680(int param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3620e367;
  local_c = ExceptionList;
  uVar2 = *(uint *)(param_1 + 0x41c);
  iVar3 = 1;
  local_4 = 8;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x418) = &PTR_FUN_362239c8;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  local_4._0_1_ = 7;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0xbc),0x28,0x13,FUN_36019530);
  uVar2 = *(uint *)(param_1 + 0xa8);
  iVar3 = 1;
  local_4._0_1_ = 6;
  *(undefined ***)(param_1 + 0xa4) = &PTR_FUN_362239d0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  uVar2 = *(uint *)(param_1 + 0x9c);
  iVar3 = 1;
  local_4._0_1_ = 5;
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_362239d0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  uVar2 = *(uint *)(param_1 + 0x90);
  iVar3 = 1;
  local_4._0_1_ = 4;
  *(undefined ***)(param_1 + 0x8c) = &PTR_FUN_362239d0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  uVar2 = *(uint *)(param_1 + 0x84);
  iVar3 = 1;
  local_4._0_1_ = 3;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_362239d0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  uVar2 = *(uint *)(param_1 + 0x78);
  iVar3 = 1;
  local_4._0_1_ = 2;
  *(undefined ***)(param_1 + 0x74) = &PTR_FUN_362239d0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  uVar2 = *(uint *)(param_1 + 0x6c);
  iVar3 = 1;
  local_4._0_1_ = 1;
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_362239d0;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_
            ((void *)(param_1 + 0x38),0xc,4,(_func_void_void_ptr *)&LAB_360187c0);
  uVar2 = *(uint *)(param_1 + 0x24);
  iVar3 = 1;
  local_4 = 0xffffffff;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_362239c8;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  ExceptionList = local_c;
  return;
}

