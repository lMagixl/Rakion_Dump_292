
uint __thiscall FUN_361010a0(void *this,undefined4 *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10);
  if ((int)uVar1 < (int)param_2) {
    param_2 = uVar1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = *(int *)((int)this + 0x14) - *param_3;
  if ((int)param_2 <= (int)uVar1) {
    uVar1 = param_2;
  }
  puVar4 = (undefined4 *)(*(int *)((int)this + 0x18) + *param_3);
  puVar5 = param_1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *param_3 = *param_3 + uVar1;
  if ((int)uVar1 < (int)param_2) {
    uVar3 = param_2 - uVar1;
    puVar4 = *(undefined4 **)((int)this + 0x18);
    puVar5 = (undefined4 *)((int)param_1 + uVar1);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *param_3 = uVar3;
  }
  *param_3 = (int)*param_3 % *(int *)((int)this + 0x14);
  return param_2;
}

