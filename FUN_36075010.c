
void __cdecl FUN_36075010(uint *param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_3;
  do {
    do {
      uVar1 = *param_1 | DAT_362c3cfc;
      *param_2 = ((uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 8 |
                 uVar1 & 0xff000000;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    param_2 = (uint *)((int)param_2 + param_5 + param_3 * -4);
    param_4 = param_4 + -1;
    iVar2 = param_3;
  } while (param_4 != 0);
  return;
}

