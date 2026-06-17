
undefined4 __thiscall FUN_360fea30(void *this,undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*param_2 < *(int *)((int)this + 8) - 0xcU) {
    return 0;
  }
  uVar1 = *(int *)((int)this + 8) - 0xc;
  *param_2 = uVar1;
  puVar3 = (undefined4 *)((int)this + 0x2c);
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return 1;
}

