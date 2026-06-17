
/* public: long __thiscall CTString::TrimSpacesRight(void) */

long __thiscall CTString::TrimSpacesRight(CTString *this)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  CTString *extraout_ECX;
  char *extraout_EDX;
  char *pcVar5;
  
                    /* 0x23750  3860  ?TrimSpacesRight@CTString@@QAEJXZ */
  pcVar1 = *(char **)this;
  pcVar2 = pcVar1;
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  do {
    pcVar5 = pcVar5 + -1;
    if (pcVar5 <= pcVar1) break;
    iVar3 = FUN_360236e0(*pcVar5);
    this = extraout_ECX;
    pcVar5 = extraout_EDX;
  } while (iVar3 != 0);
  lVar4 = TrimRight(this,(long)(pcVar5 + (1 - (int)pcVar1)));
  return lVar4;
}

