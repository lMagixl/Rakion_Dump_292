
int __thiscall FUN_3619ca20(void *this,undefined4 *param_1)

{
  xEncryptMemory *this_00;
  uint uVar1;
  undefined4 **ppuVar2;
  uint uVar3;
  
  param_1 = (undefined4 *)*param_1;
  uVar1 = *(uint *)((int)this + 4);
  uVar3 = 1;
  ppuVar2 = &param_1;
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(this_00,uVar1,(int)ppuVar2,uVar3);
  return (int)this;
}

