
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360607e0(void)

{
  char cVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar2 = AllocMemory(0x55565);
  iVar3 = 0;
  pcVar7 = (char *)((int)puVar2 + 2);
  DAT_362bf878 = puVar2;
  do {
    iVar5 = 0;
    pcVar6 = pcVar7;
    do {
      cVar1 = (char)iVar3;
      cVar4 = (char)iVar5;
      *pcVar6 = cVar1 + cVar4;
      pcVar6[-1] = cVar4;
      pcVar6[-2] = cVar1;
      pcVar6[1] = cVar1 - cVar4;
      iVar5 = iVar5 + 1;
      pcVar6 = pcVar6 + 0x400;
    } while (iVar5 < 0x100);
    iVar3 = iVar3 + 1;
    pcVar7 = pcVar7 + 4;
  } while (iVar3 < 0x100);
  MakeMipmaps(puVar2,0x100,0x100,0);
  _DAT_362bf8b8 = 0;
  (*DAT_362c4688)(&DAT_362bf874);
  FUN_3607b9d0((undefined4 *)&DAT_362bf874,(int *)&DAT_362bf8b0);
  return;
}

