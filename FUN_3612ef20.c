
int __thiscall FUN_3612ef20(void *this,undefined4 *param_1)

{
  xEncryptMemory *this_00;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = param_1[2];
  uVar3 = 3;
  puVar2 = &local_c;
  uVar1 = *(uint *)((int)this + 4);
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(this_00,uVar1,(int)puVar2,uVar3);
  return (int)this;
}

