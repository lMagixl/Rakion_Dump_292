
int __fastcall FUN_3604d150(int *param_1)

{
  int *piVar1;
  
  if (param_1[3] == 0) {
    piVar1 = FUN_3604c500(*param_1,param_1[2],0);
    param_1[3] = (int)piVar1;
    piVar1[0x31] = piVar1[0x31] & 0xfffffffe;
  }
  return param_1[3];
}

