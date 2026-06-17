
undefined4 FUN_36079110(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  char *unaff_EDI;
  
  pcVar2 = strstr(in_EAX,unaff_EDI);
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    pcVar3 = unaff_EDI;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    cVar1 = pcVar2[(int)pcVar3 - (int)(unaff_EDI + 1)];
    if ((cVar1 == ' ') || (cVar1 == '\0')) break;
    pcVar2 = strstr(pcVar2 + ((int)pcVar3 - (int)(unaff_EDI + 1)),unaff_EDI);
  }
  return 1;
}

