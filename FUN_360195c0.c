
void __fastcall FUN_360195c0(int param_1)

{
  xEncryptMemory *this;
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_3620e2cf;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_36015fa0(param_1 + 0x360);
  operator_delete(*(void **)(param_1 + 0x364));
  *(undefined4 *)(param_1 + 0x364) = 0;
  local_4._0_1_ = 1;
  FUN_36015fa0(param_1 + 0x354);
  operator_delete(*(void **)(param_1 + 0x358));
  *(undefined4 *)(param_1 + 0x358) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x50),0x28,0x13,FUN_36019530);
  uVar1 = *(uint *)(param_1 + 8);
  iVar2 = 1;
  local_4 = 0xffffffff;
  *(undefined ***)(param_1 + 4) = &PTR_FUN_362239c8;
  this = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(this,uVar1,iVar2);
  ExceptionList = local_c;
  return;
}

