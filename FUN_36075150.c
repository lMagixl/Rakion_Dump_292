
void __cdecl FUN_36075150(uint *param_1,ushort *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_3;
  do {
    do {
      uVar1 = *param_1;
      *param_2 = (ushort)((uVar1 & 0xf8) << 8) | (ushort)((uVar1 & 0xfc00) >> 5) |
                 ((ushort)(uVar1 >> 0x10) & 0xf8) >> 3;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    param_2 = (ushort *)((int)param_2 + param_5 + param_3 * -2);
    param_4 = param_4 + -1;
    iVar2 = param_3;
  } while (param_4 != 0);
  return;
}

