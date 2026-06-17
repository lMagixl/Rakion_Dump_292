
/* public: __thiscall AccountInfo_s::~AccountInfo_s(void) */

void __thiscall AccountInfo_s::~AccountInfo_s(AccountInfo_s *this)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1a000  377  ??1AccountInfo_s@@QAE@XZ */
  puStack_8 = &LAB_3620e4b6;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  if (*(void **)(this + 0x2db8) != (void *)0x0) {
    ExceptionList = &local_c;
    operator_delete(*(void **)(this + 0x2db8));
  }
  *(undefined4 *)(this + 0x2db8) = 0;
  *(undefined4 *)(this + 0x2dbc) = 0;
  *(undefined4 *)(this + 0x2dc0) = 0;
  uVar2 = *(uint *)(this + 0x2d84);
  iVar3 = 1;
  *(undefined ***)(this + 0x2d80) = &PTR_FUN_362239d8;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  local_4._0_1_ = 4;
  StringFree(*(char **)(this + 0x2d78));
  uVar2 = *(uint *)(this + 0x2d64);
  iVar3 = 1;
  local_4._0_1_ = 3;
  *(undefined ***)(this + 0x2d60) = &PTR_FUN_362239d8;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  uVar2 = *(uint *)(this + 0x2d58);
  iVar3 = 1;
  local_4._0_1_ = 2;
  *(undefined ***)(this + 0x2d54) = &PTR_FUN_362239d8;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(this + 0x1338,0x424,6,FUN_36019680);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(this + 0x78,0x28,0x78,FUN_36019530);
  uVar2 = *(uint *)(this + 0x2c);
  iVar3 = 9;
  local_4 = 0xffffffff;
  *(undefined ***)(this + 0x28) = &PTR_FUN_362239d4;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  ExceptionList = local_c;
  return;
}

