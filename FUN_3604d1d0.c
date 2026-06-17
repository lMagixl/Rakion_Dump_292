
int __fastcall FUN_3604d1d0(int *param_1)

{
  int *piVar1;
  
  if (param_1[5] == 0) {
    piVar1 = FUN_3604c500(*param_1,param_1[2],0);
    param_1[5] = (int)piVar1;
    piVar1[0x31] = piVar1[0x31] | 1;
  }
  return param_1[5];
}

