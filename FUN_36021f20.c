
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36021f20(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (this != (void *)0x0) {
    uVar2 = *(uint *)((int)this + 0x18);
    puVar3 = (undefined4 *)((uVar2 + 1) * param_1 + *(int *)((int)this + 8));
    puVar4 = puVar3;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = 0x20202020;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0x20;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(undefined1 *)((int)puVar3 + *(int *)((int)this + 0x18)) = 10;
    if (_pTimer != (CTimer *)0x0) {
      *(undefined4 *)(*(int *)((int)this + 0x20) + param_1 * 4) = *(undefined4 *)(_pTimer + 8);
      return;
    }
    *(undefined4 *)(*(int *)((int)this + 0x20) + param_1 * 4) = _DAT_3622376c;
  }
  return;
}

