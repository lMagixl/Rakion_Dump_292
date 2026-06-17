
uint __thiscall FUN_360f13a0(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10);
  if ((int)uVar1 < (int)param_2) {
    param_2 = uVar1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0xc);
  if ((int)param_2 <= (int)uVar1) {
    uVar1 = param_2;
  }
  puVar3 = (undefined4 *)(*(int *)((int)this + 0x18) + *(int *)((int)this + 0xc));
  puVar4 = param_1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  if ((int)uVar1 < (int)param_2) {
    puVar3 = *(undefined4 **)((int)this + 0x18);
    puVar4 = (undefined4 *)(uVar1 + (int)param_1);
    for (uVar2 = param_2 - uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar1 = param_2 - uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(uint *)((int)this + 0x10) = *(int *)((int)this + 0x10) + param_2;
  *(int *)((int)this + 0xc) =
       (int)(*(int *)((int)this + 0xc) + param_2) % *(int *)((int)this + 0x14);
  return param_2;
}

