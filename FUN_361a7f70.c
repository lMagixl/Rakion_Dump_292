
void __fastcall FUN_361a7f70(int param_1)

{
  void *pvVar1;
  
  FUN_361a7f20(param_1);
  pvVar1 = *(void **)(param_1 + 4);
  FUN_36018c30();
  operator_delete(pvVar1);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

