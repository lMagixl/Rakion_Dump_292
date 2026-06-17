
undefined4 __thiscall FUN_361dbb9d(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    puVar1 = (undefined4 *)FUN_361bf99c(*(int *)((int)this + 8) * 4 + 0x40);
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0xc) = 0x8007000e;
      return 0x8007000e;
    }
    if (*(undefined4 **)this != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)this;
      puVar5 = puVar1;
      for (uVar2 = *(uint *)((int)this + 4) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      operator_delete(*(void **)this);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x10;
    *(undefined4 **)this = puVar1;
  }
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 4) * 4) = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

