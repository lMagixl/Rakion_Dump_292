
void __cdecl FUN_3617d840(int param_1,int param_2,int param_3,int param_4)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = (param_4 - param_2) * (param_3 - param_1);
  while (0xfffe < iVar1 * 6) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    param_4 = param_4 + -1;
    iVar1 = (param_4 - param_2) * (param_3 - param_1);
  }
  in_EAX[2] = param_3;
  in_EAX[1] = param_2;
  in_EAX[3] = param_4;
  *in_EAX = param_1;
  return;
}

