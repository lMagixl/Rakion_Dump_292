
void __thiscall FUN_360df480(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_360df480(this,(undefined4 *)param_1[9]);
    FUN_360df480(this,(undefined4 *)param_1[10]);
    puVar1 = (undefined4 *)(DAT_362cc0e0 * 0x30 + *(int *)((int)this + 4));
    DAT_362cc0e0 = DAT_362cc0e0 + -1;
    puVar3 = param_1;
    puVar4 = puVar1;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar1[8] = param_1[8];
    puVar1[0xb] = param_1[0xb];
    param_1[0xb] = puVar1;
    if (param_1[9] == 0) {
      puVar1[9] = 0;
    }
    else {
      puVar1[9] = *(undefined4 *)(param_1[9] + 0x2c);
    }
    if (param_1[10] == 0) {
      puVar1[10] = 0;
      return;
    }
    puVar1[10] = *(undefined4 *)(param_1[10] + 0x2c);
  }
  return;
}

