
int __thiscall FUN_36013540(void *this,void *param_1)

{
  undefined4 *puVar1;
  xEncryptMemory *this_00;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_48 [9];
  undefined4 local_21 [8];
  
  puVar1 = (undefined4 *)FUN_3600e690(param_1,local_21);
  uVar4 = *(uint *)((int)this + 4);
  puVar3 = local_48;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar6 = 9;
  puVar5 = local_48;
  *(undefined1 *)puVar3 = *(undefined1 *)puVar1;
  this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600ce60(this_00,uVar4,(int)puVar5,uVar6);
  return (int)this;
}

