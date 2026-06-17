
void __fastcall FUN_360ff140(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[2];
  while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
    FUN_360ff0d0(piVar2 + -0x105);
    piVar2 = piVar1;
  }
  CListHead::Clear((CListHead *)(param_1 + 2));
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_360feba0(param_1 + 8);
  return;
}

