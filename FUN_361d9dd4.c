
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_361d9dd4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_36249aa4;
  if ((*(int *)(param_1 + 4) != 0x32545844) && (*(int *)(param_1 + 4) != 0x33545844)) {
    uVar1 = _DAT_36223774;
  }
  *(undefined4 *)(param_1 + 0x106c) = uVar1;
  *(float *)(param_1 + 0x1070) = 1.0 / *(float *)(param_1 + 0x106c);
  *(float *)(param_1 + 0x1c) =
       (float)(int)ROUND(*(float *)(param_1 + 0x1c) * _DAT_36249aa0 + _DAT_36227cf0) * _DAT_36249ac0
  ;
  *(float *)(param_1 + 0x20) =
       (float)(int)ROUND(*(float *)(param_1 + 0x20) * _DAT_36230524 + _DAT_36227cf0) * _DAT_36230714
  ;
  *(float *)(param_1 + 0x24) =
       (float)(int)ROUND(*(float *)(param_1 + 0x24) * _DAT_36249aa0 + _DAT_36227cf0) * _DAT_36249ac0
  ;
  *(float *)(param_1 + 0x28) =
       (float)(int)ROUND(*(float *)(param_1 + 0x106c) * *(float *)(param_1 + 0x28) + _DAT_36227cf0)
       * *(float *)(param_1 + 0x1070);
  return;
}

