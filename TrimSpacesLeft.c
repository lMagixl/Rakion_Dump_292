
/* public: long __thiscall CTString::TrimSpacesLeft(void) */

long __thiscall CTString::TrimSpacesLeft(CTString *this)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  CTString *extraout_ECX;
  char *extraout_EDX;
  char *pcVar6;
  
                    /* 0x23700  3859  ?TrimSpacesLeft@CTString@@QAEJXZ */
  pcVar6 = *(char **)this;
  cVar1 = *pcVar6;
  pcVar2 = pcVar6;
  while ((cVar1 != '\0' &&
         (iVar3 = FUN_360236e0(cVar1), pcVar2 = extraout_EDX, this = extraout_ECX, iVar3 != 0))) {
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
    pcVar2 = extraout_EDX;
  }
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  lVar5 = TrimLeft(this,(int)pcVar4 - (int)pcVar6);
  return lVar5;
}

