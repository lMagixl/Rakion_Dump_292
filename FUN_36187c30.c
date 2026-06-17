
int __cdecl FUN_36187c30(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  iVar2 = 0;
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    if ((_buseMultiByte == 1) && (cVar1 < '\0')) {
      pcVar3 = pcVar3 + 2;
      iVar2 = iVar2 + 1;
    }
    else {
      if (cVar1 != ' ') {
        iVar2 = iVar2 + 1;
      }
      pcVar3 = pcVar3 + 1;
    }
    cVar1 = *pcVar3;
  }
  return iVar2;
}

