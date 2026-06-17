
void __fastcall FUN_361440d0(byte *param_1,byte *param_2)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (int)(in_EAX + 7 + (in_EAX + 7 >> 0x1f & 7U)) >> 3;
  if (0 < iVar1) {
    do {
      *param_2 = param_1[7] & 0x80 | param_1[6] & 0x40 | param_1[5] & 0x20 | param_1[4] & 0x10 |
                 param_1[3] & 8 | param_1[2] & 4 | param_1[1] & 2 | *param_1 & 1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

