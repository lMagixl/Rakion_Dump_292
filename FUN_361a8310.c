
void __fastcall FUN_361a8310(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621bc4b;
  local_c = ExceptionList;
  pvVar1 = *(void **)(param_1 + 0x14);
  local_4 = 0;
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_36018c30();
    operator_delete(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 0xffffffff;
  FUN_361a7f20(param_1 + 4);
  pvVar1 = *(void **)(param_1 + 8);
  FUN_36018c30();
  operator_delete(pvVar1);
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

