
void __fastcall FUN_36010560(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620dae8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_36223460;
  pvVar1 = (void *)param_1[2];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_361a8e70((int)pvVar1);
    operator_delete(pvVar1);
  }
  local_4 = 0xffffffff;
  FUN_361a9720(param_1);
  ExceptionList = local_c;
  return;
}

