
void __fastcall FUN_361a7920(int param_1)

{
  void *pvVar1;
  
  if (0xf < *(uint *)(param_1 + 0x1c)) {
    pvVar1 = *(void **)(param_1 + 8);
    FUN_36018c30();
    operator_delete(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

