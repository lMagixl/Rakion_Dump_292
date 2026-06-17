
void FUN_361b7160(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  
  iVar1 = DAT_36382d18;
  for (pbVar5 = DAT_36382cf4; pbVar5 < DAT_36382d14; pbVar5 = pbVar5 + 1) {
    if (*pbVar5 == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = (&DAT_36245268)[(uint)*pbVar5 * 4];
    }
    iVar2 = iVar1 * 2;
    if (*(short *)(&DAT_36245118 + iVar2) != 0) {
      DAT_36382cf8 = pbVar5;
      DAT_36382cfc = iVar1;
    }
    uVar3 = (uint)bVar4;
    if (*(short *)(&DAT_36245d50 + ((int)*(short *)(&DAT_36245770 + iVar2) + uVar3) * 2) != iVar1) {
      do {
        iVar1 = (int)*(short *)(&DAT_362458d8 + iVar2);
        if (0xa4 < iVar1) {
          bVar4 = (&DAT_36245668)[uVar3 * 4];
        }
        iVar2 = iVar1 * 2;
        uVar3 = (uint)bVar4;
      } while (*(short *)(&DAT_36245d50 + ((int)*(short *)(&DAT_36245770 + iVar2) + uVar3) * 2) !=
               iVar1);
    }
    iVar1 = (int)*(short *)(&DAT_36245a40 +
                           ((int)*(short *)(&DAT_36245770 + iVar1 * 2) + (uint)bVar4) * 2);
  }
  return;
}

