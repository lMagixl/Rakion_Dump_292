
void __cdecl FUN_36075060(uint *param_1,ushort *param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_3;
  do {
    do {
      uVar2 = *param_1 | DAT_362c3cfc;
      uVar1 = (ushort)(uVar2 >> 0x10);
      *param_2 = (ushort)((uVar2 & 0xf8) << 7) | (ushort)((uVar2 & 0xf800) >> 6) |
                 (uVar1 & 0xf8) >> 3 | uVar1 & 0x8000;
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

