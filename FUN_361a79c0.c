
void __fastcall FUN_361a79c0(int param_1)

{
  void *pvVar1;
  
  if (0xf < *(uint *)(param_1 + 0x20)) {
    pvVar1 = *(void **)(param_1 + 0xc);
    FUN_36018c30();
    operator_delete(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}

