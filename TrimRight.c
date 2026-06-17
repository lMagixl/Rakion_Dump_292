
/* public: long __thiscall CTString::TrimRight(long) */

long __thiscall CTString::TrimRight(CTString *this,long param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
                    /* 0x23690  3858  ?TrimRight@CTString@@QAEJJ@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = ((int)pcVar3 - (int)(pcVar2 + 1)) - param_1;
  if (iVar4 < 1) {
    return 0;
  }
  pcVar2[param_1] = '\0';
  FUN_36023350((void **)this,(int)pcVar3 - (int)(pcVar2 + 1),param_1);
  return iVar4;
}

