
void __fastcall FUN_361a8a20(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *local_4;
  
  *param_1 = &PTR_LAB_36243734;
  local_4 = param_1;
  FUN_3601ed30(param_1 + 2,&local_4,*(int **)param_1[3],(int *)param_1[3]);
  pvVar1 = (void *)param_1[3];
  FUN_36018c30();
  operator_delete(pvVar1);
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

