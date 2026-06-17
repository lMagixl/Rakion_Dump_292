
void __cdecl FUN_36007e90(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  pcVar3 = pcVar3 + -1;
  if (param_1 < pcVar3) {
    do {
      cVar1 = *param_1;
      *param_1 = *pcVar3;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + -1;
    } while (param_1 < pcVar3);
  }
  return;
}

