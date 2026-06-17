
int __fastcall FUN_3604d190(int *param_1)

{
  int *piVar1;
  
  if (param_1[4] == 0) {
    piVar1 = FUN_3604c500(*param_1,param_1[2],0);
    param_1[4] = (int)piVar1;
    piVar1[0x31] = piVar1[0x31] & 0xfffffffe;
  }
  return param_1[4];
}

