
uint FUN_361b91d0(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  iVar1 = in_EAX * 2;
  uVar2 = 1;
  if (*(short *)(&DAT_36246da0 + iVar1) != 0) {
    DAT_36382d5c = DAT_36382ff8;
    DAT_36382ff0 = in_EAX;
  }
  if (*(short *)(&DAT_36247862 + *(short *)(&DAT_36247390 + iVar1) * 2) != in_EAX) {
    do {
      in_EAX = (int)*(short *)(&DAT_362474d8 + iVar1);
      if (0x9c < in_EAX) {
        uVar2 = (uint)(byte)(&DAT_362472e0)[uVar2 * 4];
      }
      iVar1 = in_EAX * 2;
    } while (*(short *)(&DAT_36247860 + ((int)*(short *)(&DAT_36247390 + iVar1) + uVar2) * 2) !=
             in_EAX);
  }
  return (int)*(short *)(&DAT_36247620 + ((int)*(short *)(&DAT_36247390 + in_EAX * 2) + uVar2) * 2)
         & ((int)*(short *)(&DAT_36247620 +
                           ((int)*(short *)(&DAT_36247390 + in_EAX * 2) + uVar2) * 2) == 0x9c) - 1;
}

