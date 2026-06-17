
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_360dffc0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  operator_delete__((void *)param_1[5]);
  uVar1 = _DAT_36227d98;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_1 = 0xffffffff;
  return;
}

