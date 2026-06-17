
void FUN_36024da0(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  char *unaff_EDI;
  
  pcVar3 = unaff_EDI;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(unaff_EDI + 1);
  puVar5 = FUN_36024c90();
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      bVar2 = unaff_EDI[iVar6];
      *(ushort *)(puVar5 + iVar6 * 2) = (ushort)bVar2;
      if (bVar2 == 0x9f) {
        *(undefined2 *)(puVar5 + iVar6 * 2) = 0x178;
      }
      else if (bVar2 == 0x80) {
        *(undefined2 *)(puVar5 + iVar6 * 2) = 0x20ac;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(undefined2 *)(puVar5 + iVar4 * 2) = 0;
  return;
}

