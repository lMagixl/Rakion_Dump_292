
bool __fastcall FUN_360de700(int param_1)

{
  xEncryptMemory *this;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int local_4;
  
  piVar2 = &local_4;
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = 1;
  local_4 = param_1;
  this = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(this,uVar1,piVar2,uVar3);
  return (char)local_4 == '\x01';
}

