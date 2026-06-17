
void __fastcall FUN_3601bdd0(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620e788;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    ExceptionList = &local_c;
    FUN_3600cd20(*(int **)(param_1 + 0x20));
  }
  local_4 = 0xffffffff;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    pvVar1 = *(void **)(param_1 + 4);
    FUN_36018c30();
    operator_delete(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  ExceptionList = local_c;
  return;
}

