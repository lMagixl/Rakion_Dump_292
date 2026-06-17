
void __fastcall FUN_361c918e(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_FUN_362493b8;
  if (piVar1 != (int *)0x0) {
    if (param_1[5] != 0) {
      (**(code **)(*piVar1 + 0xe0))(piVar1,param_1[5]);
    }
    if (param_1[4] != 0) {
      (**(code **)(*(int *)param_1[2] + 0xe0))((int *)param_1[2],param_1[4]);
    }
    (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
  }
  return;
}

