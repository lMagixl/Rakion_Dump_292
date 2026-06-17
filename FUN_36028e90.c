
void __cdecl FUN_36028e90(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  
  iVar5 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0x18) + iVar5;
    pcVar2 = StringDuplicate(&DAT_362250e0);
    StringFree(*(char **)(iVar4 + 0x10));
    *(char **)(iVar4 + 0x10) = pcVar2;
    pcVar2 = Translate(s_ETRSNone_362250e8,4);
    pcVar2 = StringDuplicate(pcVar2);
    StringFree(*(char **)(iVar4 + 0x14));
    iVar5 = iVar5 + 0x18;
    *(char **)(iVar4 + 0x14) = pcVar2;
  } while (iVar5 < 0x1800);
  ppuVar6 = &PTR_DAT_362a1ba0;
  do {
    if (*ppuVar6 != (char *)0x0) {
      iVar5 = *(int *)(param_1 + 0x18) + (int)ppuVar6[-4] * 0x18;
      pcVar2 = StringDuplicate(*ppuVar6);
      StringFree(*(char **)(iVar5 + 0x10));
      *(char **)(iVar5 + 0x10) = pcVar2;
      pcVar2 = ppuVar6[1];
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 == pcVar2 + 1) {
        pcVar2 = StringDuplicate(*ppuVar6);
        StringFree(*(char **)(iVar5 + 0x14));
      }
      else {
        pcVar2 = TranslateConst(pcVar2,4);
        pcVar2 = StringDuplicate(pcVar2);
        StringFree(*(char **)(iVar5 + 0x14));
      }
      *(char **)(iVar5 + 0x14) = pcVar2;
    }
    ppuVar6 = ppuVar6 + 6;
  } while ((int)ppuVar6 < 0x362a2608);
  return;
}

