
void __thiscall FUN_36114d60(void *this,undefined4 param_1)

{
  int iVar1;
  undefined1 *puStack_60;
  undefined1 auStack_5c [4];
  undefined1 *puStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined4 auStack_38 [2];
  undefined1 local_30 [4];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [36];
  
  puStack_50 = local_30;
  uStack_54 = param_1;
  puStack_58 = (undefined1 *)0x36114d7b;
  (**(code **)(**(int **)((int)this + 0x694) + 0x18))();
  puStack_58 = auStack_2c;
  puStack_60 = (undefined1 *)0x36114d90;
  (**(code **)(**(int **)((int)this + 0x694) + 0x18))();
  puStack_50 = (undefined1 *)auStack_38[0];
  puStack_60 = &stack0xffffffb4;
  iVar1 = (**(code **)(**(int **)((int)this + 0x694) + 0x1c))(&puStack_58);
  if (iVar1 != 0) {
    (**(code **)(**(int **)((int)this + 0x694) + 0x24))(&puStack_60,auStack_24);
    (**(code **)(**(int **)((int)this + 0x694) + 0x24))(auStack_5c,auStack_38);
    FUN_361bfd6c();
    FUN_361bfd6c();
    FUN_361bfd6c();
    FUN_361bfd6c();
    FUN_36114ad0(*(CDrawPort **)((int)this + 8));
  }
  return;
}

