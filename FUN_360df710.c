
void __thiscall FUN_360df710(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_360df710(this,(undefined4 *)param_1[5]);
    FUN_360df710(this,(undefined4 *)param_1[6]);
    puVar1 = (undefined4 *)(DAT_362cc0e0 * 0x20 + *(int *)((int)this + 4));
    DAT_362cc0e0 = DAT_362cc0e0 + -1;
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[7] = param_1[7];
    param_1[7] = puVar1;
    if (param_1[5] == 0) {
      puVar1[5] = 0;
    }
    else {
      puVar1[5] = *(undefined4 *)(param_1[5] + 0x1c);
    }
    if (param_1[6] == 0) {
      puVar1[6] = 0;
      return;
    }
    puVar1[6] = *(undefined4 *)(param_1[6] + 0x1c);
  }
  return;
}

