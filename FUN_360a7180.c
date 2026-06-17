
undefined4 * __thiscall FUN_360a7180(void *this,byte param_1)

{
  xEncryptMemory *this_00;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  iVar2 = 3;
  *(undefined ***)this = &PTR_FUN_36230738;
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_36017d80(this_00,uVar1,iVar2);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

