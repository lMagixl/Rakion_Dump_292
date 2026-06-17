
void __thiscall FUN_360a5d20(void *this,undefined4 *param_1)

{
  xEncryptMemory *this_00;
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = *(uint *)((int)this + 4);
  puVar2 = &local_30;
  uVar3 = 3;
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(this_00,uVar1,puVar2,uVar3);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

