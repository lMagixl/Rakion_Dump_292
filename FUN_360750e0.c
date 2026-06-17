
void __cdecl FUN_360750e0(uint *param_1,ushort *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = param_3;
  do {
    do {
      uVar1 = *param_1;
      uVar2 = (ushort)(uVar1 >> 0x10);
      *param_2 = (ushort)((uVar1 & 0xf0) << 4) | (ushort)(uVar1 >> 8) & 0xf0 | (uVar2 & 0xf0) >> 4 |
                 uVar2 & 0xf000;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_2 = (ushort *)((int)param_2 + param_5 + param_3 * -2);
    param_4 = param_4 + -1;
    iVar3 = param_3;
  } while (param_4 != 0);
  return;
}

