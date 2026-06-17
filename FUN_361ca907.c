
void __fastcall FUN_361ca907(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_36249404;
  FUN_361ca6c4((int)param_1);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  return;
}

