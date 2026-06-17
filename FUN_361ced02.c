
void __fastcall FUN_361ced02(int param_1)

{
  void *pvVar1;
  
  if ((*(void **)(param_1 + 4) != (void *)0x0) && (*(int *)(param_1 + 0x38) != 0)) {
    operator_delete(*(void **)(param_1 + 4));
  }
  if ((*(void **)(param_1 + 8) != (void *)0x0) && (*(int *)(param_1 + 0x3c) != 0)) {
    operator_delete(*(void **)(param_1 + 8));
  }
  pvVar1 = *(void **)(param_1 + 0x4c);
  if (pvVar1 != (void *)0x0) {
    FUN_361ced02((int)pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x50);
  if (pvVar1 != (void *)0x0) {
    FUN_361ced02((int)pvVar1);
    operator_delete(pvVar1);
  }
  return;
}

