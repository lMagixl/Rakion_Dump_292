
void FUN_361b9100(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  
  iVar1 = DAT_36382ffc;
  for (pbVar5 = DAT_36382fe8; pbVar5 < DAT_36382ff8; pbVar5 = pbVar5 + 1) {
    if (*pbVar5 == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = (&DAT_36246ee0)[(uint)*pbVar5 * 4];
    }
    iVar2 = iVar1 * 2;
    if (*(short *)(&DAT_36246da0 + iVar2) != 0) {
      DAT_36382d5c = pbVar5;
      DAT_36382ff0 = iVar1;
    }
    uVar3 = (uint)bVar4;
    if (*(short *)(&DAT_36247860 + ((int)*(short *)(&DAT_36247390 + iVar2) + uVar3) * 2) != iVar1) {
      do {
        iVar1 = (int)*(short *)(&DAT_362474d8 + iVar2);
        if (0x9c < iVar1) {
          bVar4 = (&DAT_362472e0)[uVar3 * 4];
        }
        iVar2 = iVar1 * 2;
        uVar3 = (uint)bVar4;
      } while (*(short *)(&DAT_36247860 + ((int)*(short *)(&DAT_36247390 + iVar2) + uVar3) * 2) !=
               iVar1);
    }
    iVar1 = (int)*(short *)(&DAT_36247620 +
                           ((int)*(short *)(&DAT_36247390 + iVar1 * 2) + (uint)bVar4) * 2);
  }
  return;
}

