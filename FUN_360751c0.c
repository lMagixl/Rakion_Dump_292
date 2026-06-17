
void __cdecl FUN_360751c0(undefined4 *param_1,ushort *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = param_3;
  do {
    do {
      *param_2 = (ushort)(byte)*param_1 | (ushort)((uint)*param_1 >> 0x10) & 0xff00;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_2 = (ushort *)((int)param_2 + param_5 + param_3 * -2);
    param_4 = param_4 + -1;
    iVar1 = param_3;
  } while (param_4 != 0);
  return;
}

