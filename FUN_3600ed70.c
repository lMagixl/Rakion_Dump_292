
_String_base * __thiscall FUN_3600ed70(void *this,uint param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    std::_String_base::_Xran(this);
  }
  uVar2 = *(int *)((int)this + 0x14) - param_1;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (param_3 != 0) {
    puVar5 = (undefined4 *)((int)this + 4);
    puVar4 = puVar5;
    puVar1 = puVar5;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar4 = (undefined4 *)*puVar5;
      puVar1 = (undefined4 *)*puVar5;
    }
    memmove((void *)((int)puVar4 + param_1),(void *)((int)puVar1 + param_3 + param_1),
            uVar2 - param_3);
    iVar3 = *(int *)((int)this + 0x14) - param_3;
    *(int *)((int)this + 0x14) = iVar3;
    if (0xf < *(uint *)((int)this + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)((int)puVar5 + iVar3) = 0;
  }
  return this;
}

