
char * __fastcall FUN_3601f5f0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  
  pcVar4 = *(char **)(param_1 + 0xc);
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar6 = *(int *)(param_1 + 0x14);
  pcVar4 = pcVar4 + ((iVar6 * 0x2c + 0x1d) - (int)pcVar1);
  if (0 < iVar6) {
    piVar5 = (int *)(*(int *)(param_1 + 0x18) + 0x24);
    do {
      iVar3 = *piVar5;
      piVar5 = piVar5 + 0xb;
      iVar6 = iVar6 + -1;
      pcVar4 = pcVar4 + iVar3 * 4;
    } while (iVar6 != 0);
  }
  return pcVar4;
}

