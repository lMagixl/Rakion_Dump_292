
void __fastcall FUN_36105e60(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)param_1[1]) {
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = puVar1[1];
  }
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1);
  }
  operator_delete(puVar1);
  return;
}

