
/* public: void __thiscall CTString::DeleteChars(long,long) */

void __thiscall CTString::DeleteChars(CTString *this,long param_1,long param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  
                    /* 0x23d90  1463  ?DeleteChars@CTString@@QAEXJJ@Z */
  pcVar2 = *(char **)this;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(pcVar2 + 1);
  lVar5 = iVar4;
  if ((param_1 <= iVar4) && (lVar5 = param_1, param_1 < 0)) {
    lVar5 = 0;
  }
  if (lVar5 + param_2 <= iVar4) {
    memmove(pcVar2 + lVar5,pcVar2 + lVar5 + param_2,((iVar4 - lVar5) - param_2) + 1);
    FUN_36023350((void **)this,iVar4,iVar4 - param_2);
  }
  return;
}

