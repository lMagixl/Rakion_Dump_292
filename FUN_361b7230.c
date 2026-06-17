
uint FUN_361b7230(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  iVar1 = in_EAX * 2;
  uVar2 = 1;
  if (*(short *)(&DAT_36245118 + iVar1) != 0) {
    DAT_36382cf8 = DAT_36382d14;
    DAT_36382cfc = in_EAX;
  }
  if (*(short *)(&DAT_36245d52 + *(short *)(&DAT_36245770 + iVar1) * 2) != in_EAX) {
    do {
      in_EAX = (int)*(short *)(&DAT_362458d8 + iVar1);
      if (0xa4 < in_EAX) {
        uVar2 = (uint)(byte)(&DAT_36245668)[uVar2 * 4];
      }
      iVar1 = in_EAX * 2;
    } while (*(short *)(&DAT_36245d50 + ((int)*(short *)(&DAT_36245770 + iVar1) + uVar2) * 2) !=
             in_EAX);
  }
  return (int)*(short *)(&DAT_36245a40 + ((int)*(short *)(&DAT_36245770 + in_EAX * 2) + uVar2) * 2)
         & ((int)*(short *)(&DAT_36245a40 +
                           ((int)*(short *)(&DAT_36245770 + in_EAX * 2) + uVar2) * 2) == 0xa4) - 1;
}

