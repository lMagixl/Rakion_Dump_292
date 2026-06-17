
void __fastcall FUN_361dbc5a(int *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    if (param_1[1] != 0) {
      do {
        pvVar1 = *(void **)(*param_1 + uVar2 * 4);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < (uint)param_1[1]);
    }
    operator_delete((void *)*param_1);
  }
  return;
}

