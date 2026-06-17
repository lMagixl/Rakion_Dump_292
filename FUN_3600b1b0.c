
int __cdecl FUN_3600b1b0(ushort *param_1,ushort *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    param_3 = param_3 + (uint)*param_1;
  }
  return param_3;
}

