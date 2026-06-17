
/* public: void __thiscall CTString::ToLower(void) */

void __thiscall CTString::ToLower(CTString *this)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
                    /* 0x23830  3829  ?ToLower@CTString@@QAEXXZ */
  pcVar4 = *(char **)this;
  iVar5 = 0;
  pcVar2 = pcVar4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != pcVar4 + 1 && -1 < (int)pcVar2 - (int)(pcVar4 + 1)) {
    do {
      iVar3 = tolower((int)pcVar4[iVar5]);
      *(char *)(iVar5 + *(int *)this) = (char)iVar3;
      pcVar4 = *(char **)this;
      iVar5 = iVar5 + 1;
      pcVar2 = pcVar4;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    } while (iVar5 < (int)pcVar2 - (int)(pcVar4 + 1));
  }
  return;
}

