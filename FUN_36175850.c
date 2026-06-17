
int * __fastcall FUN_36175850(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_36300a88;
  do {
    piVar2 = piVar1;
    if ((int *)*piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar1 = (int *)*piVar2;
  } while (piVar2[2] < param_2);
  return piVar2;
}

