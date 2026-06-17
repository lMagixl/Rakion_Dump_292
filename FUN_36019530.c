
void __fastcall FUN_36019530(int param_1)

{
  xEncryptMemory *pxVar1;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3620e296;
  local_c = ExceptionList;
  uVar2 = *(uint *)(param_1 + 0x20);
  iVar3 = 1;
  local_4 = 1;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x1c) = &PTR_FUN_362239cc;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar3 = 1;
  local_4 = local_4 & 0xffffff00;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_362239cc;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  uVar2 = *(uint *)(param_1 + 8);
  iVar3 = 1;
  local_4 = 0xffffffff;
  *(undefined ***)(param_1 + 4) = &PTR_FUN_362239c8;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(pxVar1,uVar2,iVar3);
  ExceptionList = local_c;
  return;
}

