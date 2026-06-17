
void __fastcall FUN_36144130(byte *param_1,byte *param_2)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (int)(in_EAX + 7 + (in_EAX + 7 >> 0x1f & 7U)) >> 3;
  if (0 < iVar1) {
    do {
      *param_2 = *param_1 & 1;
      param_2[1] = *param_1 & 2;
      param_2[2] = *param_1 & 4;
      param_2[3] = *param_1 & 8;
      param_2[4] = *param_1 & 0x10;
      param_2[5] = *param_1 & 0x20;
      param_2[6] = *param_1 & 0x40;
      param_2[7] = *param_1 & 0x80;
      param_1 = param_1 + 1;
      param_2 = param_2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

