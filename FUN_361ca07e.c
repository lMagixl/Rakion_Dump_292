
void __fastcall FUN_361ca07e(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_362493e0;
  FUN_361ca000((int)param_1);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  return;
}

