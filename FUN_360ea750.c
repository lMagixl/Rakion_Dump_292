
int __cdecl FUN_360ea750(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pcVar2 = (char *)*param_1;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)*param_2;
  iVar5 = (int)pcVar4 - (int)(pcVar2 + 1);
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar6 = (int)pcVar4 - (int)(pcVar3 + 1);
  iVar8 = iVar6;
  if (iVar5 <= iVar6) {
    iVar8 = iVar5;
  }
  if (param_1[1] != param_2[1]) {
    return param_1[1] - param_2[1];
  }
  iVar7 = 0;
  if (0 < iVar8) {
    do {
      if (pcVar2[iVar7] != pcVar3[iVar7]) {
        return (int)pcVar2[iVar7] - (int)pcVar3[iVar7];
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  if (iVar5 == iVar6) {
    return 0;
  }
  return iVar5 - iVar6;
}

